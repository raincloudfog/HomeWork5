// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeWork_5/Public/MYHomeWorkActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMYHomeWorkActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
HOMEWORK_5_API UClass* Z_Construct_UClass_AMYHomeWorkActor();
HOMEWORK_5_API UClass* Z_Construct_UClass_AMYHomeWorkActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_HomeWork_5();
// End Cross Module References

// Begin Class AMYHomeWorkActor
void AMYHomeWorkActor::StaticRegisterNativesAMYHomeWorkActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMYHomeWorkActor);
UClass* Z_Construct_UClass_AMYHomeWorkActor_NoRegister()
{
	return AMYHomeWorkActor::StaticClass();
}
struct Z_Construct_UClass_AMYHomeWorkActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MYHomeWorkActor.h" },
		{ "ModuleRelativePath", "Public/MYHomeWorkActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMYHomeWorkActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMYHomeWorkActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HomeWork_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMYHomeWorkActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMYHomeWorkActor_Statics::ClassParams = {
	&AMYHomeWorkActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMYHomeWorkActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMYHomeWorkActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMYHomeWorkActor()
{
	if (!Z_Registration_Info_UClass_AMYHomeWorkActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMYHomeWorkActor.OuterSingleton, Z_Construct_UClass_AMYHomeWorkActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMYHomeWorkActor.OuterSingleton;
}
template<> HOMEWORK_5_API UClass* StaticClass<AMYHomeWorkActor>()
{
	return AMYHomeWorkActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMYHomeWorkActor);
AMYHomeWorkActor::~AMYHomeWorkActor() {}
// End Class AMYHomeWorkActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_HomeWork5_HomeWork_5_Source_HomeWork_5_Public_MYHomeWorkActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMYHomeWorkActor, AMYHomeWorkActor::StaticClass, TEXT("AMYHomeWorkActor"), &Z_Registration_Info_UClass_AMYHomeWorkActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMYHomeWorkActor), 1081105417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_HomeWork5_HomeWork_5_Source_HomeWork_5_Public_MYHomeWorkActor_h_3922288293(TEXT("/Script/HomeWork_5"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_HomeWork5_HomeWork_5_Source_HomeWork_5_Public_MYHomeWorkActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_GitHub_HomeWork5_HomeWork_5_Source_HomeWork_5_Public_MYHomeWorkActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
