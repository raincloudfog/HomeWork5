// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeWork_5/Public/TestUnrealCoding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestUnrealCoding() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
HOMEWORK_5_API UClass* Z_Construct_UClass_ATestUnrealCoding();
HOMEWORK_5_API UClass* Z_Construct_UClass_ATestUnrealCoding_NoRegister();
UPackage* Z_Construct_UPackage__Script_HomeWork_5();
// End Cross Module References

// Begin Class ATestUnrealCoding
void ATestUnrealCoding::StaticRegisterNativesATestUnrealCoding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestUnrealCoding);
UClass* Z_Construct_UClass_ATestUnrealCoding_NoRegister()
{
	return ATestUnrealCoding::StaticClass();
}
struct Z_Construct_UClass_ATestUnrealCoding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TestUnrealCoding.h" },
		{ "ModuleRelativePath", "Public/TestUnrealCoding.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestUnrealCoding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestUnrealCoding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HomeWork_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestUnrealCoding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestUnrealCoding_Statics::ClassParams = {
	&ATestUnrealCoding::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestUnrealCoding_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestUnrealCoding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestUnrealCoding()
{
	if (!Z_Registration_Info_UClass_ATestUnrealCoding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestUnrealCoding.OuterSingleton, Z_Construct_UClass_ATestUnrealCoding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestUnrealCoding.OuterSingleton;
}
template<> HOMEWORK_5_API UClass* StaticClass<ATestUnrealCoding>()
{
	return ATestUnrealCoding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestUnrealCoding);
ATestUnrealCoding::~ATestUnrealCoding() {}
// End Class ATestUnrealCoding

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_HomeWork5_HomeWork_5_Source_HomeWork_5_Public_TestUnrealCoding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestUnrealCoding, ATestUnrealCoding::StaticClass, TEXT("ATestUnrealCoding"), &Z_Registration_Info_UClass_ATestUnrealCoding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestUnrealCoding), 2420324606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_HomeWork5_HomeWork_5_Source_HomeWork_5_Public_TestUnrealCoding_h_152486507(TEXT("/Script/HomeWork_5"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_HomeWork5_HomeWork_5_Source_HomeWork_5_Public_TestUnrealCoding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_HomeWork5_HomeWork_5_Source_HomeWork_5_Public_TestUnrealCoding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
