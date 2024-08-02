// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyInventoryUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInventoryUI() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_UMyInventoryUI();
UE_PSU_API UClass* Z_Construct_UClass_UMyInventoryUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Class UMyInventoryUI Function SetItem
struct Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics
{
	struct MyInventoryUI_eventSetItem_Parms
	{
		int32 ItemId;
		int32 index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyInventoryUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyInventoryUI_eventSetItem_Parms, ItemId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyInventoryUI_eventSetItem_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::NewProp_index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyInventoryUI, nullptr, "SetItem", nullptr, nullptr, Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::MyInventoryUI_eventSetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::MyInventoryUI_eventSetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyInventoryUI_SetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyInventoryUI_SetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyInventoryUI::execSetItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemId);
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItem(Z_Param_ItemId,Z_Param_index);
	P_NATIVE_END;
}
// End Class UMyInventoryUI Function SetItem

// Begin Class UMyInventoryUI
void UMyInventoryUI::StaticRegisterNativesUMyInventoryUI()
{
	UClass* Class = UMyInventoryUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetItem", &UMyInventoryUI::execSetItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInventoryUI);
UClass* Z_Construct_UClass_UMyInventoryUI_NoRegister()
{
	return UMyInventoryUI::StaticClass();
}
struct Z_Construct_UClass_UMyInventoryUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyInventoryUI.h" },
		{ "ModuleRelativePath", "MyInventoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInventoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__slotBtns_MetaData[] = {
		{ "Category", "MyInventoryUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInventoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__slotBtnImages_MetaData[] = {
		{ "Category", "MyInventoryUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInventoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__axe_MetaData[] = {
		{ "Category", "MyInventoryUI" },
		{ "ModuleRelativePath", "MyInventoryUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__default_MetaData[] = {
		{ "Category", "MyInventoryUI" },
		{ "ModuleRelativePath", "MyInventoryUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotGrid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__slotBtns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__slotBtns;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__slotBtnImages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__slotBtnImages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__axe;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__default;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyInventoryUI_SetItem, "SetItem" }, // 3872216513
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInventoryUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryUI_Statics::NewProp_SlotGrid = { "SlotGrid", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryUI, SlotGrid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotGrid_MetaData), NewProp_SlotGrid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__slotBtns_Inner = { "_slotBtns", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__slotBtns = { "_slotBtns", nullptr, (EPropertyFlags)0x0040008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryUI, _slotBtns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__slotBtns_MetaData), NewProp__slotBtns_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__slotBtnImages_Inner = { "_slotBtnImages", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__slotBtnImages = { "_slotBtnImages", nullptr, (EPropertyFlags)0x0040008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryUI, _slotBtnImages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__slotBtnImages_MetaData), NewProp__slotBtnImages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__axe = { "_axe", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryUI, _axe), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__axe_MetaData), NewProp__axe_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__default = { "_default", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInventoryUI, _default), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__default_MetaData), NewProp__default_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInventoryUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryUI_Statics::NewProp_SlotGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__slotBtns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__slotBtns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__slotBtnImages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__slotBtnImages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__axe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInventoryUI_Statics::NewProp__default,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyInventoryUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInventoryUI_Statics::ClassParams = {
	&UMyInventoryUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyInventoryUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInventoryUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInventoryUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInventoryUI()
{
	if (!Z_Registration_Info_UClass_UMyInventoryUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInventoryUI.OuterSingleton, Z_Construct_UClass_UMyInventoryUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInventoryUI.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<UMyInventoryUI>()
{
	return UMyInventoryUI::StaticClass();
}
UMyInventoryUI::UMyInventoryUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInventoryUI);
UMyInventoryUI::~UMyInventoryUI() {}
// End Class UMyInventoryUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInventoryUI, UMyInventoryUI::StaticClass, TEXT("UMyInventoryUI"), &Z_Registration_Info_UClass_UMyInventoryUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInventoryUI), 3345269642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryUI_h_2436880528(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyInventoryUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
