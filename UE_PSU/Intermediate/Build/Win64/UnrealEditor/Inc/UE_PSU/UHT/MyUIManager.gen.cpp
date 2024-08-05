// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyUIManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUIManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UE_PSU_API UClass* Z_Construct_UClass_AMyUIManager();
UE_PSU_API UClass* Z_Construct_UClass_AMyUIManager_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_UMyInventoryUI_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class AMyUIManager
void AMyUIManager::StaticRegisterNativesAMyUIManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyUIManager);
UClass* Z_Construct_UClass_AMyUIManager_NoRegister()
{
	return AMyUIManager::StaticClass();
}
struct Z_Construct_UClass_AMyUIManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyUIManager.h" },
		{ "ModuleRelativePath", "MyUIManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__inventoryWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUIManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__inventoryWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyUIManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyUIManager_Statics::NewProp__inventoryWidget = { "_inventoryWidget", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyUIManager, _inventoryWidget), Z_Construct_UClass_UMyInventoryUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__inventoryWidget_MetaData), NewProp__inventoryWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyUIManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyUIManager_Statics::NewProp__inventoryWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyUIManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyUIManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyUIManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyUIManager_Statics::ClassParams = {
	&AMyUIManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyUIManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyUIManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyUIManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyUIManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyUIManager()
{
	if (!Z_Registration_Info_UClass_AMyUIManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyUIManager.OuterSingleton, Z_Construct_UClass_AMyUIManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyUIManager.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<AMyUIManager>()
{
	return AMyUIManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyUIManager);
AMyUIManager::~AMyUIManager() {}
// End Class AMyUIManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyUIManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyUIManager, AMyUIManager::StaticClass, TEXT("AMyUIManager"), &Z_Registration_Info_UClass_AMyUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyUIManager), 1533684921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyUIManager_h_796897963(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyUIManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyUIManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
