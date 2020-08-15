// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Darchangel/DarchangelGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarchangelGameMode() {}
// Cross Module References
	DARCHANGEL_API UClass* Z_Construct_UClass_ADarchangelGameMode_NoRegister();
	DARCHANGEL_API UClass* Z_Construct_UClass_ADarchangelGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Darchangel();
// End Cross Module References
	void ADarchangelGameMode::StaticRegisterNativesADarchangelGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADarchangelGameMode_NoRegister()
	{
		return ADarchangelGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADarchangelGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADarchangelGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Darchangel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADarchangelGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DarchangelGameMode.h" },
		{ "ModuleRelativePath", "DarchangelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADarchangelGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADarchangelGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADarchangelGameMode_Statics::ClassParams = {
		&ADarchangelGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADarchangelGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADarchangelGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADarchangelGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADarchangelGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADarchangelGameMode, 1000715830);
	template<> DARCHANGEL_API UClass* StaticClass<ADarchangelGameMode>()
	{
		return ADarchangelGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADarchangelGameMode(Z_Construct_UClass_ADarchangelGameMode, &ADarchangelGameMode::StaticClass, TEXT("/Script/Darchangel"), TEXT("ADarchangelGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADarchangelGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
