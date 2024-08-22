// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyUIManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE_PSU_MyUIManager_generated_h
#error "MyUIManager.generated.h already included, missing '#pragma once' in MyUIManager.h"
#endif
#define UE_PSU_MyUIManager_generated_h

#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyUIManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyUIManager(); \
	friend struct Z_Construct_UClass_AMyUIManager_Statics; \
public: \
	DECLARE_CLASS(AMyUIManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_PSU"), NO_API) \
	DECLARE_SERIALIZER(AMyUIManager)


#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyUIManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyUIManager(AMyUIManager&&); \
	AMyUIManager(const AMyUIManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyUIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyUIManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyUIManager) \
	NO_API virtual ~AMyUIManager();


#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyUIManager_h_19_PROLOG
#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyUIManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyUIManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyUIManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_PSU_API UClass* StaticClass<class AMyUIManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyUIManager_h


#define FOREACH_ENUM_UITYPE(op) \
	op(UIType::CrossHair) \
	op(UIType::Inventory) 

enum class UIType : int32;
template<> struct TIsUEnumClass<UIType> { enum { Value = true }; };
template<> UE_PSU_API UEnum* StaticEnum<UIType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
