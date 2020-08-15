// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Darchangel/MainCharacter_gm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter_gm() {}
// Cross Module References
	DARCHANGEL_API UClass* Z_Construct_UClass_AMainCharacter_gm_NoRegister();
	DARCHANGEL_API UClass* Z_Construct_UClass_AMainCharacter_gm();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Darchangel();
// End Cross Module References
	void AMainCharacter_gm::StaticRegisterNativesAMainCharacter_gm()
	{
	}
	UClass* Z_Construct_UClass_AMainCharacter_gm_NoRegister()
	{
		return AMainCharacter_gm::StaticClass();
	}
	struct Z_Construct_UClass_AMainCharacter_gm_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainCharacter_gm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Darchangel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_gm_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainCharacter_gm.h" },
		{ "ModuleRelativePath", "MainCharacter_gm.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainCharacter_gm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter_gm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_gm_Statics::ClassParams = {
		&AMainCharacter_gm::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_gm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_gm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainCharacter_gm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainCharacter_gm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainCharacter_gm, 914074217);
	template<> DARCHANGEL_API UClass* StaticClass<AMainCharacter_gm>()
	{
		return AMainCharacter_gm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainCharacter_gm(Z_Construct_UClass_AMainCharacter_gm, &AMainCharacter_gm::StaticClass, TEXT("/Script/Darchangel"), TEXT("AMainCharacter_gm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter_gm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
