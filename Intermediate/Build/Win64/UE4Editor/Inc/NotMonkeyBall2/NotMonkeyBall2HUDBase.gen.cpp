// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotMonkeyBall2/NotMonkeyBall2HUDBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotMonkeyBall2HUDBase() {}
// Cross Module References
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_ANotMonkeyBall2HUDBase_NoRegister();
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_ANotMonkeyBall2HUDBase();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_NotMonkeyBall2();
// End Cross Module References
	void ANotMonkeyBall2HUDBase::StaticRegisterNativesANotMonkeyBall2HUDBase()
	{
	}
	UClass* Z_Construct_UClass_ANotMonkeyBall2HUDBase_NoRegister()
	{
		return ANotMonkeyBall2HUDBase::StaticClass();
	}
	struct Z_Construct_UClass_ANotMonkeyBall2HUDBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANotMonkeyBall2HUDBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_NotMonkeyBall2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANotMonkeyBall2HUDBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "NotMonkeyBall2HUDBase.h" },
		{ "ModuleRelativePath", "NotMonkeyBall2HUDBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANotMonkeyBall2HUDBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANotMonkeyBall2HUDBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANotMonkeyBall2HUDBase_Statics::ClassParams = {
		&ANotMonkeyBall2HUDBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANotMonkeyBall2HUDBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANotMonkeyBall2HUDBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANotMonkeyBall2HUDBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANotMonkeyBall2HUDBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANotMonkeyBall2HUDBase, 1599336464);
	template<> NOTMONKEYBALL2_API UClass* StaticClass<ANotMonkeyBall2HUDBase>()
	{
		return ANotMonkeyBall2HUDBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANotMonkeyBall2HUDBase(Z_Construct_UClass_ANotMonkeyBall2HUDBase, &ANotMonkeyBall2HUDBase::StaticClass, TEXT("/Script/NotMonkeyBall2"), TEXT("ANotMonkeyBall2HUDBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANotMonkeyBall2HUDBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
