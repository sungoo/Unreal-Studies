// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_UMyAnimInstance();
UE_PSU_API UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class UMyAnimInstance Function AnimNotify_AttackHit
struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_AttackHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_AttackHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_AttackHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_AttackHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_AttackHit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_AttackHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_AttackHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_AttackHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_AttackHit();
	P_NATIVE_END;
}
// End Class UMyAnimInstance Function AnimNotify_AttackHit

// Begin Class UMyAnimInstance
void UMyAnimInstance::StaticRegisterNativesUMyAnimInstance()
{
	UClass* Class = UMyAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimNotify_AttackHit", &UMyAnimInstance::execAnimNotify_AttackHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAnimInstance);
UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister()
{
	return UMyAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UMyAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MyAnimInstance.h" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isfalling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__vertical_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__horizontal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isattacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__myAnimMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
	static void NewProp__isfalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isfalling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__vertical;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__horizontal;
	static void NewProp__isattacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isattacking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__myAnimMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_AttackHit, "AnimNotify_AttackHit" }, // 1892156150
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, _speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__speed_MetaData), NewProp__speed_MetaData) };
void Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__isfalling_SetBit(void* Obj)
{
	((UMyAnimInstance*)Obj)->_isfalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__isfalling = { "_isfalling", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyAnimInstance), &Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__isfalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isfalling_MetaData), NewProp__isfalling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__vertical = { "_vertical", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, _vertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__vertical_MetaData), NewProp__vertical_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__horizontal = { "_horizontal", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, _horizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__horizontal_MetaData), NewProp__horizontal_MetaData) };
void Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__isattacking_SetBit(void* Obj)
{
	((UMyAnimInstance*)Obj)->_isattacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__isattacking = { "_isattacking", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyAnimInstance), &Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__isattacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isattacking_MetaData), NewProp__isattacking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__myAnimMontage = { "_myAnimMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, _myAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__myAnimMontage_MetaData), NewProp__myAnimMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__isfalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__vertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__horizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__isattacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__myAnimMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAnimInstance_Statics::ClassParams = {
	&UMyAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyAnimInstance()
{
	if (!Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton, Z_Construct_UClass_UMyAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<UMyAnimInstance>()
{
	return UMyAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAnimInstance);
UMyAnimInstance::~UMyAnimInstance() {}
// End Class UMyAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAnimInstance, UMyAnimInstance::StaticClass, TEXT("UMyAnimInstance"), &Z_Registration_Info_UClass_UMyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAnimInstance), 2077501180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyAnimInstance_h_459603016(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
