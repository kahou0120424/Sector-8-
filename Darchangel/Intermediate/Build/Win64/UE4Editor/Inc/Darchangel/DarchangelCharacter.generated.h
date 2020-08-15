// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DARCHANGEL_DarchangelCharacter_generated_h
#error "DarchangelCharacter.generated.h already included, missing '#pragma once' in DarchangelCharacter.h"
#endif
#define DARCHANGEL_DarchangelCharacter_generated_h

#define Darchangel_Source_Darchangel_DarchangelCharacter_h_12_SPARSE_DATA
#define Darchangel_Source_Darchangel_DarchangelCharacter_h_12_RPC_WRAPPERS
#define Darchangel_Source_Darchangel_DarchangelCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Darchangel_Source_Darchangel_DarchangelCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADarchangelCharacter(); \
	friend struct Z_Construct_UClass_ADarchangelCharacter_Statics; \
public: \
	DECLARE_CLASS(ADarchangelCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(ADarchangelCharacter)


#define Darchangel_Source_Darchangel_DarchangelCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADarchangelCharacter(); \
	friend struct Z_Construct_UClass_ADarchangelCharacter_Statics; \
public: \
	DECLARE_CLASS(ADarchangelCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(ADarchangelCharacter)


#define Darchangel_Source_Darchangel_DarchangelCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADarchangelCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADarchangelCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADarchangelCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADarchangelCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADarchangelCharacter(ADarchangelCharacter&&); \
	NO_API ADarchangelCharacter(const ADarchangelCharacter&); \
public:


#define Darchangel_Source_Darchangel_DarchangelCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADarchangelCharacter(ADarchangelCharacter&&); \
	NO_API ADarchangelCharacter(const ADarchangelCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADarchangelCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADarchangelCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADarchangelCharacter)


#define Darchangel_Source_Darchangel_DarchangelCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADarchangelCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ADarchangelCharacter, FollowCamera); }


#define Darchangel_Source_Darchangel_DarchangelCharacter_h_9_PROLOG
#define Darchangel_Source_Darchangel_DarchangelCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_DarchangelCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_DarchangelCharacter_h_12_SPARSE_DATA \
	Darchangel_Source_Darchangel_DarchangelCharacter_h_12_RPC_WRAPPERS \
	Darchangel_Source_Darchangel_DarchangelCharacter_h_12_INCLASS \
	Darchangel_Source_Darchangel_DarchangelCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Darchangel_Source_Darchangel_DarchangelCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_DarchangelCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_DarchangelCharacter_h_12_SPARSE_DATA \
	Darchangel_Source_Darchangel_DarchangelCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_DarchangelCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_DarchangelCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARCHANGEL_API UClass* StaticClass<class ADarchangelCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Darchangel_Source_Darchangel_DarchangelCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
