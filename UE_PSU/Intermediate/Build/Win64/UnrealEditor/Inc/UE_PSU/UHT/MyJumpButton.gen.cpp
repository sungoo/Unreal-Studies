// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyJumpButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyJumpButton() {}

// Begin Cross Module References
UE_PSU_API UClass* Z_Construct_UClass_UMyJumpButton();
UE_PSU_API UClass* Z_Construct_UClass_UMyJumpButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class UMyJumpButton
void UMyJumpButton::StaticRegisterNativesUMyJumpButton()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyJumpButton);
UClass* Z_Construct_UClass_UMyJumpButton_NoRegister()
{
	return UMyJumpButton::StaticClass();
}
struct Z_Construct_UClass_UMyJumpButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyJumpButton.h" },
		{ "ModuleRelativePath", "MyJumpButton.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyJumpButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyJumpButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyJumpButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyJumpButton_Statics::ClassParams = {
	&UMyJumpButton::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyJumpButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyJumpButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyJumpButton()
{
	if (!Z_Registration_Info_UClass_UMyJumpButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyJumpButton.OuterSingleton, Z_Construct_UClass_UMyJumpButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyJumpButton.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<UMyJumpButton>()
{
	return UMyJumpButton::StaticClass();
}
UMyJumpButton::UMyJumpButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyJumpButton);
UMyJumpButton::~UMyJumpButton() {}
// End Class UMyJumpButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyJumpButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyJumpButton, UMyJumpButton::StaticClass, TEXT("UMyJumpButton"), &Z_Registration_Info_UClass_UMyJumpButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyJumpButton), 16065573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyJumpButton_h_715118683(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyJumpButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyJumpButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
