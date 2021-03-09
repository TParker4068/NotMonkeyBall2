// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOTMONKEYBALL2_BallPlayer_generated_h
#error "BallPlayer.generated.h already included, missing '#pragma once' in BallPlayer.h"
#endif
#define NOTMONKEYBALL2_BallPlayer_generated_h

#define NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_SPARSE_DATA
#define NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_RPC_WRAPPERS
#define NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallPlayer(); \
	friend struct Z_Construct_UClass_ABallPlayer_Statics; \
public: \
	DECLARE_CLASS(ABallPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NotMonkeyBall2"), NO_API) \
	DECLARE_SERIALIZER(ABallPlayer)


#define NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABallPlayer(); \
	friend struct Z_Construct_UClass_ABallPlayer_Statics; \
public: \
	DECLARE_CLASS(ABallPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NotMonkeyBall2"), NO_API) \
	DECLARE_SERIALIZER(ABallPlayer)


#define NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallPlayer(ABallPlayer&&); \
	NO_API ABallPlayer(const ABallPlayer&); \
public:


#define NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallPlayer(ABallPlayer&&); \
	NO_API ABallPlayer(const ABallPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallPlayer)


#define NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ABallPlayer, Mesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ABallPlayer, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ABallPlayer, Camera); }


#define NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_12_PROLOG
#define NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_SPARSE_DATA \
	NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_RPC_WRAPPERS \
	NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_INCLASS \
	NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_SPARSE_DATA \
	NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_INCLASS_NO_PURE_DECLS \
	NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOTMONKEYBALL2_API UClass* StaticClass<class ABallPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NotMonkeyBall2_Source_NotMonkeyBall2_BallPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
