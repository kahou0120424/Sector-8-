// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Darchangel/CharacterActackMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterActackMove() {}
// Cross Module References
	DARCHANGEL_API UClass* Z_Construct_UClass_UCharacterActackMove_NoRegister();
	DARCHANGEL_API UClass* Z_Construct_UClass_UCharacterActackMove();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Darchangel();
// End Cross Module References
	void UCharacterActackMove::StaticRegisterNativesUCharacterActackMove()
	{
	}
	UClass* Z_Construct_UClass_UCharacterActackMove_NoRegister()
	{
		return UCharacterActackMove::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterActackMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterActackMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Darchangel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterActackMove_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "CharacterActackMove.h" },
		{ "ModuleRelativePath", "CharacterActackMove.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterActackMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterActackMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterActackMove_Statics::ClassParams = {
		&UCharacterActackMove::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterActackMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterActackMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterActackMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterActackMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterActackMove, 4270002895);
	template<> DARCHANGEL_API UClass* StaticClass<UCharacterActackMove>()
	{
		return UCharacterActackMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterActackMove(Z_Construct_UClass_UCharacterActackMove, &UCharacterActackMove::StaticClass, TEXT("/Script/Darchangel"), TEXT("UCharacterActackMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterActackMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
