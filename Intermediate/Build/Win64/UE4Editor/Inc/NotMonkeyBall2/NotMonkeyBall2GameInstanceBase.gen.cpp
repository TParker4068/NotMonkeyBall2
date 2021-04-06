// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotMonkeyBall2/NotMonkeyBall2GameInstanceBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotMonkeyBall2GameInstanceBase() {}
// Cross Module References
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_NoRegister();
	NOTMONKEYBALL2_API UClass* Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_NotMonkeyBall2();
// End Cross Module References
	DEFINE_FUNCTION(UNotMonkeyBall2GameInstanceBase::execReloadLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNotMonkeyBall2GameInstanceBase::execLoadNextLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadNextLevel();
		P_NATIVE_END;
	}
	void UNotMonkeyBall2GameInstanceBase::StaticRegisterNativesUNotMonkeyBall2GameInstanceBase()
	{
		UClass* Class = UNotMonkeyBall2GameInstanceBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadNextLevel", &UNotMonkeyBall2GameInstanceBase::execLoadNextLevel },
			{ "ReloadLevel", &UNotMonkeyBall2GameInstanceBase::execReloadLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_LoadNextLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_LoadNextLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NotMonkeyBall2GameInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_LoadNextLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase, nullptr, "LoadNextLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_LoadNextLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_LoadNextLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_LoadNextLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_LoadNextLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_ReloadLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_ReloadLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NotMonkeyBall2GameInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_ReloadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase, nullptr, "ReloadLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_ReloadLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_ReloadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_ReloadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_ReloadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_NoRegister()
	{
		return UNotMonkeyBall2GameInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NotMonkeyBall2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_LoadNextLevel, "LoadNextLevel" }, // 99982630
		{ &Z_Construct_UFunction_UNotMonkeyBall2GameInstanceBase_ReloadLevel, "ReloadLevel" }, // 1388882028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NotMonkeyBall2GameInstanceBase.h" },
		{ "ModuleRelativePath", "NotMonkeyBall2GameInstanceBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "NotMonkeyBall2GameInstanceBase" },
		{ "ModuleRelativePath", "NotMonkeyBall2GameInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNotMonkeyBall2GameInstanceBase, CurrentLevel), METADATA_PARAMS(Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::NewProp_CurrentLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::NewProp_CurrentLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::NewProp_CurrentLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotMonkeyBall2GameInstanceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::ClassParams = {
		&UNotMonkeyBall2GameInstanceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNotMonkeyBall2GameInstanceBase, 359704777);
	template<> NOTMONKEYBALL2_API UClass* StaticClass<UNotMonkeyBall2GameInstanceBase>()
	{
		return UNotMonkeyBall2GameInstanceBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNotMonkeyBall2GameInstanceBase(Z_Construct_UClass_UNotMonkeyBall2GameInstanceBase, &UNotMonkeyBall2GameInstanceBase::StaticClass, TEXT("/Script/NotMonkeyBall2"), TEXT("UNotMonkeyBall2GameInstanceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNotMonkeyBall2GameInstanceBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
