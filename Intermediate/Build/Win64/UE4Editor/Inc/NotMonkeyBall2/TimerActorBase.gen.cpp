// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotMonkeyBall2/TimerActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerActorBase() {}
// Cross Module References
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_ATimerActorBase_NoRegister();
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_ATimerActorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NotMonkeyBall2();
// End Cross Module References
	void ATimerActorBase::StaticRegisterNativesATimerActorBase()
	{
	}
	UClass* Z_Construct_UClass_ATimerActorBase_NoRegister()
	{
		return ATimerActorBase::StaticClass();
	}
	struct Z_Construct_UClass_ATimerActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTimerActive_MetaData[];
#endif
		static void NewProp_bTimerActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTimerActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimerActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NotMonkeyBall2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerActorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimerActorBase.h" },
		{ "ModuleRelativePath", "TimerActorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerActorBase_Statics::NewProp_bTimerActive_MetaData[] = {
		{ "Category", "TimerActorBase" },
		{ "ModuleRelativePath", "TimerActorBase.h" },
	};
#endif
	void Z_Construct_UClass_ATimerActorBase_Statics::NewProp_bTimerActive_SetBit(void* Obj)
	{
		((ATimerActorBase*)Obj)->bTimerActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATimerActorBase_Statics::NewProp_bTimerActive = { "bTimerActive", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATimerActorBase), &Z_Construct_UClass_ATimerActorBase_Statics::NewProp_bTimerActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATimerActorBase_Statics::NewProp_bTimerActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerActorBase_Statics::NewProp_bTimerActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerActorBase_Statics::NewProp_TimeRemaining_MetaData[] = {
		{ "Category", "TimerActorBase" },
		{ "ModuleRelativePath", "TimerActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimerActorBase_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimerActorBase, TimeRemaining), METADATA_PARAMS(Z_Construct_UClass_ATimerActorBase_Statics::NewProp_TimeRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerActorBase_Statics::NewProp_TimeRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerActorBase_Statics::NewProp_TimerLength_MetaData[] = {
		{ "Category", "TimerActorBase" },
		{ "ModuleRelativePath", "TimerActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimerActorBase_Statics::NewProp_TimerLength = { "TimerLength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimerActorBase, TimerLength), METADATA_PARAMS(Z_Construct_UClass_ATimerActorBase_Statics::NewProp_TimerLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerActorBase_Statics::NewProp_TimerLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimerActorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerActorBase_Statics::NewProp_bTimerActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerActorBase_Statics::NewProp_TimeRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerActorBase_Statics::NewProp_TimerLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimerActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimerActorBase_Statics::ClassParams = {
		&ATimerActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATimerActorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATimerActorBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATimerActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimerActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimerActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimerActorBase, 3550701789);
	template<> NOTMONKEYBALL2_API UClass* StaticClass<ATimerActorBase>()
	{
		return ATimerActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimerActorBase(Z_Construct_UClass_ATimerActorBase, &ATimerActorBase::StaticClass, TEXT("/Script/NotMonkeyBall2"), TEXT("ATimerActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
