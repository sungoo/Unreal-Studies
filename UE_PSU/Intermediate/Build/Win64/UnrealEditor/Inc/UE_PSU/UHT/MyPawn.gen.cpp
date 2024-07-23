// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_AMyPawn();
UE_PSU_API UClass* Z_Construct_UClass_AMyPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class AMyPawn
void AMyPawn::StaticRegisterNativesAMyPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPawn);
UClass* Z_Construct_UClass_AMyPawn_NoRegister()
{
	return AMyPawn::StaticClass();
}
struct Z_Construct_UClass_AMyPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawn.h" },
		{ "ModuleRelativePath", "MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sm_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__movement_MetaData[] = {
		{ "Category", "Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__moveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "MyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__lookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__movement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__moveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__lookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp__sm = { "_sm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, _sm), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sm_MetaData), NewProp__sm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp__movement = { "_movement", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, _movement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__movement_MetaData), NewProp__movement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp__moveAction = { "_moveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, _moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__moveAction_MetaData), NewProp__moveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp__lookAction = { "_lookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, _lookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__lookAction_MetaData), NewProp__lookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp__sm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp__movement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp__moveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp__lookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPawn_Statics::ClassParams = {
	&AMyPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPawn()
{
	if (!Z_Registration_Info_UClass_AMyPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPawn.OuterSingleton, Z_Construct_UClass_AMyPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPawn.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<AMyPawn>()
{
	return AMyPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
AMyPawn::~AMyPawn() {}
// End Class AMyPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPawn, AMyPawn::StaticClass, TEXT("AMyPawn"), &Z_Registration_Info_UClass_AMyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPawn), 134309746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyPawn_h_2883753238(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
