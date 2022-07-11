// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chapter02/UserProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserProfile() {}
// Cross Module References
	CHAPTER02_API UClass* Z_Construct_UClass_UUserProfile_NoRegister();
	CHAPTER02_API UClass* Z_Construct_UClass_UUserProfile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Chapter02();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	CHAPTER02_API UScriptStruct* Z_Construct_UScriptStruct_FColoredTexture();
// End Cross Module References
	void UUserProfile::StaticRegisterNativesUUserProfile()
	{
	}
	UClass* Z_Construct_UClass_UUserProfile_NoRegister()
	{
		return UUserProfile::StaticClass();
	}
	struct Z_Construct_UClass_UUserProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HpMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UClassOfPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UClassOfPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UClassGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UClassGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Chapter02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UserProfile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, Armor), METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax = { "HpMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, HpMax), METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, name), METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassOfPlayer_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassOfPlayer = { "UClassOfPlayer", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, UClassOfPlayer), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassOfPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassOfPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassGameMode_MetaData[] = {
		{ "Category", "Unit" },
		{ "MetaClass", "GameMode" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassGameMode = { "UClassGameMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, UClassGameMode), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, Texture), Z_Construct_UScriptStruct_FColoredTexture, METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassOfPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserProfile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserProfile_Statics::ClassParams = {
		&UUserProfile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUserProfile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserProfile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserProfile, 1393524720);
	template<> CHAPTER02_API UClass* StaticClass<UUserProfile>()
	{
		return UUserProfile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserProfile(Z_Construct_UClass_UUserProfile, &UUserProfile::StaticClass, TEXT("/Script/Chapter02"), TEXT("UUserProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
