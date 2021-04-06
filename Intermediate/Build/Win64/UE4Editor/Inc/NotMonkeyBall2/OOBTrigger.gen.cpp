// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotMonkeyBall2/OOBTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOOBTrigger() {}
// Cross Module References
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_AOOBTrigger_NoRegister();
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_AOOBTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NotMonkeyBall2();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_ANotMonkeyBall2GameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void AOOBTrigger::StaticRegisterNativesAOOBTrigger()
	{
	}
	UClass* Z_Construct_UClass_AOOBTrigger_NoRegister()
	{
		return AOOBTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AOOBTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOOBTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NotMonkeyBall2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOOBTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OOBTrigger.h" },
		{ "ModuleRelativePath", "OOBTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOOBTrigger_Statics::NewProp_PlayerRef_MetaData[] = {
		{ "Category", "OOBTrigger" },
		{ "ModuleRelativePath", "OOBTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOOBTrigger_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOOBTrigger, PlayerRef), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOOBTrigger_Statics::NewProp_PlayerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOOBTrigger_Statics::NewProp_PlayerRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOOBTrigger_Statics::NewProp_GameModeRef_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "OOBTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOOBTrigger_Statics::NewProp_GameModeRef = { "GameModeRef", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOOBTrigger, GameModeRef), Z_Construct_UClass_ANotMonkeyBall2GameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOOBTrigger_Statics::NewProp_GameModeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOOBTrigger_Statics::NewProp_GameModeRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOOBTrigger_Statics::NewProp_Trigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "ModuleRelativePath", "OOBTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOOBTrigger_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOOBTrigger, Trigger), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOOBTrigger_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOOBTrigger_Statics::NewProp_Trigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOOBTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOOBTrigger_Statics::NewProp_PlayerRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOOBTrigger_Statics::NewProp_GameModeRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOOBTrigger_Statics::NewProp_Trigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOOBTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOOBTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOOBTrigger_Statics::ClassParams = {
		&AOOBTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOOBTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOOBTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOOBTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOOBTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOOBTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOOBTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOOBTrigger, 344152591);
	template<> NOTMONKEYBALL2_API UClass* StaticClass<AOOBTrigger>()
	{
		return AOOBTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOOBTrigger(Z_Construct_UClass_AOOBTrigger, &AOOBTrigger::StaticClass, TEXT("/Script/NotMonkeyBall2"), TEXT("AOOBTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOOBTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
