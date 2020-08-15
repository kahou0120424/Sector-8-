// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DARCHANGEL_WallJumpTriggerBox_generated_h
#error "WallJumpTriggerBox.generated.h already included, missing '#pragma once' in WallJumpTriggerBox.h"
#endif
#define DARCHANGEL_WallJumpTriggerBox_generated_h

#define Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_SPARSE_DATA
#define Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWallJumpTriggerBox(); \
	friend struct Z_Construct_UClass_AWallJumpTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AWallJumpTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(AWallJumpTriggerBox)


#define Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWallJumpTriggerBox(); \
	friend struct Z_Construct_UClass_AWallJumpTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AWallJumpTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(AWallJumpTriggerBox)


#define Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWallJumpTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWallJumpTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWallJumpTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWallJumpTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWallJumpTriggerBox(AWallJumpTriggerBox&&); \
	NO_API AWallJumpTriggerBox(const AWallJumpTriggerBox&); \
public:


#define Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWallJumpTriggerBox(AWallJumpTriggerBox&&); \
	NO_API AWallJumpTriggerBox(const AWallJumpTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWallJumpTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWallJumpTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWallJumpTriggerBox)


#define Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET
#define Darchangel_Source_Darchangel_WallJumpTriggerBox_h_12_PROLOG
#define Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_SPARSE_DATA \
	Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_RPC_WRAPPERS \
	Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_INCLASS \
	Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_SPARSE_DATA \
	Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_WallJumpTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARCHANGEL_API UClass* StaticClass<class AWallJumpTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Darchangel_Source_Darchangel_WallJumpTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
