// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotMonkeyBall2/NotMonkeyBall2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotMonkeyBall2GameModeBase() {}
// Cross Module References
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_ANotMonkeyBall2GameModeBase_NoRegister();
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_ANotMonkeyBall2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NotMonkeyBall2();
// End Cross Module References
	void ANotMonkeyBall2GameModeBase::StaticRegisterNativesANotMonkeyBall2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ANotMonkeyBall2GameModeBase_NoRegister()
	{
		return ANotMonkeyBall2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NotMonkeyBall2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NotMonkeyBall2GameModeBase.h" },
		{ "ModuleRelativePath", "NotMonkeyBall2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANotMonkeyBall2GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::ClassParams = {
		&ANotMonkeyBall2GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANotMonkeyBall2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANotMonkeyBall2GameModeBase, 595371447);
	template<> NOTMONKEYBALL2_API UClass* StaticClass<ANotMonkeyBall2GameModeBase>()
	{
		return ANotMonkeyBall2GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANotMonkeyBall2GameModeBase(Z_Construct_UClass_ANotMonkeyBall2GameModeBase, &ANotMonkeyBall2GameModeBase::StaticClass, TEXT("/Script/NotMonkeyBall2"), TEXT("ANotMonkeyBall2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANotMonkeyBall2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
