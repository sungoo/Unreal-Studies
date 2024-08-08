// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/BT_Service_SpawnSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBT_Service_SpawnSetting() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
UE_PSU_API UClass* Z_Construct_UClass_UBT_Service_SpawnSetting();
UE_PSU_API UClass* Z_Construct_UClass_UBT_Service_SpawnSetting_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class UBT_Service_SpawnSetting
void UBT_Service_SpawnSetting::StaticRegisterNativesUBT_Service_SpawnSetting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBT_Service_SpawnSetting);
UClass* Z_Construct_UClass_UBT_Service_SpawnSetting_NoRegister()
{
	return UBT_Service_SpawnSetting::StaticClass();
}
struct Z_Construct_UClass_UBT_Service_SpawnSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BT_Service_SpawnSetting.h" },
		{ "ModuleRelativePath", "BT_Service_SpawnSetting.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBT_Service_SpawnSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBT_Service_SpawnSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_Service_SpawnSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBT_Service_SpawnSetting_Statics::ClassParams = {
	&UBT_Service_SpawnSetting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_Service_SpawnSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UBT_Service_SpawnSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBT_Service_SpawnSetting()
{
	if (!Z_Registration_Info_UClass_UBT_Service_SpawnSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBT_Service_SpawnSetting.OuterSingleton, Z_Construct_UClass_UBT_Service_SpawnSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBT_Service_SpawnSetting.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<UBT_Service_SpawnSetting>()
{
	return UBT_Service_SpawnSetting::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBT_Service_SpawnSetting);
UBT_Service_SpawnSetting::~UBT_Service_SpawnSetting() {}
// End Class UBT_Service_SpawnSetting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_BT_Service_SpawnSetting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBT_Service_SpawnSetting, UBT_Service_SpawnSetting::StaticClass, TEXT("UBT_Service_SpawnSetting"), &Z_Registration_Info_UClass_UBT_Service_SpawnSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBT_Service_SpawnSetting), 1325448830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_BT_Service_SpawnSetting_h_4219071965(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_BT_Service_SpawnSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_BT_Service_SpawnSetting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
