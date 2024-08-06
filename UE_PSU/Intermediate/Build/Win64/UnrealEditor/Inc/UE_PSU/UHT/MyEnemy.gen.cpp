// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEnemy() {}

// Begin Cross Module References
UE_PSU_API UClass* Z_Construct_UClass_AMyCharacter();
UE_PSU_API UClass* Z_Construct_UClass_AMyEnemy();
UE_PSU_API UClass* Z_Construct_UClass_AMyEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class AMyEnemy
void AMyEnemy::StaticRegisterNativesAMyEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyEnemy);
UClass* Z_Construct_UClass_AMyEnemy_NoRegister()
{
	return AMyEnemy::StaticClass();
}
struct Z_Construct_UClass_AMyEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyEnemy.h" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyEnemy_Statics::ClassParams = {
	&AMyEnemy::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyEnemy()
{
	if (!Z_Registration_Info_UClass_AMyEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyEnemy.OuterSingleton, Z_Construct_UClass_AMyEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyEnemy.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<AMyEnemy>()
{
	return AMyEnemy::StaticClass();
}
AMyEnemy::AMyEnemy() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEnemy);
AMyEnemy::~AMyEnemy() {}
// End Class AMyEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyEnemy, AMyEnemy::StaticClass, TEXT("AMyEnemy"), &Z_Registration_Info_UClass_AMyEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyEnemy), 2602673547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEnemy_h_430228510(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
