// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DARCHANGEL_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define DARCHANGEL_MainCharacter_generated_h

#define Darchangel_Source_Darchangel_MainCharacter_h_22_SPARSE_DATA
#define Darchangel_Source_Darchangel_MainCharacter_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execon_attack_overlap_end) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlapped_component); \
		P_GET_OBJECT(AActor,Z_Param_other_actor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_other_component); \
		P_GET_PROPERTY(UIntProperty,Z_Param_other_body_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->on_attack_overlap_end(Z_Param_overlapped_component,Z_Param_other_actor,Z_Param_other_component,Z_Param_other_body_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execon_attack_overlap_begin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlapped_component); \
		P_GET_OBJECT(AActor,Z_Param_other_actor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_other_component); \
		P_GET_PROPERTY(UIntProperty,Z_Param_other_body_index); \
		P_GET_UBOOL(Z_Param_from_sweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweep_result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->on_attack_overlap_begin(Z_Param_overlapped_component,Z_Param_other_actor,Z_Param_other_component,Z_Param_other_body_index,Z_Param_from_sweep,Z_Param_Out_sweep_result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetDash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopDash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Dash(); \
		P_NATIVE_END; \
	}


#define Darchangel_Source_Darchangel_MainCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execon_attack_overlap_end) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlapped_component); \
		P_GET_OBJECT(AActor,Z_Param_other_actor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_other_component); \
		P_GET_PROPERTY(UIntProperty,Z_Param_other_body_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->on_attack_overlap_end(Z_Param_overlapped_component,Z_Param_other_actor,Z_Param_other_component,Z_Param_other_body_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execon_attack_overlap_begin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlapped_component); \
		P_GET_OBJECT(AActor,Z_Param_other_actor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_other_component); \
		P_GET_PROPERTY(UIntProperty,Z_Param_other_body_index); \
		P_GET_UBOOL(Z_Param_from_sweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweep_result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->on_attack_overlap_begin(Z_Param_overlapped_component,Z_Param_other_actor,Z_Param_other_component,Z_Param_other_body_index,Z_Param_from_sweep,Z_Param_Out_sweep_result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetDash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopDash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Dash(); \
		P_NATIVE_END; \
	}


#define Darchangel_Source_Darchangel_MainCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define Darchangel_Source_Darchangel_MainCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define Darchangel_Source_Darchangel_MainCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define Darchangel_Source_Darchangel_MainCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define Darchangel_Source_Darchangel_MainCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sword_collision_box() { return STRUCT_OFFSET(AMainCharacter, sword_collision_box); }


#define Darchangel_Source_Darchangel_MainCharacter_h_19_PROLOG
#define Darchangel_Source_Darchangel_MainCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_MainCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_MainCharacter_h_22_SPARSE_DATA \
	Darchangel_Source_Darchangel_MainCharacter_h_22_RPC_WRAPPERS \
	Darchangel_Source_Darchangel_MainCharacter_h_22_INCLASS \
	Darchangel_Source_Darchangel_MainCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Darchangel_Source_Darchangel_MainCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_MainCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_MainCharacter_h_22_SPARSE_DATA \
	Darchangel_Source_Darchangel_MainCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_MainCharacter_h_22_INCLASS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_MainCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARCHANGEL_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Darchangel_Source_Darchangel_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
