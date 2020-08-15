// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Darchangel/IsPlayerInMeleeRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsPlayerInMeleeRange() {}
// Cross Module References
	DARCHANGEL_API UClass* Z_Construct_UClass_UIsPlayerInMeleeRange_NoRegister();
	DARCHANGEL_API UClass* Z_Construct_UClass_UIsPlayerInMeleeRange();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Darchangel();
// End Cross Module References
	void UIsPlayerInMeleeRange::StaticRegisterNativesUIsPlayerInMeleeRange()
	{
	}
	UClass* Z_Construct_UClass_UIsPlayerInMeleeRange_NoRegister()
	{
		return UIsPlayerInMeleeRange::StaticClass();
	}
	struct Z_Construct_UClass_UIsPlayerInMeleeRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_melee_range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_melee_range;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Darchangel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IsPlayerInMeleeRange.h" },
		{ "ModuleRelativePath", "IsPlayerInMeleeRange.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::NewProp_melee_range_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "IsPlayerInMeleeRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::NewProp_melee_range = { "melee_range", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsPlayerInMeleeRange, melee_range), METADATA_PARAMS(Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::NewProp_melee_range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::NewProp_melee_range_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::NewProp_melee_range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsPlayerInMeleeRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::ClassParams = {
		&UIsPlayerInMeleeRange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsPlayerInMeleeRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsPlayerInMeleeRange, 3532434907);
	template<> DARCHANGEL_API UClass* StaticClass<UIsPlayerInMeleeRange>()
	{
		return UIsPlayerInMeleeRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsPlayerInMeleeRange(Z_Construct_UClass_UIsPlayerInMeleeRange, &UIsPlayerInMeleeRange::StaticClass, TEXT("/Script/Darchangel"), TEXT("UIsPlayerInMeleeRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsPlayerInMeleeRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
