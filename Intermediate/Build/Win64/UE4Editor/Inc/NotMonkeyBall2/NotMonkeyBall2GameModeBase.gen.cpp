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
	static FName NAME_ANotMonkeyBall2GameModeBase_GameEnd = FName(TEXT("GameEnd"));
	void ANotMonkeyBall2GameModeBase::GameEnd(bool PlayerWon)
	{
		NotMonkeyBall2GameModeBase_eventGameEnd_Parms Parms;
		Parms.PlayerWon=PlayerWon ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANotMonkeyBall2GameModeBase_GameEnd),&Parms);
	}
	static FName NAME_ANotMonkeyBall2GameModeBase_GameStart = FName(TEXT("GameStart"));
	void ANotMonkeyBall2GameModeBase::GameStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANotMonkeyBall2GameModeBase_GameStart),NULL);
	}
	void ANotMonkeyBall2GameModeBase::StaticRegisterNativesANotMonkeyBall2GameModeBase()
	{
	}
	struct Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics
	{
		static void NewProp_PlayerWon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlayerWon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics::NewProp_PlayerWon_SetBit(void* Obj)
	{
		((NotMonkeyBall2GameModeBase_eventGameEnd_Parms*)Obj)->PlayerWon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics::NewProp_PlayerWon = { "PlayerWon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NotMonkeyBall2GameModeBase_eventGameEnd_Parms), &Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics::NewProp_PlayerWon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics::NewProp_PlayerWon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NotMonkeyBall2GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANotMonkeyBall2GameModeBase, nullptr, "GameEnd", nullptr, nullptr, sizeof(NotMonkeyBall2GameModeBase_eventGameEnd_Parms), Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NotMonkeyBall2GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANotMonkeyBall2GameModeBase, nullptr, "GameStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANotMonkeyBall2GameModeBase_NoRegister()
	{
		return ANotMonkeyBall2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NotMonkeyBall2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameEnd, "GameEnd" }, // 1044233676
		{ &Z_Construct_UFunction_ANotMonkeyBall2GameModeBase_GameStart, "GameStart" }, // 3010925550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NotMonkeyBall2GameModeBase.h" },
		{ "ModuleRelativePath", "NotMonkeyBall2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::NewProp_StartDelay_MetaData[] = {
		{ "Category", "Game Loop" },
		{ "ModuleRelativePath", "NotMonkeyBall2GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANotMonkeyBall2GameModeBase, StartDelay), METADATA_PARAMS(Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::NewProp_StartDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::NewProp_StartDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::NewProp_StartDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANotMonkeyBall2GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::ClassParams = {
		&ANotMonkeyBall2GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANotMonkeyBall2GameModeBase_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ANotMonkeyBall2GameModeBase, 1474597262);
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
