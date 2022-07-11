// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chapter02/Chapter02GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter02GameModeBase() {}
// Cross Module References
	CHAPTER02_API UClass* Z_Construct_UClass_AChapter02GameModeBase_NoRegister();
	CHAPTER02_API UClass* Z_Construct_UClass_AChapter02GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Chapter02();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CHAPTER02_API UClass* Z_Construct_UClass_UUserProfile_NoRegister();
// End Cross Module References
	void AChapter02GameModeBase::StaticRegisterNativesAChapter02GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AChapter02GameModeBase_NoRegister()
	{
		return AChapter02GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AChapter02GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UPBlueprintClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UPBlueprintClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter02GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Chapter02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter02GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter02GameModeBase.h" },
		{ "ModuleRelativePath", "Chapter02GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter02GameModeBase_Statics::NewProp_UPBlueprintClassName_MetaData[] = {
		{ "Category", "UClassNames" },
		{ "ModuleRelativePath", "Chapter02GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChapter02GameModeBase_Statics::NewProp_UPBlueprintClassName = { "UPBlueprintClassName", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChapter02GameModeBase, UPBlueprintClassName), Z_Construct_UClass_UUserProfile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChapter02GameModeBase_Statics::NewProp_UPBlueprintClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter02GameModeBase_Statics::NewProp_UPBlueprintClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChapter02GameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChapter02GameModeBase_Statics::NewProp_UPBlueprintClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter02GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter02GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter02GameModeBase_Statics::ClassParams = {
		&AChapter02GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChapter02GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChapter02GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChapter02GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter02GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter02GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter02GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter02GameModeBase, 380816554);
	template<> CHAPTER02_API UClass* StaticClass<AChapter02GameModeBase>()
	{
		return AChapter02GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter02GameModeBase(Z_Construct_UClass_AChapter02GameModeBase, &AChapter02GameModeBase::StaticClass, TEXT("/Script/Chapter02"), TEXT("AChapter02GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter02GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
