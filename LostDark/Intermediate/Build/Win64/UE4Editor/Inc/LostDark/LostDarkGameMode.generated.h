// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOSTDARK_LostDarkGameMode_generated_h
#error "LostDarkGameMode.generated.h already included, missing '#pragma once' in LostDarkGameMode.h"
#endif
#define LOSTDARK_LostDarkGameMode_generated_h

#define LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_RPC_WRAPPERS
#define LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALostDarkGameMode(); \
	friend struct Z_Construct_UClass_ALostDarkGameMode_Statics; \
public: \
	DECLARE_CLASS(ALostDarkGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LostDark"), LOSTDARK_API) \
	DECLARE_SERIALIZER(ALostDarkGameMode)


#define LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_INCLASS \
private: \
	static void StaticRegisterNativesALostDarkGameMode(); \
	friend struct Z_Construct_UClass_ALostDarkGameMode_Statics; \
public: \
	DECLARE_CLASS(ALostDarkGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LostDark"), LOSTDARK_API) \
	DECLARE_SERIALIZER(ALostDarkGameMode)


#define LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOSTDARK_API ALostDarkGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALostDarkGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOSTDARK_API, ALostDarkGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALostDarkGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LOSTDARK_API ALostDarkGameMode(ALostDarkGameMode&&); \
	LOSTDARK_API ALostDarkGameMode(const ALostDarkGameMode&); \
public:


#define LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LOSTDARK_API ALostDarkGameMode(ALostDarkGameMode&&); \
	LOSTDARK_API ALostDarkGameMode(const ALostDarkGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOSTDARK_API, ALostDarkGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALostDarkGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALostDarkGameMode)


#define LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LDGameState() { return STRUCT_OFFSET(ALostDarkGameMode, LDGameState); } \
	FORCEINLINE static uint32 __PPO__ScoreToClear() { return STRUCT_OFFSET(ALostDarkGameMode, ScoreToClear); }


#define LostDark_Source_LostDark_Public_LostDarkGameMode_h_17_PROLOG
#define LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_RPC_WRAPPERS \
	LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_INCLASS \
	LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_PRIVATE_PROPERTY_OFFSET \
	LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_INCLASS_NO_PURE_DECLS \
	LostDark_Source_LostDark_Public_LostDarkGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LostDark_Source_LostDark_Public_LostDarkGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
