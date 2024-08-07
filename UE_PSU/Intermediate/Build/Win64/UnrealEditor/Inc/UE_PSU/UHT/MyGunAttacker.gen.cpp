// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyGunAttacker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGunAttacker() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_AMyGunAttacker();
UE_PSU_API UClass* Z_Construct_UClass_AMyGunAttacker_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_AMyPlayer();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class AMyGunAttacker
void AMyGunAttacker::StaticRegisterNativesAMyGunAttacker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGunAttacker);
UClass* Z_Construct_UClass_AMyGunAttacker_NoRegister()
{
	return AMyGunAttacker::StaticClass();
}
struct Z_Construct_UClass_AMyGunAttacker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyGunAttacker.h" },
		{ "ModuleRelativePath", "MyGunAttacker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__focusAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyGunAttacker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__shootAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyGunAttacker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__focusing_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyGunAttacker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__focusAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__shootAction;
	static void NewProp__focusing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__focusing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGunAttacker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGunAttacker_Statics::NewProp__focusAction = { "_focusAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGunAttacker, _focusAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__focusAction_MetaData), NewProp__focusAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyGunAttacker_Statics::NewProp__shootAction = { "_shootAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGunAttacker, _shootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__shootAction_MetaData), NewProp__shootAction_MetaData) };
void Z_Construct_UClass_AMyGunAttacker_Statics::NewProp__focusing_SetBit(void* Obj)
{
	((AMyGunAttacker*)Obj)->_focusing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyGunAttacker_Statics::NewProp__focusing = { "_focusing", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyGunAttacker), &Z_Construct_UClass_AMyGunAttacker_Statics::NewProp__focusing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__focusing_MetaData), NewProp__focusing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGunAttacker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGunAttacker_Statics::NewProp__focusAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGunAttacker_Statics::NewProp__shootAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGunAttacker_Statics::NewProp__focusing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGunAttacker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyGunAttacker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGunAttacker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGunAttacker_Statics::ClassParams = {
	&AMyGunAttacker::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyGunAttacker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyGunAttacker_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGunAttacker_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGunAttacker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGunAttacker()
{
	if (!Z_Registration_Info_UClass_AMyGunAttacker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGunAttacker.OuterSingleton, Z_Construct_UClass_AMyGunAttacker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGunAttacker.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<AMyGunAttacker>()
{
	return AMyGunAttacker::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGunAttacker);
AMyGunAttacker::~AMyGunAttacker() {}
// End Class AMyGunAttacker

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyGunAttacker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGunAttacker, AMyGunAttacker::StaticClass, TEXT("AMyGunAttacker"), &Z_Registration_Info_UClass_AMyGunAttacker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGunAttacker), 910095067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyGunAttacker_h_897502379(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyGunAttacker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyGunAttacker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
