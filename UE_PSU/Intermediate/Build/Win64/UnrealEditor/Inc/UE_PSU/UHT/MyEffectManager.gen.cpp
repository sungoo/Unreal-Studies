// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyEffectManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEffectManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_AMyEffect_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_AMyEffectManager();
UE_PSU_API UClass* Z_Construct_UClass_AMyEffectManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class AMyEffectManager
void AMyEffectManager::StaticRegisterNativesAMyEffectManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyEffectManager);
UClass* Z_Construct_UClass_AMyEffectManager_NoRegister()
{
	return AMyEffectManager::StaticClass();
}
struct Z_Construct_UClass_AMyEffectManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyEffectManager.h" },
		{ "ModuleRelativePath", "MyEffectManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__classTable_MetaData[] = {
		{ "ModuleRelativePath", "MyEffectManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__myEffect_MetaData[] = {
		{ "Category", "MyEffectManager" },
		{ "ModuleRelativePath", "MyEffectManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__rootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyEffectManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp__classTable_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp__classTable_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__classTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__myEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__rootComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEffectManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyEffectManager_Statics::NewProp__classTable_ValueProp = { "_classTable", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_AMyEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyEffectManager_Statics::NewProp__classTable_Key_KeyProp = { "_classTable_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMyEffectManager_Statics::NewProp__classTable = { "_classTable", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyEffectManager, _classTable), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__classTable_MetaData), NewProp__classTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyEffectManager_Statics::NewProp__myEffect = { "_myEffect", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyEffectManager, _myEffect), Z_Construct_UClass_AMyEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__myEffect_MetaData), NewProp__myEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyEffectManager_Statics::NewProp__rootComponent = { "_rootComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyEffectManager, _rootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__rootComponent_MetaData), NewProp__rootComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyEffectManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEffectManager_Statics::NewProp__classTable_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEffectManager_Statics::NewProp__classTable_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEffectManager_Statics::NewProp__classTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEffectManager_Statics::NewProp__myEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEffectManager_Statics::NewProp__rootComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEffectManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyEffectManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEffectManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyEffectManager_Statics::ClassParams = {
	&AMyEffectManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyEffectManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyEffectManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEffectManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyEffectManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyEffectManager()
{
	if (!Z_Registration_Info_UClass_AMyEffectManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyEffectManager.OuterSingleton, Z_Construct_UClass_AMyEffectManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyEffectManager.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<AMyEffectManager>()
{
	return AMyEffectManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEffectManager);
AMyEffectManager::~AMyEffectManager() {}
// End Class AMyEffectManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffectManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyEffectManager, AMyEffectManager::StaticClass, TEXT("AMyEffectManager"), &Z_Registration_Info_UClass_AMyEffectManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyEffectManager), 1689275004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffectManager_h_2327792781(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffectManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffectManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
