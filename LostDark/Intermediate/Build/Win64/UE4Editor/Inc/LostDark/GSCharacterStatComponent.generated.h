// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOSTDARK_GSCharacterStatComponent_generated_h
#error "GSCharacterStatComponent.generated.h already included, missing '#pragma once' in GSCharacterStatComponent.h"
#endif
#define LOSTDARK_GSCharacterStatComponent_generated_h

#define LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMaxHP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->MaxHP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDropExp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDropExp(); \
		P_NATIVE_END; \
	}


#define LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMaxHP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->MaxHP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDropExp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDropExp(); \
		P_NATIVE_END; \
	}


#define LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCharacterStatComponent(); \
	friend struct Z_Construct_UClass_UGSCharacterStatComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCharacterStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LostDark"), NO_API) \
	DECLARE_SERIALIZER(UGSCharacterStatComponent)


#define LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUGSCharacterStatComponent(); \
	friend struct Z_Construct_UClass_UGSCharacterStatComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCharacterStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LostDark"), NO_API) \
	DECLARE_SERIALIZER(UGSCharacterStatComponent)


#define LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCharacterStatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCharacterStatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCharacterStatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCharacterStatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCharacterStatComponent(UGSCharacterStatComponent&&); \
	NO_API UGSCharacterStatComponent(const UGSCharacterStatComponent&); \
public:


#define LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCharacterStatComponent(UGSCharacterStatComponent&&); \
	NO_API UGSCharacterStatComponent(const UGSCharacterStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCharacterStatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCharacterStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGSCharacterStatComponent)


#define LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Level() { return STRUCT_OFFSET(UGSCharacterStatComponent, Level); } \
	FORCEINLINE static uint32 __PPO__CurrentHP() { return STRUCT_OFFSET(UGSCharacterStatComponent, CurrentHP); } \
	FORCEINLINE static uint32 __PPO__IsInitialHP() { return STRUCT_OFFSET(UGSCharacterStatComponent, IsInitialHP); }


#define LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_22_PROLOG
#define LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_RPC_WRAPPERS \
	LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_INCLASS \
	LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_INCLASS_NO_PURE_DECLS \
	LostDark_Source_LostDark_Public_GSCharacterStatComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LostDark_Source_LostDark_Public_GSCharacterStatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
