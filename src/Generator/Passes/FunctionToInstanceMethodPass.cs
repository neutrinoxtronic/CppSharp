﻿using System.Linq;
using CppSharp.AST;
using CppSharp.AST.Extensions;
using CppSharp.Generators;

namespace CppSharp.Passes
{
    /// <summary>
    /// This pass will try to hoist functions into classes so they
    /// work just like instance methods.
    /// </summary>
    public class FunctionToInstanceMethodPass : TranslationUnitPass
    {
        public override bool VisitMethodDecl(Method method)
        {
            return true;
        }

        public override bool VisitFunctionDecl(Function function)
        {
            if (AlreadyVisited(function))
                return false;

            if (!function.IsGenerated)
                return false;

            // Check if this function can be converted.
            if (function.Parameters.Count == 0)
                return false;

            var classParam = function.Parameters[0];

            Class @class;
            if (!GetClassParameter(classParam, out @class))
                return false;

            // If we reach here, it means the first parameter is of class type.
            // This means we can change the function to be an instance method.

            // Clean up the name of the function now that it will be an instance method.
            if (!function.Name.StartsWith(@class.Name, System.StringComparison.Ordinal))
                return false;

            function.Name = function.Name.Substring(@class.Name.Length);
            function.ExplicitlyIgnore();

            // Create a new fake method so it acts as an instance method.
            var method = new Method
            {
                Namespace = @class,
                OriginalNamespace = function.Namespace,
                Name = function.Name,
                OriginalName = function.OriginalName,
                Mangled = function.Mangled,
                Access = AccessSpecifier.Public,
                Kind = CXXMethodKind.Normal,
                ReturnType = function.ReturnType,
                CallingConvention = function.CallingConvention,
                IsVariadic = function.IsVariadic,
                IsInline = function.IsInline,
                Conversion = MethodConversionKind.FunctionToInstanceMethod,
                FunctionType = function.FunctionType
            };

            method.Parameters.AddRange(function.Parameters.Select(
                p => new Parameter(p) { Namespace = method }));

            if (Options.GeneratorKind == GeneratorKind.CSharp)
                method.Parameters.RemoveAt(0);

            @class.Methods.Add(method);

            Diagnostics.Debug("Function converted to instance method: {0}::{1}", @class.Name,
                function.Name);

            return true;
        }

        public static bool GetClassParameter(Parameter classParam, out Class @class)
        {
            TagType tag;
            if (classParam.Type.IsPointerTo(out tag))
            {
                @class = tag.Declaration as Class;
                return @class != null;
            }

            return classParam.Type.TryGetClass(out @class);
        }
    }
}
