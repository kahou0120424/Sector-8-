// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DARCHANGEL_FindRandomLocation_generated_h
#error "FindRandomLocation.generated.h already included, missing '#pragma once' in FindRandomLocation.h"
#endif
#define DARCHANGEL_FindRandomLocation_generated_h

#define Darchangel_Source_Darchangel_FindRandomLocation_h_15_SPARSE_DATA
#define Darchangel_Source_Darchangel_FindRandomLocation_h_15_RPC_WRAPPERS
#define Darchangel_Source_Darchangel_FindRandomLocation_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Darchangel_Source_Darchangel_FindRandomLocation_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFindRandomLocation(); \
	friend struct Z_Construct_UClass_UFindRandomLocation_Statics; \
public: \
	DECLARE_CLASS(UFindRandomLocation, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(UFindRandomLocation)


#define Darchangel_Source_Darchangel_FindRandomLocation_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFindRandomLocation(); \
	friend struct Z_Construct_UClass_UFindRandomLocation_Statics; \
public: \
	DECLARE_CLASS(UFindRandomLocation, UBTTask_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(UFindRandomLocation)


#define Darchangel_Source_Darchangel_FindRandomLocation_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFindRandomLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindRandomLocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFindRandomLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindRandomLocation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFindRandomLocation(UFindRandomLocation&&); \
	NO_API UFindRandomLocation(const UFindRandomLocation&); \
public:


#define Darchangel_Source_Darchangel_FindRandomLocation_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFindRandomLocation(UFindRandomLocation&&); \
	NO_API UFindRandomLocation(const UFindRandomLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFindRandomLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindRandomLocation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindRandomLocation)


#define Darchangel_Source_Darchangel_FindRandomLocation_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__search_radius() { return STRUCT_OFFSET(UFindRandomLocation, search_radius); }


#define Darchangel_Source_Darchangel_FindRandomLocation_h_12_PROLOG
#define Darchangel_Source_Darchangel_FindRandomLocation_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_FindRandomLocation_h_15_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_FindRandomLocation_h_15_SPARSE_DATA \
	Darchangel_Source_Darchangel_FindRandomLocation_h_15_RPC_WRAPPERS \
	Darchangel_Source_Darchangel_FindRandomLocation_h_15_INCLASS \
	Darchangel_Source_Darchangel_FindRandomLocation_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Darchangel_Source_Darchangel_FindRandomLocation_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_FindRandomLocation_h_15_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_FindRandomLocation_h_15_SPARSE_DATA \
	Darchangel_Source_Darchangel_FindRandomLocation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_FindRandomLocation_h_15_INCLASS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_FindRandomLocation_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARCHANGEL_API UClass* StaticClass<class UFindRandomLocation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Darchangel_Source_Darchangel_FindRandomLocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
