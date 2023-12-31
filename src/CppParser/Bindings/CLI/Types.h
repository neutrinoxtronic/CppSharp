// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include "CppSharp.h"
#include <Types.h>

namespace CppSharp
{
    namespace Parser
    {
        namespace AST
        {
            enum class CallingConvention;
            enum class ExceptionSpecType;
            enum class PrimitiveType;
            enum class TypeKind;
            ref class ArrayType;
            ref class AttributedType;
            ref class BuiltinType;
            ref class Class;
            ref class DecayedType;
            ref class Declaration;
            ref class DependentNameType;
            ref class DependentTemplateSpecializationType;
            ref class FunctionType;
            ref class InjectedClassNameType;
            ref class MemberPointerType;
            ref class PackExpansionType;
            ref class Parameter;
            ref class PointerType;
            ref class QualifiedType;
            ref class TagType;
            ref class Template;
            ref class TemplateArgument;
            ref class TemplateParameterSubstitutionType;
            ref class TemplateParameterType;
            ref class TemplateSpecializationType;
            ref class Type;
            ref class TypeQualifiers;
            ref class TypeTemplateParameter;
            ref class TypedefNameDecl;
            ref class TypedefType;
            ref class UnaryTransformType;
            ref class UnresolvedUsingType;
            ref class UnresolvedUsingTypename;
            ref class VectorType;
        }
    }
}

namespace CppSharp
{
    namespace Parser
    {
        namespace AST
        {
            public enum class TypeKind
            {
                Tag = 0,
                Array = 1,
                Function = 2,
                Pointer = 3,
                MemberPointer = 4,
                Typedef = 5,
                Attributed = 6,
                Decayed = 7,
                TemplateSpecialization = 8,
                DependentTemplateSpecialization = 9,
                TemplateParameter = 10,
                TemplateParameterSubstitution = 11,
                InjectedClassName = 12,
                DependentName = 13,
                PackExpansion = 14,
                Builtin = 15,
                UnaryTransform = 16,
                UnresolvedUsing = 17,
                Vector = 18
            };

            public enum class CallingConvention
            {
                Default = 0,
                C = 1,
                StdCall = 2,
                ThisCall = 3,
                FastCall = 4,
                Unknown = 5
            };

            public enum class PrimitiveType
            {
                Null = 0,
                Void = 1,
                Bool = 2,
                WideChar = 3,
                Char = 4,
                SChar = 5,
                UChar = 6,
                Char16 = 7,
                Char32 = 8,
                Short = 9,
                UShort = 10,
                Int = 11,
                UInt = 12,
                Long = 13,
                ULong = 14,
                LongLong = 15,
                ULongLong = 16,
                Int128 = 17,
                UInt128 = 18,
                Half = 19,
                Float = 20,
                Double = 21,
                LongDouble = 22,
                Float128 = 23,
                IntPtr = 24
            };

            public enum class ExceptionSpecType
            {
                None = 0,
                DynamicNone = 1,
                Dynamic = 2,
                MSAny = 3,
                BasicNoexcept = 4,
                DependentNoexcept = 5,
                NoexceptFalse = 6,
                NoexceptTrue = 7,
                Unevaluated = 8,
                Uninstantiated = 9,
                Unparsed = 10
            };

            public ref class Type : ICppInstance
            {
            public:

                property class ::CppSharp::CppParser::AST::Type* NativePtr;
                property ::System::IntPtr __Instance
                {
                    virtual ::System::IntPtr get();
                    virtual void set(::System::IntPtr instance);
                }

                Type(class ::CppSharp::CppParser::AST::Type* native);
                Type(class ::CppSharp::CppParser::AST::Type* native, bool ownNativeInstance);
                static Type^ __CreateInstance(::System::IntPtr native);
                static Type^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                Type(CppSharp::Parser::AST::TypeKind kind);

                Type(CppSharp::Parser::AST::Type^ _0);

                ~Type();

                property CppSharp::Parser::AST::TypeKind Kind
                {
                    CppSharp::Parser::AST::TypeKind get();
                    void set(CppSharp::Parser::AST::TypeKind);
                }

                property bool IsDependent
                {
                    bool get();
                    void set(bool);
                }

                static operator CppSharp::Parser::AST::Type^(CppSharp::Parser::AST::TypeKind kind);

            protected:

                bool __ownsNativeInstance;
            };

            public ref class TypeQualifiers : ICppInstance
            {
            public:

                property struct ::CppSharp::CppParser::AST::TypeQualifiers* NativePtr;
                property ::System::IntPtr __Instance
                {
                    virtual ::System::IntPtr get();
                    virtual void set(::System::IntPtr instance);
                }

                TypeQualifiers(struct ::CppSharp::CppParser::AST::TypeQualifiers* native);
                TypeQualifiers(struct ::CppSharp::CppParser::AST::TypeQualifiers* native, bool ownNativeInstance);
                static TypeQualifiers^ __CreateInstance(::System::IntPtr native);
                static TypeQualifiers^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                TypeQualifiers(CppSharp::Parser::AST::TypeQualifiers^ _0);

                TypeQualifiers();

                ~TypeQualifiers();

                property bool IsConst
                {
                    bool get();
                    void set(bool);
                }

                property bool IsVolatile
                {
                    bool get();
                    void set(bool);
                }

                property bool IsRestrict
                {
                    bool get();
                    void set(bool);
                }

            protected:

                bool __ownsNativeInstance;
            };

            public ref class QualifiedType : ICppInstance
            {
            public:

                property struct ::CppSharp::CppParser::AST::QualifiedType* NativePtr;
                property ::System::IntPtr __Instance
                {
                    virtual ::System::IntPtr get();
                    virtual void set(::System::IntPtr instance);
                }

                QualifiedType(struct ::CppSharp::CppParser::AST::QualifiedType* native);
                QualifiedType(struct ::CppSharp::CppParser::AST::QualifiedType* native, bool ownNativeInstance);
                static QualifiedType^ __CreateInstance(::System::IntPtr native);
                static QualifiedType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                QualifiedType();

                QualifiedType(CppSharp::Parser::AST::QualifiedType^ _0);

                ~QualifiedType();

                property CppSharp::Parser::AST::Type^ Type
                {
                    CppSharp::Parser::AST::Type^ get();
                    void set(CppSharp::Parser::AST::Type^);
                }

                property CppSharp::Parser::AST::TypeQualifiers^ Qualifiers
                {
                    CppSharp::Parser::AST::TypeQualifiers^ get();
                    void set(CppSharp::Parser::AST::TypeQualifiers^);
                }

            protected:

                bool __ownsNativeInstance;
            };

            public ref class TagType : CppSharp::Parser::AST::Type
            {
            public:

                TagType(class ::CppSharp::CppParser::AST::TagType* native);
                TagType(class ::CppSharp::CppParser::AST::TagType* native, bool ownNativeInstance);
                static TagType^ __CreateInstance(::System::IntPtr native);
                static TagType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                TagType();

                TagType(CppSharp::Parser::AST::TagType^ _0);

                ~TagType();

                property CppSharp::Parser::AST::Declaration^ Declaration
                {
                    CppSharp::Parser::AST::Declaration^ get();
                    void set(CppSharp::Parser::AST::Declaration^);
                }
            };

            public ref class ArrayType : CppSharp::Parser::AST::Type
            {
            public:

                enum class ArraySize
                {
                    Constant = 0,
                    Variable = 1,
                    Dependent = 2,
                    Incomplete = 3
                };

                ArrayType(class ::CppSharp::CppParser::AST::ArrayType* native);
                ArrayType(class ::CppSharp::CppParser::AST::ArrayType* native, bool ownNativeInstance);
                static ArrayType^ __CreateInstance(::System::IntPtr native);
                static ArrayType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                ArrayType();

                ArrayType(CppSharp::Parser::AST::ArrayType^ _0);

                ~ArrayType();

                property CppSharp::Parser::AST::QualifiedType^ QualifiedType
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property CppSharp::Parser::AST::ArrayType::ArraySize SizeType
                {
                    CppSharp::Parser::AST::ArrayType::ArraySize get();
                    void set(CppSharp::Parser::AST::ArrayType::ArraySize);
                }

                property long Size
                {
                    long get();
                    void set(long);
                }

                property long ElementSize
                {
                    long get();
                    void set(long);
                }
            };

            public ref class FunctionType : CppSharp::Parser::AST::Type
            {
            public:

                FunctionType(class ::CppSharp::CppParser::AST::FunctionType* native);
                FunctionType(class ::CppSharp::CppParser::AST::FunctionType* native, bool ownNativeInstance);
                static FunctionType^ __CreateInstance(::System::IntPtr native);
                static FunctionType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                FunctionType();

                FunctionType(CppSharp::Parser::AST::FunctionType^ _0);

                ~FunctionType();

                property CppSharp::Parser::AST::QualifiedType^ ReturnType
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property CppSharp::Parser::AST::CallingConvention CallingConvention
                {
                    CppSharp::Parser::AST::CallingConvention get();
                    void set(CppSharp::Parser::AST::CallingConvention);
                }

                property CppSharp::Parser::AST::ExceptionSpecType ExceptionSpecType
                {
                    CppSharp::Parser::AST::ExceptionSpecType get();
                    void set(CppSharp::Parser::AST::ExceptionSpecType);
                }

                property ::System::Collections::Generic::List<CppSharp::Parser::AST::Parameter^>^ Parameters
                {
                    ::System::Collections::Generic::List<CppSharp::Parser::AST::Parameter^>^ get();
                    void set(::System::Collections::Generic::List<CppSharp::Parser::AST::Parameter^>^);
                }

                property unsigned int ParametersCount
                {
                    unsigned int get();
                }

                CppSharp::Parser::AST::Parameter^ GetParameters(unsigned int i);

                void AddParameters(CppSharp::Parser::AST::Parameter^ s);

                void ClearParameters();
            };

            public ref class PointerType : CppSharp::Parser::AST::Type
            {
            public:

                enum class TypeModifier
                {
                    Value = 0,
                    Pointer = 1,
                    LVReference = 2,
                    RVReference = 3
                };

                PointerType(class ::CppSharp::CppParser::AST::PointerType* native);
                PointerType(class ::CppSharp::CppParser::AST::PointerType* native, bool ownNativeInstance);
                static PointerType^ __CreateInstance(::System::IntPtr native);
                static PointerType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                PointerType();

                PointerType(CppSharp::Parser::AST::PointerType^ _0);

                ~PointerType();

                property CppSharp::Parser::AST::QualifiedType^ QualifiedPointee
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property CppSharp::Parser::AST::PointerType::TypeModifier Modifier
                {
                    CppSharp::Parser::AST::PointerType::TypeModifier get();
                    void set(CppSharp::Parser::AST::PointerType::TypeModifier);
                }
            };

            public ref class MemberPointerType : CppSharp::Parser::AST::Type
            {
            public:

                MemberPointerType(class ::CppSharp::CppParser::AST::MemberPointerType* native);
                MemberPointerType(class ::CppSharp::CppParser::AST::MemberPointerType* native, bool ownNativeInstance);
                static MemberPointerType^ __CreateInstance(::System::IntPtr native);
                static MemberPointerType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                MemberPointerType();

                MemberPointerType(CppSharp::Parser::AST::MemberPointerType^ _0);

                ~MemberPointerType();

                property CppSharp::Parser::AST::QualifiedType^ Pointee
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }
            };

            public ref class TypedefType : CppSharp::Parser::AST::Type
            {
            public:

                TypedefType(class ::CppSharp::CppParser::AST::TypedefType* native);
                TypedefType(class ::CppSharp::CppParser::AST::TypedefType* native, bool ownNativeInstance);
                static TypedefType^ __CreateInstance(::System::IntPtr native);
                static TypedefType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                TypedefType();

                TypedefType(CppSharp::Parser::AST::TypedefType^ _0);

                ~TypedefType();

                property CppSharp::Parser::AST::TypedefNameDecl^ Declaration
                {
                    CppSharp::Parser::AST::TypedefNameDecl^ get();
                    void set(CppSharp::Parser::AST::TypedefNameDecl^);
                }
            };

            public ref class AttributedType : CppSharp::Parser::AST::Type
            {
            public:

                AttributedType(class ::CppSharp::CppParser::AST::AttributedType* native);
                AttributedType(class ::CppSharp::CppParser::AST::AttributedType* native, bool ownNativeInstance);
                static AttributedType^ __CreateInstance(::System::IntPtr native);
                static AttributedType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                AttributedType();

                AttributedType(CppSharp::Parser::AST::AttributedType^ _0);

                ~AttributedType();

                property CppSharp::Parser::AST::QualifiedType^ Modified
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property CppSharp::Parser::AST::QualifiedType^ Equivalent
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }
            };

            public ref class DecayedType : CppSharp::Parser::AST::Type
            {
            public:

                DecayedType(class ::CppSharp::CppParser::AST::DecayedType* native);
                DecayedType(class ::CppSharp::CppParser::AST::DecayedType* native, bool ownNativeInstance);
                static DecayedType^ __CreateInstance(::System::IntPtr native);
                static DecayedType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                DecayedType();

                DecayedType(CppSharp::Parser::AST::DecayedType^ _0);

                ~DecayedType();

                property CppSharp::Parser::AST::QualifiedType^ Decayed
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property CppSharp::Parser::AST::QualifiedType^ Original
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property CppSharp::Parser::AST::QualifiedType^ Pointee
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }
            };

            public ref class TemplateArgument : ICppInstance
            {
            public:

                enum class ArgumentKind
                {
                    Type = 0,
                    Declaration = 1,
                    NullPtr = 2,
                    Integral = 3,
                    Template = 4,
                    TemplateExpansion = 5,
                    Expression = 6,
                    Pack = 7
                };

                property struct ::CppSharp::CppParser::AST::TemplateArgument* NativePtr;
                property ::System::IntPtr __Instance
                {
                    virtual ::System::IntPtr get();
                    virtual void set(::System::IntPtr instance);
                }

                TemplateArgument(struct ::CppSharp::CppParser::AST::TemplateArgument* native);
                TemplateArgument(struct ::CppSharp::CppParser::AST::TemplateArgument* native, bool ownNativeInstance);
                static TemplateArgument^ __CreateInstance(::System::IntPtr native);
                static TemplateArgument^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                TemplateArgument();

                TemplateArgument(CppSharp::Parser::AST::TemplateArgument^ _0);

                ~TemplateArgument();

                property CppSharp::Parser::AST::TemplateArgument::ArgumentKind Kind
                {
                    CppSharp::Parser::AST::TemplateArgument::ArgumentKind get();
                    void set(CppSharp::Parser::AST::TemplateArgument::ArgumentKind);
                }

                property CppSharp::Parser::AST::QualifiedType^ Type
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property CppSharp::Parser::AST::Declaration^ Declaration
                {
                    CppSharp::Parser::AST::Declaration^ get();
                    void set(CppSharp::Parser::AST::Declaration^);
                }

                property long Integral
                {
                    long get();
                    void set(long);
                }

            protected:

                bool __ownsNativeInstance;
            };

            public ref class TemplateSpecializationType : CppSharp::Parser::AST::Type
            {
            public:

                TemplateSpecializationType(class ::CppSharp::CppParser::AST::TemplateSpecializationType* native);
                TemplateSpecializationType(class ::CppSharp::CppParser::AST::TemplateSpecializationType* native, bool ownNativeInstance);
                static TemplateSpecializationType^ __CreateInstance(::System::IntPtr native);
                static TemplateSpecializationType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                TemplateSpecializationType();

                TemplateSpecializationType(CppSharp::Parser::AST::TemplateSpecializationType^ _0);

                ~TemplateSpecializationType();

                property ::System::Collections::Generic::List<CppSharp::Parser::AST::TemplateArgument^>^ Arguments
                {
                    ::System::Collections::Generic::List<CppSharp::Parser::AST::TemplateArgument^>^ get();
                    void set(::System::Collections::Generic::List<CppSharp::Parser::AST::TemplateArgument^>^);
                }

                property CppSharp::Parser::AST::Template^ Template
                {
                    CppSharp::Parser::AST::Template^ get();
                    void set(CppSharp::Parser::AST::Template^);
                }

                property CppSharp::Parser::AST::QualifiedType^ Desugared
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property unsigned int ArgumentsCount
                {
                    unsigned int get();
                }

                CppSharp::Parser::AST::TemplateArgument^ GetArguments(unsigned int i);

                void AddArguments(CppSharp::Parser::AST::TemplateArgument^ s);

                void ClearArguments();
            };

            public ref class DependentTemplateSpecializationType : CppSharp::Parser::AST::Type
            {
            public:

                DependentTemplateSpecializationType(class ::CppSharp::CppParser::AST::DependentTemplateSpecializationType* native);
                DependentTemplateSpecializationType(class ::CppSharp::CppParser::AST::DependentTemplateSpecializationType* native, bool ownNativeInstance);
                static DependentTemplateSpecializationType^ __CreateInstance(::System::IntPtr native);
                static DependentTemplateSpecializationType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                DependentTemplateSpecializationType();

                DependentTemplateSpecializationType(CppSharp::Parser::AST::DependentTemplateSpecializationType^ _0);

                ~DependentTemplateSpecializationType();

                property ::System::Collections::Generic::List<CppSharp::Parser::AST::TemplateArgument^>^ Arguments
                {
                    ::System::Collections::Generic::List<CppSharp::Parser::AST::TemplateArgument^>^ get();
                    void set(::System::Collections::Generic::List<CppSharp::Parser::AST::TemplateArgument^>^);
                }

                property CppSharp::Parser::AST::QualifiedType^ Desugared
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property unsigned int ArgumentsCount
                {
                    unsigned int get();
                }

                CppSharp::Parser::AST::TemplateArgument^ GetArguments(unsigned int i);

                void AddArguments(CppSharp::Parser::AST::TemplateArgument^ s);

                void ClearArguments();
            };

            public ref class TemplateParameterType : CppSharp::Parser::AST::Type
            {
            public:

                TemplateParameterType(class ::CppSharp::CppParser::AST::TemplateParameterType* native);
                TemplateParameterType(class ::CppSharp::CppParser::AST::TemplateParameterType* native, bool ownNativeInstance);
                static TemplateParameterType^ __CreateInstance(::System::IntPtr native);
                static TemplateParameterType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                TemplateParameterType();

                TemplateParameterType(CppSharp::Parser::AST::TemplateParameterType^ _0);

                ~TemplateParameterType();

                property CppSharp::Parser::AST::TypeTemplateParameter^ Parameter
                {
                    CppSharp::Parser::AST::TypeTemplateParameter^ get();
                    void set(CppSharp::Parser::AST::TypeTemplateParameter^);
                }

                property unsigned int Depth
                {
                    unsigned int get();
                    void set(unsigned int);
                }

                property unsigned int Index
                {
                    unsigned int get();
                    void set(unsigned int);
                }

                property bool IsParameterPack
                {
                    bool get();
                    void set(bool);
                }
            };

            public ref class TemplateParameterSubstitutionType : CppSharp::Parser::AST::Type
            {
            public:

                TemplateParameterSubstitutionType(class ::CppSharp::CppParser::AST::TemplateParameterSubstitutionType* native);
                TemplateParameterSubstitutionType(class ::CppSharp::CppParser::AST::TemplateParameterSubstitutionType* native, bool ownNativeInstance);
                static TemplateParameterSubstitutionType^ __CreateInstance(::System::IntPtr native);
                static TemplateParameterSubstitutionType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                TemplateParameterSubstitutionType();

                TemplateParameterSubstitutionType(CppSharp::Parser::AST::TemplateParameterSubstitutionType^ _0);

                ~TemplateParameterSubstitutionType();

                property CppSharp::Parser::AST::QualifiedType^ Replacement
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property CppSharp::Parser::AST::TemplateParameterType^ ReplacedParameter
                {
                    CppSharp::Parser::AST::TemplateParameterType^ get();
                    void set(CppSharp::Parser::AST::TemplateParameterType^);
                }
            };

            public ref class InjectedClassNameType : CppSharp::Parser::AST::Type
            {
            public:

                InjectedClassNameType(class ::CppSharp::CppParser::AST::InjectedClassNameType* native);
                InjectedClassNameType(class ::CppSharp::CppParser::AST::InjectedClassNameType* native, bool ownNativeInstance);
                static InjectedClassNameType^ __CreateInstance(::System::IntPtr native);
                static InjectedClassNameType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                InjectedClassNameType();

                InjectedClassNameType(CppSharp::Parser::AST::InjectedClassNameType^ _0);

                ~InjectedClassNameType();

                property CppSharp::Parser::AST::QualifiedType^ InjectedSpecializationType
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property CppSharp::Parser::AST::Class^ Class
                {
                    CppSharp::Parser::AST::Class^ get();
                    void set(CppSharp::Parser::AST::Class^);
                }
            };

            public ref class DependentNameType : CppSharp::Parser::AST::Type
            {
            public:

                DependentNameType(class ::CppSharp::CppParser::AST::DependentNameType* native);
                DependentNameType(class ::CppSharp::CppParser::AST::DependentNameType* native, bool ownNativeInstance);
                static DependentNameType^ __CreateInstance(::System::IntPtr native);
                static DependentNameType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                DependentNameType();

                DependentNameType(CppSharp::Parser::AST::DependentNameType^ _0);

                ~DependentNameType();

                property CppSharp::Parser::AST::QualifiedType^ Qualifier
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property ::System::String^ Identifier
                {
                    ::System::String^ get();
                    void set(::System::String^);
                }
            };

            public ref class PackExpansionType : CppSharp::Parser::AST::Type
            {
            public:

                PackExpansionType(class ::CppSharp::CppParser::AST::PackExpansionType* native);
                PackExpansionType(class ::CppSharp::CppParser::AST::PackExpansionType* native, bool ownNativeInstance);
                static PackExpansionType^ __CreateInstance(::System::IntPtr native);
                static PackExpansionType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                PackExpansionType();

                PackExpansionType(CppSharp::Parser::AST::PackExpansionType^ _0);

                ~PackExpansionType();
            };

            public ref class UnaryTransformType : CppSharp::Parser::AST::Type
            {
            public:

                UnaryTransformType(class ::CppSharp::CppParser::AST::UnaryTransformType* native);
                UnaryTransformType(class ::CppSharp::CppParser::AST::UnaryTransformType* native, bool ownNativeInstance);
                static UnaryTransformType^ __CreateInstance(::System::IntPtr native);
                static UnaryTransformType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                UnaryTransformType();

                UnaryTransformType(CppSharp::Parser::AST::UnaryTransformType^ _0);

                ~UnaryTransformType();

                property CppSharp::Parser::AST::QualifiedType^ Desugared
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property CppSharp::Parser::AST::QualifiedType^ BaseType
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }
            };

            public ref class UnresolvedUsingType : CppSharp::Parser::AST::Type
            {
            public:

                UnresolvedUsingType(class ::CppSharp::CppParser::AST::UnresolvedUsingType* native);
                UnresolvedUsingType(class ::CppSharp::CppParser::AST::UnresolvedUsingType* native, bool ownNativeInstance);
                static UnresolvedUsingType^ __CreateInstance(::System::IntPtr native);
                static UnresolvedUsingType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                UnresolvedUsingType();

                UnresolvedUsingType(CppSharp::Parser::AST::UnresolvedUsingType^ _0);

                ~UnresolvedUsingType();

                property CppSharp::Parser::AST::UnresolvedUsingTypename^ Declaration
                {
                    CppSharp::Parser::AST::UnresolvedUsingTypename^ get();
                    void set(CppSharp::Parser::AST::UnresolvedUsingTypename^);
                }
            };

            public ref class VectorType : CppSharp::Parser::AST::Type
            {
            public:

                VectorType(class ::CppSharp::CppParser::AST::VectorType* native);
                VectorType(class ::CppSharp::CppParser::AST::VectorType* native, bool ownNativeInstance);
                static VectorType^ __CreateInstance(::System::IntPtr native);
                static VectorType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                VectorType();

                VectorType(CppSharp::Parser::AST::VectorType^ _0);

                ~VectorType();

                property CppSharp::Parser::AST::QualifiedType^ ElementType
                {
                    CppSharp::Parser::AST::QualifiedType^ get();
                    void set(CppSharp::Parser::AST::QualifiedType^);
                }

                property unsigned int NumElements
                {
                    unsigned int get();
                    void set(unsigned int);
                }
            };

            public ref class BuiltinType : CppSharp::Parser::AST::Type
            {
            public:

                BuiltinType(class ::CppSharp::CppParser::AST::BuiltinType* native);
                BuiltinType(class ::CppSharp::CppParser::AST::BuiltinType* native, bool ownNativeInstance);
                static BuiltinType^ __CreateInstance(::System::IntPtr native);
                static BuiltinType^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                BuiltinType();

                BuiltinType(CppSharp::Parser::AST::BuiltinType^ _0);

                ~BuiltinType();

                property CppSharp::Parser::AST::PrimitiveType Type
                {
                    CppSharp::Parser::AST::PrimitiveType get();
                    void set(CppSharp::Parser::AST::PrimitiveType);
                }
            };
        }
    }
}
