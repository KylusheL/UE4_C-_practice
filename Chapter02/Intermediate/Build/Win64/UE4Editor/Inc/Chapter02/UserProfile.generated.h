// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAPTER02_UserProfile_generated_h
#error "UserProfile.generated.h already included, missing '#pragma once' in UserProfile.h"
#endif
#define CHAPTER02_UserProfile_generated_h

#define Chapter02_Source_Chapter02_UserProfile_h_16_SPARSE_DATA
#define Chapter02_Source_Chapter02_UserProfile_h_16_RPC_WRAPPERS
#define Chapter02_Source_Chapter02_UserProfile_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Chapter02_Source_Chapter02_UserProfile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserProfile(); \
	friend struct Z_Construct_UClass_UUserProfile_Statics; \
public: \
	DECLARE_CLASS(UUserProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chapter02"), NO_API) \
	DECLARE_SERIALIZER(UUserProfile)


#define Chapter02_Source_Chapter02_UserProfile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUserProfile(); \
	friend struct Z_Construct_UClass_UUserProfile_Statics; \
public: \
	DECLARE_CLASS(UUserProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chapter02"), NO_API) \
	DECLARE_SERIALIZER(UUserProfile)


#define Chapter02_Source_Chapter02_UserProfile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserProfile(UUserProfile&&); \
	NO_API UUserProfile(const UUserProfile&); \
public:


#define Chapter02_Source_Chapter02_UserProfile_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserProfile(UUserProfile&&); \
	NO_API UUserProfile(const UUserProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserProfile)


#define Chapter02_Source_Chapter02_UserProfile_h_16_PRIVATE_PROPERTY_OFFSET
#define Chapter02_Source_Chapter02_UserProfile_h_13_PROLOG
#define Chapter02_Source_Chapter02_UserProfile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter02_Source_Chapter02_UserProfile_h_16_PRIVATE_PROPERTY_OFFSET \
	Chapter02_Source_Chapter02_UserProfile_h_16_SPARSE_DATA \
	Chapter02_Source_Chapter02_UserProfile_h_16_RPC_WRAPPERS \
	Chapter02_Source_Chapter02_UserProfile_h_16_INCLASS \
	Chapter02_Source_Chapter02_UserProfile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chapter02_Source_Chapter02_UserProfile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chapter02_Source_Chapter02_UserProfile_h_16_PRIVATE_PROPERTY_OFFSET \
	Chapter02_Source_Chapter02_UserProfile_h_16_SPARSE_DATA \
	Chapter02_Source_Chapter02_UserProfile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Chapter02_Source_Chapter02_UserProfile_h_16_INCLASS_NO_PURE_DECLS \
	Chapter02_Source_Chapter02_UserProfile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAPTER02_API UClass* StaticClass<class UUserProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chapter02_Source_Chapter02_UserProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
