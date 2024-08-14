// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyEffect.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
class UParticleSystemComponent;
#ifdef UE_PSU_MyEffect_generated_h
#error "MyEffect.generated.h already included, missing '#pragma once' in MyEffect.h"
#endif
#define UE_PSU_MyEffect_generated_h

#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndNiagara); \
	DECLARE_FUNCTION(execEnd);


#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyEffect(); \
	friend struct Z_Construct_UClass_AMyEffect_Statics; \
public: \
	DECLARE_CLASS(AMyEffect, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_PSU"), NO_API) \
	DECLARE_SERIALIZER(AMyEffect)


#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyEffect(AMyEffect&&); \
	AMyEffect(const AMyEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyEffect) \
	NO_API virtual ~AMyEffect();


#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h_9_PROLOG
#define FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_PSU_API UClass* StaticClass<class AMyEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
