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

// Begin Class AMyEnemy Function Attack_AI
struct Z_Construct_UFunction_AMyEnemy_Attack_AI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEnemy_Attack_AI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEnemy, nullptr, "Attack_AI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_Attack_AI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyEnemy_Attack_AI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyEnemy_Attack_AI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyEnemy_Attack_AI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyEnemy::execAttack_AI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Attack_AI();
	P_NATIVE_END;
}
// End Class AMyEnemy Function Attack_AI

// Begin Class AMyEnemy
void AMyEnemy::StaticRegisterNativesAMyEnemy()
{
	UClass* Class = AMyEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Attack_AI", &AMyEnemy::execAttack_AI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyEnemy_Attack_AI, "Attack_AI" }, // 1291168880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEnemy);
AMyEnemy::~AMyEnemy() {}
// End Class AMyEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyEnemy, AMyEnemy::StaticClass, TEXT("AMyEnemy"), &Z_Registration_Info_UClass_AMyEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyEnemy), 1786161348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEnemy_h_1125435179(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
