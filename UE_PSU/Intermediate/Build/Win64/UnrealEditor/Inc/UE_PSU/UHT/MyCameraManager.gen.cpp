// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCameraManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UE_PSU_API UClass* Z_Construct_UClass_AMyCameraManager();
UE_PSU_API UClass* Z_Construct_UClass_AMyCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class AMyCameraManager
void AMyCameraManager::StaticRegisterNativesAMyCameraManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCameraManager);
UClass* Z_Construct_UClass_AMyCameraManager_NoRegister()
{
	return AMyCameraManager::StaticClass();
}
struct Z_Construct_UClass_AMyCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyCameraManager.h" },
		{ "ModuleRelativePath", "MyCameraManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCameraManager_Statics::ClassParams = {
	&AMyCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCameraManager()
{
	if (!Z_Registration_Info_UClass_AMyCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCameraManager.OuterSingleton, Z_Construct_UClass_AMyCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCameraManager.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<AMyCameraManager>()
{
	return AMyCameraManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCameraManager);
AMyCameraManager::~AMyCameraManager() {}
// End Class AMyCameraManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCameraManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCameraManager, AMyCameraManager::StaticClass, TEXT("AMyCameraManager"), &Z_Registration_Info_UClass_AMyCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCameraManager), 2800770353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCameraManager_h_1033894439(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyCameraManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
