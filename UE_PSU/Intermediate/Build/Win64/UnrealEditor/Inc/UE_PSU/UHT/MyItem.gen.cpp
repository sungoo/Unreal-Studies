// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_PSU/MyItem.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UE_PSU_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
UE_PSU_API UClass* Z_Construct_UClass_AMyItem();
UE_PSU_API UClass* Z_Construct_UClass_AMyItem_NoRegister();
UE_PSU_API UEnum* Z_Construct_UEnum_UE_PSU_TYPE();
UE_PSU_API UScriptStruct* Z_Construct_UScriptStruct_FMyItemData();
UPackage* Z_Construct_UPackage__Script_UE_PSU();
// End Cross Module References

// Begin Enum TYPE
static FEnumRegistrationInfo Z_Registration_Info_UEnum_TYPE;
static UEnum* TYPE_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_TYPE.OuterSingleton)
	{
		Z_Registration_Info_UEnum_TYPE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UE_PSU_TYPE, (UObject*)Z_Construct_UPackage__Script_UE_PSU(), TEXT("TYPE"));
	}
	return Z_Registration_Info_UEnum_TYPE.OuterSingleton;
}
template<> UE_PSU_API UEnum* StaticEnum<TYPE>()
{
	return TYPE_StaticEnum();
}
struct Z_Construct_UEnum_UE_PSU_TYPE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ATK.Name", "TYPE::ATK" },
		{ "HP.Name", "TYPE::HP" },
		{ "ModuleRelativePath", "MyItem.h" },
		{ "NONE.Name", "TYPE::NONE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TYPE::NONE", (int64)TYPE::NONE },
		{ "TYPE::ATK", (int64)TYPE::ATK },
		{ "TYPE::HP", (int64)TYPE::HP },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UE_PSU_TYPE_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UE_PSU,
	nullptr,
	"TYPE",
	"TYPE",
	Z_Construct_UEnum_UE_PSU_TYPE_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UE_PSU_TYPE_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UE_PSU_TYPE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UE_PSU_TYPE_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UE_PSU_TYPE()
{
	if (!Z_Registration_Info_UEnum_TYPE.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TYPE.InnerSingleton, Z_Construct_UEnum_UE_PSU_TYPE_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_TYPE.InnerSingleton;
}
// End Enum TYPE

// Begin ScriptStruct FMyItemData
static_assert(std::is_polymorphic<FMyItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMyItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyItemData;
class UScriptStruct* FMyItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyItemData, (UObject*)Z_Construct_UPackage__Script_UE_PSU(), TEXT("MyItemData"));
	}
	return Z_Registration_Info_UScriptStruct_MyItemData.OuterSingleton;
}
template<> UE_PSU_API UScriptStruct* StaticStruct<FMyItemData>()
{
	return FMyItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMyItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_itemCode_MetaData[] = {
		{ "Category", "MyItemData" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_itemType_MetaData[] = {
		{ "Category", "MyItemData" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_statAddValue_MetaData[] = {
		{ "Category", "MyItemData" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_itemCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_itemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_itemType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_statAddValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyItemData_Statics::NewProp_itemCode = { "itemCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyItemData, itemCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_itemCode_MetaData), NewProp_itemCode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyItemData_Statics::NewProp_itemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMyItemData_Statics::NewProp_itemType = { "itemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyItemData, itemType), Z_Construct_UEnum_UE_PSU_TYPE, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_itemType_MetaData), NewProp_itemType_MetaData) }; // 3823333216
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyItemData_Statics::NewProp_statAddValue = { "statAddValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMyItemData, statAddValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_statAddValue_MetaData), NewProp_statAddValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyItemData_Statics::NewProp_itemCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyItemData_Statics::NewProp_itemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyItemData_Statics::NewProp_itemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyItemData_Statics::NewProp_statAddValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MyItemData",
	Z_Construct_UScriptStruct_FMyItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyItemData_Statics::PropPointers),
	sizeof(FMyItemData),
	alignof(FMyItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMyItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMyItemData()
{
	if (!Z_Registration_Info_UScriptStruct_MyItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyItemData.InnerSingleton, Z_Construct_UScriptStruct_FMyItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MyItemData.InnerSingleton;
}
// End ScriptStruct FMyItemData

// Begin Class AMyItem Function OnMyChararcterOverlap
struct Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics
{
	struct MyItem_eventOnMyChararcterOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromWeep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPrimitiveComponent, OnComponentBeginOverlap, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult &, SweepResult\n" },
#endif
		{ "ModuleRelativePath", "MyItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPrimitiveComponent, OnComponentBeginOverlap, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult &, SweepResult" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromWeep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromWeep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyChararcterOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyChararcterOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyChararcterOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyChararcterOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_bFromWeep_SetBit(void* Obj)
{
	((MyItem_eventOnMyChararcterOverlap_Parms*)Obj)->bFromWeep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_bFromWeep = { "bFromWeep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyItem_eventOnMyChararcterOverlap_Parms), &Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_bFromWeep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyItem_eventOnMyChararcterOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_bFromWeep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyItem, nullptr, "OnMyChararcterOverlap", nullptr, nullptr, Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::MyItem_eventOnMyChararcterOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::MyItem_eventOnMyChararcterOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyItem::execOnMyChararcterOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromWeep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMyChararcterOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromWeep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AMyItem Function OnMyChararcterOverlap

// Begin Class AMyItem
void AMyItem::StaticRegisterNativesAMyItem()
{
	UClass* Class = AMyItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMyChararcterOverlap", &AMyItem::execOnMyChararcterOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyItem);
UClass* Z_Construct_UClass_AMyItem_NoRegister()
{
	return AMyItem::StaticClass();
}
struct Z_Construct_UClass_AMyItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyItem.h" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__meshComponent_MetaData[] = {
		{ "Category", "MyItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__trigger_MetaData[] = {
		{ "Category", "MyItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__itemHaver_MetaData[] = {
		{ "Category", "MyItem" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__itemCode_MetaData[] = {
		{ "Category", "MyItem" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__itemType_MetaData[] = {
		{ "Category", "MyItem" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__statAddValue_MetaData[] = {
		{ "Category", "MyItem" },
		{ "ModuleRelativePath", "MyItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__meshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__trigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__itemHaver;
	static const UECodeGen_Private::FIntPropertyParams NewProp__itemCode;
	static const UECodeGen_Private::FIntPropertyParams NewProp__itemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__itemType;
	static const UECodeGen_Private::FIntPropertyParams NewProp__statAddValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyItem_OnMyChararcterOverlap, "OnMyChararcterOverlap" }, // 3384030770
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__meshComponent = { "_meshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _meshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__meshComponent_MetaData), NewProp__meshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__trigger = { "_trigger", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _trigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__trigger_MetaData), NewProp__trigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__itemHaver = { "_itemHaver", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _itemHaver), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__itemHaver_MetaData), NewProp__itemHaver_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__itemCode = { "_itemCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _itemCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__itemCode_MetaData), NewProp__itemCode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__itemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__itemType = { "_itemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _itemType), Z_Construct_UEnum_UE_PSU_TYPE, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__itemType_MetaData), NewProp__itemType_MetaData) }; // 3823333216
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyItem_Statics::NewProp__statAddValue = { "_statAddValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyItem, _statAddValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__statAddValue_MetaData), NewProp__statAddValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__meshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__trigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__itemHaver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__itemCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__itemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__itemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyItem_Statics::NewProp__statAddValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UE_PSU,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyItem_Statics::ClassParams = {
	&AMyItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyItem()
{
	if (!Z_Registration_Info_UClass_AMyItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyItem.OuterSingleton, Z_Construct_UClass_AMyItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyItem.OuterSingleton;
}
template<> UE_PSU_API UClass* StaticClass<AMyItem>()
{
	return AMyItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyItem);
AMyItem::~AMyItem() {}
// End Class AMyItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyItem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ TYPE_StaticEnum, TEXT("TYPE"), &Z_Registration_Info_UEnum_TYPE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3823333216U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMyItemData::StaticStruct, Z_Construct_UScriptStruct_FMyItemData_Statics::NewStructOps, TEXT("MyItemData"), &Z_Registration_Info_UScriptStruct_MyItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyItemData), 218290713U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyItem, AMyItem::StaticClass, TEXT("AMyItem"), &Z_Registration_Info_UClass_AMyItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyItem), 2749301679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyItem_h_3673053765(TEXT("/Script/UE_PSU"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyItem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyItem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_SGA_Study_Unreal_Studies_UE_PSU_Source_UE_PSU_MyItem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
