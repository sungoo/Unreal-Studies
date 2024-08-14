// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEffect() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_AMyEffect();
UE_PSU_API UClass* Z_Construct_UClass_AMyEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class AMyEffect Function End
struct Z_Construct_UFunction_AMyEffect_End_Statics
{
	struct MyEffect_eventEnd_Parms
	{
		UParticleSystemComponent* particle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_particle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_particle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEffect_End_Statics::NewProp_particle = { "particle", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyEffect_eventEnd_Parms, particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_particle_MetaData), NewProp_particle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEffect_End_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEffect_End_Statics::NewProp_particle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEffect_End_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEffect_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEffect, nullptr, "End", nullptr, nullptr, Z_Construct_UFunction_AMyEffect_End_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEffect_End_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyEffect_End_Statics::MyEffect_eventEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEffect_End_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyEffect_End_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyEffect_End_Statics::MyEffect_eventEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyEffect_End()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyEffect_End_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyEffect::execEnd)
{
	P_GET_OBJECT(UParticleSystemComponent,Z_Param_particle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->End(Z_Param_particle);
	P_NATIVE_END;
}
// End Class AMyEffect Function End

// Begin Class AMyEffect Function EndNiagara
struct Z_Construct_UFunction_AMyEffect_EndNiagara_Statics
{
	struct MyEffect_eventEndNiagara_Parms
	{
		UNiagaraComponent* particle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_particle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_particle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyEffect_EndNiagara_Statics::NewProp_particle = { "particle", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyEffect_eventEndNiagara_Parms, particle), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_particle_MetaData), NewProp_particle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEffect_EndNiagara_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEffect_EndNiagara_Statics::NewProp_particle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEffect_EndNiagara_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEffect_EndNiagara_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEffect, nullptr, "EndNiagara", nullptr, nullptr, Z_Construct_UFunction_AMyEffect_EndNiagara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEffect_EndNiagara_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyEffect_EndNiagara_Statics::MyEffect_eventEndNiagara_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEffect_EndNiagara_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyEffect_EndNiagara_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyEffect_EndNiagara_Statics::MyEffect_eventEndNiagara_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyEffect_EndNiagara()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyEffect_EndNiagara_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyEffect::execEndNiagara)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_particle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndNiagara(Z_Param_particle);
	P_NATIVE_END;
}
// End Class AMyEffect Function EndNiagara

// Begin Class AMyEffect
void AMyEffect::StaticRegisterNativesAMyEffect()
{
	UClass* Class = AMyEffect::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "End", &AMyEffect::execEnd },
		{ "EndNiagara", &AMyEffect::execEndNiagara },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyEffect);
UClass* Z_Construct_UClass_AMyEffect_NoRegister()
{
	return AMyEffect::StaticClass();
}
struct Z_Construct_UClass_AMyEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyEffect.h" },
		{ "ModuleRelativePath", "MyEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__particleCom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyEffect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__naiagaraCom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyEffect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__particleCom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__naiagaraCom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyEffect_End, "End" }, // 2088704721
		{ &Z_Construct_UFunction_AMyEffect_EndNiagara, "EndNiagara" }, // 972017596
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyEffect_Statics::NewProp__particleCom = { "_particleCom", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyEffect, _particleCom), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__particleCom_MetaData), NewProp__particleCom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyEffect_Statics::NewProp__naiagaraCom = { "_naiagaraCom", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyEffect, _naiagaraCom), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__naiagaraCom_MetaData), NewProp__naiagaraCom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEffect_Statics::NewProp__particleCom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEffect_Statics::NewProp__naiagaraCom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyEffect_Statics::ClassParams = {
	&AMyEffect::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyEffect_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyEffect()
{
	if (!Z_Registration_Info_UClass_AMyEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyEffect.OuterSingleton, Z_Construct_UClass_AMyEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyEffect.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<AMyEffect>()
{
	return AMyEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEffect);
AMyEffect::~AMyEffect() {}
// End Class AMyEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyEffect, AMyEffect::StaticClass, TEXT("AMyEffect"), &Z_Registration_Info_UClass_AMyEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyEffect), 1582279234U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h_4194443789(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyEffect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
