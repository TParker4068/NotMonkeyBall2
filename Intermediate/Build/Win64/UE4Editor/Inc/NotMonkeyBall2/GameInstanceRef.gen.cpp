// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotMonkeyBall2/GameInstanceRef.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstanceRef() {}
// Cross Module References
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_UGameInstanceRef_NoRegister();
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_UGameInstanceRef();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NotMonkeyBall2();
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_NoRegister();
// End Cross Module References
	void UGameInstanceRef::StaticRegisterNativesUGameInstanceRef()
	{
	}
	UClass* Z_Construct_UClass_UGameInstanceRef_NoRegister()
	{
		return UGameInstanceRef::StaticClass();
	}
	struct Z_Construct_UClass_UGameInstanceRef_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstanceRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstanceRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInstanceRef_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NotMonkeyBall2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstanceRef_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameInstanceRef.h" },
		{ "ModuleRelativePath", "GameInstanceRef.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstanceRef_Statics::NewProp_GameInstanceRef_MetaData[] = {
		{ "Category", "GameInstanceRef" },
		{ "ModuleRelativePath", "GameInstanceRef.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameInstanceRef_Statics::NewProp_GameInstanceRef = { "GameInstanceRef", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameInstanceRef, GameInstanceRef), Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameInstanceRef_Statics::NewProp_GameInstanceRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceRef_Statics::NewProp_GameInstanceRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameInstanceRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstanceRef_Statics::NewProp_GameInstanceRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInstanceRef_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstanceRef>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameInstanceRef_Statics::ClassParams = {
		&UGameInstanceRef::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameInstanceRef_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceRef_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameInstanceRef_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceRef_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameInstanceRef()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameInstanceRef_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameInstanceRef, 2115174455);
	template<> NOTMONKEYBALL2_API UClass* StaticClass<UGameInstanceRef>()
	{
		return UGameInstanceRef::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameInstanceRef(Z_Construct_UClass_UGameInstanceRef, &UGameInstanceRef::StaticClass, TEXT("/Script/NotMonkeyBall2"), TEXT("UGameInstanceRef"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstanceRef);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
