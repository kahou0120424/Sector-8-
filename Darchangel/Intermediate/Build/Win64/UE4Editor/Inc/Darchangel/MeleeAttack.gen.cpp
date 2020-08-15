// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Darchangel/MeleeAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeAttack() {}
// Cross Module References
	DARCHANGEL_API UClass* Z_Construct_UClass_UMeleeAttack_NoRegister();
	DARCHANGEL_API UClass* Z_Construct_UClass_UMeleeAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Darchangel();
// End Cross Module References
	void UMeleeAttack::StaticRegisterNativesUMeleeAttack()
	{
	}
	UClass* Z_Construct_UClass_UMeleeAttack_NoRegister()
	{
		return UMeleeAttack::StaticClass();
	}
	struct Z_Construct_UClass_UMeleeAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeleeAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Darchangel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MeleeAttack.h" },
		{ "ModuleRelativePath", "MeleeAttack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeleeAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeleeAttack_Statics::ClassParams = {
		&UMeleeAttack::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeleeAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeleeAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeleeAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeleeAttack, 2004605260);
	template<> DARCHANGEL_API UClass* StaticClass<UMeleeAttack>()
	{
		return UMeleeAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeleeAttack(Z_Construct_UClass_UMeleeAttack, &UMeleeAttack::StaticClass, TEXT("/Script/Darchangel"), TEXT("UMeleeAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
