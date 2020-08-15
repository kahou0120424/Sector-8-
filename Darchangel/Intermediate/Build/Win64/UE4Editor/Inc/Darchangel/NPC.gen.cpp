// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Darchangel/NPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC() {}
// Cross Module References
	DARCHANGEL_API UClass* Z_Construct_UClass_ANPC_NoRegister();
	DARCHANGEL_API UClass* Z_Construct_UClass_ANPC();
	DARCHANGEL_API UClass* Z_Construct_UClass_ADarchangel_CharacterBase();
	UPackage* Z_Construct_UPackage__Script_Darchangel();
	DARCHANGEL_API UFunction* Z_Construct_UFunction_ANPC_on_attack_overlap_begin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DARCHANGEL_API UFunction* Z_Construct_UFunction_ANPC_on_attack_overlap_end();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void ANPC::StaticRegisterNativesANPC()
	{
		UClass* Class = ANPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "on_attack_overlap_begin", &ANPC::execon_attack_overlap_begin },
			{ "on_attack_overlap_end", &ANPC::execon_attack_overlap_end },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics
	{
		struct NPC_eventon_attack_overlap_begin_Parms
		{
			const UPrimitiveComponent* overlapped_component;
			const AActor* other_actor;
			UPrimitiveComponent* other_component;
			int32 other_body_index;
			bool from_sweep;
			FHitResult sweep_result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweep_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweep_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_from_sweep_MetaData[];
#endif
		static void NewProp_from_sweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_from_sweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_body_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_other_body_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other_component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlapped_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlapped_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_sweep_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_sweep_result = { "sweep_result", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_eventon_attack_overlap_begin_Parms, sweep_result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_sweep_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_sweep_result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_from_sweep_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_from_sweep_SetBit(void* Obj)
	{
		((NPC_eventon_attack_overlap_begin_Parms*)Obj)->from_sweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_from_sweep = { "from_sweep", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NPC_eventon_attack_overlap_begin_Parms), &Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_from_sweep_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_from_sweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_from_sweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_body_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_body_index = { "other_body_index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_eventon_attack_overlap_begin_Parms, other_body_index), METADATA_PARAMS(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_body_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_body_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_component = { "other_component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_eventon_attack_overlap_begin_Parms, other_component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_actor = { "other_actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_eventon_attack_overlap_begin_Parms, other_actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_overlapped_component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_overlapped_component = { "overlapped_component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_eventon_attack_overlap_begin_Parms, overlapped_component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_overlapped_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_overlapped_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_sweep_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_from_sweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_body_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_other_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::NewProp_overlapped_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC, nullptr, "on_attack_overlap_begin", nullptr, nullptr, sizeof(NPC_eventon_attack_overlap_begin_Parms), Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_on_attack_overlap_begin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPC_on_attack_overlap_begin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics
	{
		struct NPC_eventon_attack_overlap_end_Parms
		{
			const UPrimitiveComponent* overlapped_component;
			const AActor* other_actor;
			UPrimitiveComponent* other_component;
			int32 other_body_index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_body_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_other_body_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other_component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlapped_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlapped_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_body_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_body_index = { "other_body_index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_eventon_attack_overlap_end_Parms, other_body_index), METADATA_PARAMS(Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_body_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_body_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_component = { "other_component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_eventon_attack_overlap_end_Parms, other_component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_actor = { "other_actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_eventon_attack_overlap_end_Parms, other_actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_overlapped_component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_overlapped_component = { "overlapped_component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPC_eventon_attack_overlap_end_Parms, overlapped_component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_overlapped_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_overlapped_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_body_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_other_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::NewProp_overlapped_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC, nullptr, "on_attack_overlap_end", nullptr, nullptr, sizeof(NPC_eventon_attack_overlap_end_Parms), Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPC_on_attack_overlap_end()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPC_on_attack_overlap_end_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANPC_NoRegister()
	{
		return ANPC::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADarchangel_CharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Darchangel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPC_on_attack_overlap_begin, "on_attack_overlap_begin" }, // 2466635481
		{ &Z_Construct_UFunction_ANPC_on_attack_overlap_end, "on_attack_overlap_end" }, // 181026438
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC.h" },
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_Statics::NewProp_montage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "NPC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_Statics::NewProp_montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::NewProp_montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_Statics::NewProp_montage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPC_Statics::ClassParams = {
		&ANPC::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC, 3067478656);
	template<> DARCHANGEL_API UClass* StaticClass<ANPC>()
	{
		return ANPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC(Z_Construct_UClass_ANPC, &ANPC::StaticClass, TEXT("/Script/Darchangel"), TEXT("ANPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
