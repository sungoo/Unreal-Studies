// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_PSU_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE_PSU;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE_PSU()
	{
		if (!Z_Registration_Info_UPackage__Script_UE_PSU.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE_PSU",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x349C89CF,
				0x6A88EA17,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE_PSU.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE_PSU.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE_PSU(Z_Construct_UPackage__Script_UE_PSU, TEXT("/Script/UE_PSU"), Z_Registration_Info_UPackage__Script_UE_PSU, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x349C89CF, 0x6A88EA17));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
