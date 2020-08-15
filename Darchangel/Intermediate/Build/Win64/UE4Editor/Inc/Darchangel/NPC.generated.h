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
#ifdef DARCHANGEL_NPC_generated_h
#error "NPC.generated.h already included, missing '#pragma once' in NPC.h"
#endif
#define DARCHANGEL_NPC_generated_h

#define Darchangel_Source_Darchangel_NPC_h_14_SPARSE_DATA
#define Darchangel_Source_Darchangel_NPC_h_14_RPC_WRAPPERS \
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
	}


#define Darchangel_Source_Darchangel_NPC_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
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
	}


#define Darchangel_Source_Darchangel_NPC_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, ADarchangel_CharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(ANPC)


#define Darchangel_Source_Darchangel_NPC_h_14_INCLASS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend struct Z_Construct_UClass_ANPC_Statics; \
public: \
	DECLARE_CLASS(ANPC, ADarchangel_CharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(ANPC)


#define Darchangel_Source_Darchangel_NPC_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public:


#define Darchangel_Source_Darchangel_NPC_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPC)


#define Darchangel_Source_Darchangel_NPC_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__montage() { return STRUCT_OFFSET(ANPC, montage); }


#define Darchangel_Source_Darchangel_NPC_h_11_PROLOG
#define Darchangel_Source_Darchangel_NPC_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_NPC_h_14_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_NPC_h_14_SPARSE_DATA \
	Darchangel_Source_Darchangel_NPC_h_14_RPC_WRAPPERS \
	Darchangel_Source_Darchangel_NPC_h_14_INCLASS \
	Darchangel_Source_Darchangel_NPC_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Darchangel_Source_Darchangel_NPC_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_NPC_h_14_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_NPC_h_14_SPARSE_DATA \
	Darchangel_Source_Darchangel_NPC_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_NPC_h_14_INCLASS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_NPC_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARCHANGEL_API UClass* StaticClass<class ANPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Darchangel_Source_Darchangel_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
