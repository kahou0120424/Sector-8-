// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Darchangel/PlayerAttackNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAttackNotifyState() {}
// Cross Module References
	DARCHANGEL_API UClass* Z_Construct_UClass_UPlayerAttackNotifyState_NoRegister();
	DARCHANGEL_API UClass* Z_Construct_UClass_UPlayerAttackNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Darchangel();
// End Cross Module References
	void UPlayerAttackNotifyState::StaticRegisterNativesUPlayerAttackNotifyState()
	{
	}
	UClass* Z_Construct_UClass_UPlayerAttackNotifyState_NoRegister()
	{
		return UPlayerAttackNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAttackNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAttackNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Darchangel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAttackNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PlayerAttackNotifyState.h" },
		{ "ModuleRelativePath", "PlayerAttackNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAttackNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAttackNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAttackNotifyState_Statics::ClassParams = {
		&UPlayerAttackNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAttackNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttackNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAttackNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAttackNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAttackNotifyState, 646616140);
	template<> DARCHANGEL_API UClass* StaticClass<UPlayerAttackNotifyState>()
	{
		return UPlayerAttackNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAttackNotifyState(Z_Construct_UClass_UPlayerAttackNotifyState, &UPlayerAttackNotifyState::StaticClass, TEXT("/Script/Darchangel"), TEXT("UPlayerAttackNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAttackNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
