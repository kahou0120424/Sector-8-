// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef DARCHANGEL_NPC_AIController_generated_h
#error "NPC_AIController.generated.h already included, missing '#pragma once' in NPC_AIController.h"
#endif
#define DARCHANGEL_NPC_AIController_generated_h

#define Darchangel_Source_Darchangel_NPC_AIController_h_16_SPARSE_DATA
#define Darchangel_Source_Darchangel_NPC_AIController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execon_target_detected) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_STRUCT(FAIStimulus,Z_Param_stimulus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->on_target_detected(Z_Param_actor,Z_Param_stimulus); \
		P_NATIVE_END; \
	}


#define Darchangel_Source_Darchangel_NPC_AIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execon_target_detected) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_STRUCT(FAIStimulus,Z_Param_stimulus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->on_target_detected(Z_Param_actor,Z_Param_stimulus); \
		P_NATIVE_END; \
	}


#define Darchangel_Source_Darchangel_NPC_AIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC_AIController(); \
	friend struct Z_Construct_UClass_ANPC_AIController_Statics; \
public: \
	DECLARE_CLASS(ANPC_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(ANPC_AIController)


#define Darchangel_Source_Darchangel_NPC_AIController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesANPC_AIController(); \
	friend struct Z_Construct_UClass_ANPC_AIController_Statics; \
public: \
	DECLARE_CLASS(ANPC_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Darchangel"), NO_API) \
	DECLARE_SERIALIZER(ANPC_AIController)


#define Darchangel_Source_Darchangel_NPC_AIController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC_AIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC_AIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC_AIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC_AIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC_AIController(ANPC_AIController&&); \
	NO_API ANPC_AIController(const ANPC_AIController&); \
public:


#define Darchangel_Source_Darchangel_NPC_AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC_AIController(ANPC_AIController&&); \
	NO_API ANPC_AIController(const ANPC_AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC_AIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC_AIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC_AIController)


#define Darchangel_Source_Darchangel_NPC_AIController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__behavior_tree_component() { return STRUCT_OFFSET(ANPC_AIController, behavior_tree_component); } \
	FORCEINLINE static uint32 __PPO__btree() { return STRUCT_OFFSET(ANPC_AIController, btree); }


#define Darchangel_Source_Darchangel_NPC_AIController_h_13_PROLOG
#define Darchangel_Source_Darchangel_NPC_AIController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_NPC_AIController_h_16_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_NPC_AIController_h_16_SPARSE_DATA \
	Darchangel_Source_Darchangel_NPC_AIController_h_16_RPC_WRAPPERS \
	Darchangel_Source_Darchangel_NPC_AIController_h_16_INCLASS \
	Darchangel_Source_Darchangel_NPC_AIController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Darchangel_Source_Darchangel_NPC_AIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Darchangel_Source_Darchangel_NPC_AIController_h_16_PRIVATE_PROPERTY_OFFSET \
	Darchangel_Source_Darchangel_NPC_AIController_h_16_SPARSE_DATA \
	Darchangel_Source_Darchangel_NPC_AIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_NPC_AIController_h_16_INCLASS_NO_PURE_DECLS \
	Darchangel_Source_Darchangel_NPC_AIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARCHANGEL_API UClass* StaticClass<class ANPC_AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Darchangel_Source_Darchangel_NPC_AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
