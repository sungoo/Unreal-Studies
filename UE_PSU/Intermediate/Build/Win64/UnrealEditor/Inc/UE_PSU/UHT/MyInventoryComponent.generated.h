// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyInventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyItem;
#ifdef UE_PSU_MyInventoryComponent_generated_h
#error "MyInventoryComponent.generated.h already included, missing '#pragma once' in MyInventoryComponent.h"
#endif
#define UE_PSU_MyInventoryComponent_generated_h

#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execPutItem);


#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyInventoryComponent(); \
	friend struct Z_Construct_UClass_UMyInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UMyInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_PSU"), NO_API) \
	DECLARE_SERIALIZER(UMyInventoryComponent)


#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyInventoryComponent(UMyInventoryComponent&&); \
	UMyInventoryComponent(const UMyInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyInventoryComponent) \
	NO_API virtual ~UMyInventoryComponent();


#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h_13_PROLOG
#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_PSU_API UClass* StaticClass<class UMyInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
