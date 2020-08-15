// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Darchangel/Darchangel_CharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarchangel_CharacterBase() {}
// Cross Module References
	DARCHANGEL_API UClass* Z_Construct_UClass_ADarchangel_CharacterBase_NoRegister();
	DARCHANGEL_API UClass* Z_Construct_UClass_ADarchangel_CharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Darchangel();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ADarchangel_CharacterBase::StaticRegisterNativesADarchangel_CharacterBase()
	{
	}
	UClass* Z_Construct_UClass_ADarchangel_CharacterBase_NoRegister()
	{
		return ADarchangel_CharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ADarchangel_CharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_right_fist_collision_box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_right_fist_collision_box;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADarchangel_CharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Darchangel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADarchangel_CharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Darchangel_CharacterBase.h" },
		{ "ModuleRelativePath", "Darchangel_CharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADarchangel_CharacterBase_Statics::NewProp_right_fist_collision_box_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Darchangel_CharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADarchangel_CharacterBase_Statics::NewProp_right_fist_collision_box = { "right_fist_collision_box", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADarchangel_CharacterBase, right_fist_collision_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADarchangel_CharacterBase_Statics::NewProp_right_fist_collision_box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADarchangel_CharacterBase_Statics::NewProp_right_fist_collision_box_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADarchangel_CharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADarchangel_CharacterBase_Statics::NewProp_right_fist_collision_box,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADarchangel_CharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADarchangel_CharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADarchangel_CharacterBase_Statics::ClassParams = {
		&ADarchangel_CharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADarchangel_CharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADarchangel_CharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADarchangel_CharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADarchangel_CharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADarchangel_CharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADarchangel_CharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADarchangel_CharacterBase, 462575651);
	template<> DARCHANGEL_API UClass* StaticClass<ADarchangel_CharacterBase>()
	{
		return ADarchangel_CharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADarchangel_CharacterBase(Z_Construct_UClass_ADarchangel_CharacterBase, &ADarchangel_CharacterBase::StaticClass, TEXT("/Script/Darchangel"), TEXT("ADarchangel_CharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADarchangel_CharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
