// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_AMyCharacter();
UE_PSU_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_UMyStatComponent_NoRegister();
UE_PSU_API UFunction* Z_Construct_UDelegateFunction_UE_PSU_Delegate_AttackHitEvent__DelegateSignature();
UE_PSU_API UFunction* Z_Construct_UDelegateFunction_UE_PSU_Delegate_Death__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Delegate FDelegate_AttackHitEvent
struct Z_Construct_UDelegateFunction_UE_PSU_Delegate_AttackHitEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE_PSU_Delegate_AttackHitEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UE_PSU, nullptr, "Delegate_AttackHitEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_PSU_Delegate_AttackHitEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE_PSU_Delegate_AttackHitEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UE_PSU_Delegate_AttackHitEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE_PSU_Delegate_AttackHitEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDelegate_AttackHitEvent_DelegateWrapper(const FMulticastScriptDelegate& Delegate_AttackHitEvent)
{
	Delegate_AttackHitEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FDelegate_AttackHitEvent

// Begin Delegate FDelegate_Death
struct Z_Construct_UDelegateFunction_UE_PSU_Delegate_Death__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE_PSU_Delegate_Death__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UE_PSU, nullptr, "Delegate_Death__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE_PSU_Delegate_Death__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE_PSU_Delegate_Death__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UE_PSU_Delegate_Death__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE_PSU_Delegate_Death__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDelegate_Death_DelegateWrapper(const FMulticastScriptDelegate& Delegate_Death)
{
	Delegate_Death.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FDelegate_Death

// Begin Class AMyCharacter Function AttackHit
struct Z_Construct_UFunction_AMyCharacter_AttackHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_AttackHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "AttackHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_AttackHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_AttackHit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_AttackHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_AttackHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execAttackHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackHit();
	P_NATIVE_END;
}
// End Class AMyCharacter Function AttackHit

// Begin Class AMyCharacter Function Disable
struct Z_Construct_UFunction_AMyCharacter_Disable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "Disable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_Disable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_Disable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_Disable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_Disable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execDisable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disable();
	P_NATIVE_END;
}
// End Class AMyCharacter Function Disable

// Begin Class AMyCharacter Function OnAttackEnded
struct Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics
{
	struct MyCharacter_eventOnAttackEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Attack function\n" },
#endif
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventOnAttackEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((MyCharacter_eventOnAttackEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyCharacter_eventOnAttackEnded_Parms), &Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "OnAttackEnded", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::MyCharacter_eventOnAttackEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::MyCharacter_eventOnAttackEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCharacter_OnAttackEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_OnAttackEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execOnAttackEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAttackEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class AMyCharacter Function OnAttackEnded

// Begin Class AMyCharacter Function Unpossess
struct Z_Construct_UFunction_AMyCharacter_Unpossess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_Unpossess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "Unpossess", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_Unpossess_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_Unpossess_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCharacter_Unpossess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_Unpossess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCharacter::execUnpossess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unpossess();
	P_NATIVE_END;
}
// End Class AMyCharacter Function Unpossess

// Begin Class AMyCharacter
void AMyCharacter::StaticRegisterNativesAMyCharacter()
{
	UClass* Class = AMyCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttackHit", &AMyCharacter::execAttackHit },
		{ "Disable", &AMyCharacter::execDisable },
		{ "OnAttackEnded", &AMyCharacter::execOnAttackEnded },
		{ "Unpossess", &AMyCharacter::execUnpossess },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacter);
UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
{
	return AMyCharacter::StaticClass();
}
struct Z_Construct_UClass_AMyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackHitEvent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Event" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__deathEvent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Event" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isAttacked_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__vertical_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__horizontal_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__curAttackSection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__hitPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AttackHit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//AttackHitPoint\n" },
#endif
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AttackHitPoint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__animInstance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Animation\n" },
#endif
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isActive_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__statCom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Componenets\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componenets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__inventoryCom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__hpBarWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xeb\x8b\xb4\xec\x9d\x84 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xec\x9e\x90\xeb\xa3\x8c\xed\x98\x95\n//TSubclassOf<class UMyInventoryUI>\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xeb\x8b\xb4\xec\x9d\x84 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xec\x9e\x90\xeb\xa3\x8c\xed\x98\x95\nTSubclassOf<class UMyInventoryUI>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__aiController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp__attackHitEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp__deathEvent;
	static void NewProp_isAttacked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isAttacked;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__vertical;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__horizontal;
	static const UECodeGen_Private::FIntPropertyParams NewProp__curAttackSection;
	static const UECodeGen_Private::FStructPropertyParams NewProp__hitPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__animInstance;
	static void NewProp__isActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__statCom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__inventoryCom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__hpBarWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__aiController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacter_AttackHit, "AttackHit" }, // 1882118821
		{ &Z_Construct_UFunction_AMyCharacter_Disable, "Disable" }, // 1367816996
		{ &Z_Construct_UFunction_AMyCharacter_OnAttackEnded, "OnAttackEnded" }, // 3626625767
		{ &Z_Construct_UFunction_AMyCharacter_Unpossess, "Unpossess" }, // 1459839276
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__attackHitEvent = { "_attackHitEvent", nullptr, (EPropertyFlags)0x0010000010080001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _attackHitEvent), Z_Construct_UDelegateFunction_UE_PSU_Delegate_AttackHitEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackHitEvent_MetaData), NewProp__attackHitEvent_MetaData) }; // 2994344064
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__deathEvent = { "_deathEvent", nullptr, (EPropertyFlags)0x0010000010080001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _deathEvent), Z_Construct_UDelegateFunction_UE_PSU_Delegate_Death__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__deathEvent_MetaData), NewProp__deathEvent_MetaData) }; // 2077512446
void Z_Construct_UClass_AMyCharacter_Statics::NewProp_isAttacked_SetBit(void* Obj)
{
	((AMyCharacter*)Obj)->isAttacked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_isAttacked = { "isAttacked", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_isAttacked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isAttacked_MetaData), NewProp_isAttacked_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__vertical = { "_vertical", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _vertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__vertical_MetaData), NewProp__vertical_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__horizontal = { "_horizontal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _horizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__horizontal_MetaData), NewProp__horizontal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__curAttackSection = { "_curAttackSection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _curAttackSection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__curAttackSection_MetaData), NewProp__curAttackSection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__hitPoint = { "_hitPoint", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _hitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__hitPoint_MetaData), NewProp__hitPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__animInstance = { "_animInstance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _animInstance), Z_Construct_UClass_UMyAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__animInstance_MetaData), NewProp__animInstance_MetaData) };
void Z_Construct_UClass_AMyCharacter_Statics::NewProp__isActive_SetBit(void* Obj)
{
	((AMyCharacter*)Obj)->_isActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__isActive = { "_isActive", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp__isActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isActive_MetaData), NewProp__isActive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__statCom = { "_statCom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _statCom), Z_Construct_UClass_UMyStatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__statCom_MetaData), NewProp__statCom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__inventoryCom = { "_inventoryCom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _inventoryCom), Z_Construct_UClass_UMyInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__inventoryCom_MetaData), NewProp__inventoryCom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__hpBarWidget = { "_hpBarWidget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _hpBarWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__hpBarWidget_MetaData), NewProp__hpBarWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp__aiController = { "_aiController", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, _aiController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__aiController_MetaData), NewProp__aiController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__attackHitEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__deathEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_isAttacked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__vertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__horizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__curAttackSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__hitPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__animInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__isActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__statCom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__inventoryCom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__hpBarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp__aiController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
	&AMyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCharacter()
{
	if (!Z_Registration_Info_UClass_AMyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter.OuterSingleton, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCharacter.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<AMyCharacter>()
{
	return AMyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
AMyCharacter::~AMyCharacter() {}
// End Class AMyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter, AMyCharacter::StaticClass, TEXT("AMyCharacter"), &Z_Registration_Info_UClass_AMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter), 664954919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h_83236697(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
