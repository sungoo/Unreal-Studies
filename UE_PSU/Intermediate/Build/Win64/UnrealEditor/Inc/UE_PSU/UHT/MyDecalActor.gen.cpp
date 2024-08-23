// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyDecalActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDecalActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_ADecalActor();
UE_PSU_API UClass* Z_Construct_UClass_AMyDecalActor();
UE_PSU_API UClass* Z_Construct_UClass_AMyDecalActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class AMyDecalActor
void AMyDecalActor::StaticRegisterNativesAMyDecalActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyDecalActor);
UClass* Z_Construct_UClass_AMyDecalActor_NoRegister()
{
	return AMyDecalActor::StaticClass();
}
struct Z_Construct_UClass_AMyDecalActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor Input Replication" },
		{ "IncludePath", "MyDecalActor.h" },
		{ "ModuleRelativePath", "MyDecalActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__minSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "MyDecalActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__maxSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "MyDecalActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__minSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp__maxSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyDecalActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyDecalActor_Statics::NewProp__minSize = { "_minSize", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDecalActor, _minSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__minSize_MetaData), NewProp__minSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyDecalActor_Statics::NewProp__maxSize = { "_maxSize", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDecalActor, _maxSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__maxSize_MetaData), NewProp__maxSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyDecalActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDecalActor_Statics::NewProp__minSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDecalActor_Statics::NewProp__maxSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDecalActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyDecalActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADecalActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDecalActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyDecalActor_Statics::ClassParams = {
	&AMyDecalActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyDecalActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyDecalActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDecalActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyDecalActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyDecalActor()
{
	if (!Z_Registration_Info_UClass_AMyDecalActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyDecalActor.OuterSingleton, Z_Construct_UClass_AMyDecalActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyDecalActor.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<AMyDecalActor>()
{
	return AMyDecalActor::StaticClass();
}
AMyDecalActor::AMyDecalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDecalActor);
AMyDecalActor::~AMyDecalActor() {}
// End Class AMyDecalActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyDecalActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyDecalActor, AMyDecalActor::StaticClass, TEXT("AMyDecalActor"), &Z_Registration_Info_UClass_AMyDecalActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyDecalActor), 2490322618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyDecalActor_h_4128761060(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyDecalActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyDecalActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
