// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Darchangel/NPC_AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_AIController() {}
// Cross Module References
	DARCHANGEL_API UClass* Z_Construct_UClass_ANPC_AIController_NoRegister();
	DARCHANGEL_API UClass* Z_Construct_UClass_ANPC_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Darchangel();
	DARCHANGEL_API UFunction* Z_Construct_UFunction_ANPC_AIController_on_target_detected();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
// End Cross Module References
	void ANPC_AIController::StaticRegisterNativesANPC_AIController()
	{
		UClass* Class = ANPC_AIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "on_target_detected", &ANPC_AIController::execon_target_detected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics
	{
		struct NPC_AIController_eventon_target_detected_Parms
		{
			AActor* actor;
			FAIStimulus stimulus;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stimulus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stimulus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_stimulus = { "stimulus", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_AIController_eventon_target_detected_Parms, stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_stimulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_stimulus_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_AIController_eventon_target_detected_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_stimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//void on_updated(TArray<AActor*> const& updated_actors);\n" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
		{ "ToolTip", "void on_updated(TArray<AActor*> const& updated_actors);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC_AIController, nullptr, "on_target_detected", nullptr, nullptr, sizeof(NPC_AIController_eventon_target_detected_Parms), Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_AIController_on_target_detected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPC_AIController_on_target_detected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANPC_AIController_NoRegister()
	{
		return ANPC_AIController::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_btree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_btree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_behavior_tree_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_behavior_tree_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Darchangel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPC_AIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPC_AIController_on_target_detected, "on_target_detected" }, // 1988906444
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NPC_AIController.h" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::NewProp_btree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp_btree = { "btree", nullptr, (EPropertyFlags)0x0040000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_AIController, btree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_btree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_btree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_AIController_Statics::NewProp_behavior_tree_component_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_AIController_Statics::NewProp_behavior_tree_component = { "behavior_tree_component", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_AIController, behavior_tree_component), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_behavior_tree_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::NewProp_behavior_tree_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_AIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp_btree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_AIController_Statics::NewProp_behavior_tree_component,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPC_AIController_Statics::ClassParams = {
		&ANPC_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPC_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC_AIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPC_AIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC_AIController, 2612950559);
	template<> DARCHANGEL_API UClass* StaticClass<ANPC_AIController>()
	{
		return ANPC_AIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC_AIController(Z_Construct_UClass_ANPC_AIController, &ANPC_AIController::StaticClass, TEXT("/Script/Darchangel"), TEXT("ANPC_AIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_AIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
