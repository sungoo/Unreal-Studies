// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyInventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UE_PSU_API UClass* Z_Construct_UClass_AMyItem_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_UMyInventoryComponent();
UE_PSU_API UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class UMyInventoryComponent Function DropItem
struct Z_Construct_UFunction_UMyInventoryComponent_DropItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInventoryComponent_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInventoryComponent, nullptr, "DropItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInventoryComponent_DropItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyInventoryComponent_DropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInventoryComponent_DropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInventoryComponent::execDropItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItem();
	P_NATIVE_END;
}
// End Class UMyInventoryComponent Function DropItem

// Begin Class UMyInventoryComponent Function PutItem
struct Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics
{
	struct MyInventoryComponent_eventPutItem_Parms
	{
		AMyItem* item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyInventoryComponent_eventPutItem_Parms, item), Z_Construct_UClass_AMyItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyInventoryComponent_eventPutItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyInventoryComponent_eventPutItem_Parms), &Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::NewProp_item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInventoryComponent, nullptr, "PutItem", nullptr, nullptr, Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::MyInventoryComponent_eventPutItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::MyInventoryComponent_eventPutItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyInventoryComponent_PutItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInventoryComponent_PutItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInventoryComponent::execPutItem)
{
	P_GET_OBJECT(AMyItem,Z_Param_item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PutItem(Z_Param_item);
	P_NATIVE_END;
}
// End Class UMyInventoryComponent Function PutItem

// Begin Class UMyInventoryComponent
void UMyInventoryComponent::StaticRegisterNativesUMyInventoryComponent()
{
	UClass* Class = UMyInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DropItem", &UMyInventoryComponent::execDropItem },
		{ "PutItem", &UMyInventoryComponent::execPutItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInventoryComponent);
UClass* Z_Construct_UClass_UMyInventoryComponent_NoRegister()
{
	return UMyInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UMyInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyInventoryComponent.h" },
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__items_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item" },
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inventoryValiable_max_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item" },
		{ "ModuleRelativePath", "MyInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__items;
	static const UECodeGen_Private::FIntPropertyParams NewProp_inventoryValiable_max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyInventoryComponent_DropItem, "DropItem" }, // 3789924863
		{ &Z_Construct_UFunction_UMyInventoryComponent_PutItem, "PutItem" }, // 1147150195
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__items_Inner = { "_items", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMyItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__items = { "_items", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryComponent, _items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__items_MetaData), NewProp__items_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp_inventoryValiable_max = { "inventoryValiable_max", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryComponent, inventoryValiable_max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inventoryValiable_max_MetaData), NewProp_inventoryValiable_max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp__items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryComponent_Statics::NewProp_inventoryValiable_max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInventoryComponent_Statics::ClassParams = {
	&UMyInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UMyInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInventoryComponent.OuterSingleton, Z_Construct_UClass_UMyInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInventoryComponent.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<UMyInventoryComponent>()
{
	return UMyInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInventoryComponent);
UMyInventoryComponent::~UMyInventoryComponent() {}
// End Class UMyInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInventoryComponent, UMyInventoryComponent::StaticClass, TEXT("UMyInventoryComponent"), &Z_Registration_Info_UClass_UMyInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInventoryComponent), 1164374559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h_1313355317(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
