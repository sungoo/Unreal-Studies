// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef UE_PSU_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define UE_PSU_MyCharacter_generated_h

#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAttackHit); \
	DECLARE_FUNCTION(execOnAttackEnded); \
	DECLARE_FUNCTION(execDisable);


#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_PSU"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyCharacter(AMyCharacter&&); \
	AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter) \
	NO_API virtual ~AMyCharacter();


#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h_21_PROLOG
#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_PSU_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
