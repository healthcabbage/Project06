// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project06/FadeActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFadeActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PROJECT06_API UClass* Z_Construct_UClass_AFadeActor();
PROJECT06_API UClass* Z_Construct_UClass_AFadeActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project06();
// End Cross Module References

// Begin Class AFadeActor
void AFadeActor::StaticRegisterNativesAFadeActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFadeActor);
UClass* Z_Construct_UClass_AFadeActor_NoRegister()
{
	return AFadeActor::StaticClass();
}
struct Z_Construct_UClass_AFadeActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FadeActor.h" },
		{ "ModuleRelativePath", "FadeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticFade_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FadeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fadeOuttime_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "FadeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeIntime_MetaData[] = {
		{ "Category", "Platform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xc3\xbc\xc5\xa9\n" },
#endif
		{ "ModuleRelativePath", "FadeActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xc3\xbc\xc5\xa9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticFade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fadeOuttime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeIntime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFadeActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFadeActor_Statics::NewProp_StaticFade = { "StaticFade", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFadeActor, StaticFade), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticFade_MetaData), NewProp_StaticFade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFadeActor_Statics::NewProp_fadeOuttime = { "fadeOuttime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFadeActor, fadeOuttime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fadeOuttime_MetaData), NewProp_fadeOuttime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFadeActor_Statics::NewProp_FadeIntime = { "FadeIntime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFadeActor, FadeIntime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeIntime_MetaData), NewProp_FadeIntime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFadeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFadeActor_Statics::NewProp_StaticFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFadeActor_Statics::NewProp_fadeOuttime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFadeActor_Statics::NewProp_FadeIntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFadeActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFadeActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Project06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFadeActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFadeActor_Statics::ClassParams = {
	&AFadeActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFadeActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFadeActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFadeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFadeActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFadeActor()
{
	if (!Z_Registration_Info_UClass_AFadeActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFadeActor.OuterSingleton, Z_Construct_UClass_AFadeActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFadeActor.OuterSingleton;
}
template<> PROJECT06_API UClass* StaticClass<AFadeActor>()
{
	return AFadeActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFadeActor);
AFadeActor::~AFadeActor() {}
// End Class AFadeActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project06_Source_Project06_FadeActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFadeActor, AFadeActor::StaticClass, TEXT("AFadeActor"), &Z_Registration_Info_UClass_AFadeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFadeActor), 3232401781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project06_Source_Project06_FadeActor_h_3830426642(TEXT("/Script/Project06"),
	Z_CompiledInDeferFile_FID_Project06_Source_Project06_FadeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project06_Source_Project06_FadeActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
