// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DARCHANGEL_HealthBar_generated_h
#error "HealthBar.generated.h already included, missing '#pragma once' in HealthBar.h"
#endif
#define DARCHANGEL_HealthBar_generated_h

#define Darchangel_Source_Darchangel_HealthBar_h_16_SPARSE_DATA
#define Darchangel_Source_Darchangel_HealthBar_h_16_RPC_WRAPPERS
#define Darchangel_Source_Darchangel_HealthBar_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Darchangel_Source_Darchangel_HealthBar_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthBar(); \
	friend struct Z_Construct_UClass_UHealthBar_Statics; \
public: \
	DECLARE_CLASS(UHealthBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(UHealthBar)


#define Darchangel_Source_Darchangel_HealthBar_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHealthBar(); \
	friend struct Z_Construct_UClass_UHealthBar_Statics; \
public: \
	DECLARE_CLASS(UHealthBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(UHealthBar)


#define Darchangel_Source_Darchangel_HealthBar_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthBar(UHealthBar&&); \
	NO_API UHealthBar(const UHealthBar&); \
public:


#define Darchangel_Source_Darchangel_HealthBar_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthBar(UHealthBar&&); \
	NO_API UHealthBar(const UHealthBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthBar)


#define Darchangel_Source_Darchangel_HealthBar_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__health_value() { return STRUCT_OFFSET(UHealthBar, health_value); }


#define Darchangel_Source_Darchangel_HealthBar_h_13_PROLOG
#define Darchangel_Source_Darchangel_HealthBar_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_HealthBar_h_16_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_HealthBar_h_16_SPARSE_DATA \
	Darchangel_Source_Darchangel_HealthBar_h_16_RPC_WRAPPERS \
	Darchangel_Source_Darchangel_HealthBar_h_16_INCLASS \
	Darchangel_Source_Darchangel_HealthBar_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Darchangel_Source_Darchangel_HealthBar_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_HealthBar_h_16_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_HealthBar_h_16_SPARSE_DATA \
	Darchangel_Source_Darchangel_HealthBar_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_HealthBar_h_16_INCLASS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_HealthBar_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARCHANGEL_API UClass* StaticClass<class UHealthBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Darchangel_Source_Darchangel_HealthBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
