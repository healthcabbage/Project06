// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project06/MoveAtcor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveAtcor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PROJECT06_API UClass* Z_Construct_UClass_AMoveAtcor();
PROJECT06_API UClass* Z_Construct_UClass_AMoveAtcor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project06();
// End Cross Module References

// Begin Class AMoveAtcor
void AMoveAtcor::StaticRegisterNativesAMoveAtcor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveAtcor);
UClass* Z_Construct_UClass_AMoveAtcor_NoRegister()
{
	return AMoveAtcor::StaticClass();
}
struct Z_Construct_UClass_AMoveAtcor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MoveAtcor.h" },
		{ "ModuleRelativePath", "MoveAtcor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Platform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//make\n" },
#endif
		{ "ModuleRelativePath", "MoveAtcor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "make" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Platform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc3\xb9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbe\xc6\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "MoveAtcor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc3\xb9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbe\xc6\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Plaform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\n" },
#endif
		{ "ModuleRelativePath", "MoveAtcor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ischeckX_MetaData[] = {
		{ "Category", "Plaform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//x, y\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xc5\xa9\n" },
#endif
		{ "ModuleRelativePath", "MoveAtcor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "x, y\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xc5\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ischeckY_MetaData[] = {
		{ "Category", "Plaform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xc2\xbf\xef\xbf\xbd \xc3\xbc\xc5\xa9\n" },
#endif
		{ "ModuleRelativePath", "MoveAtcor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc2\xbf\xef\xbf\xbd \xc3\xbc\xc5\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMove_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MoveAtcor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
	static void NewProp_ischeckX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ischeckX;
	static void NewProp_ischeckY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ischeckY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveAtcor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMoveAtcor_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveAtcor, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveAtcor_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveAtcor, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveAtcor_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveAtcor, MoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDistance_MetaData), NewProp_MoveDistance_MetaData) };
void Z_Construct_UClass_AMoveAtcor_Statics::NewProp_ischeckX_SetBit(void* Obj)
{
	((AMoveAtcor*)Obj)->ischeckX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMoveAtcor_Statics::NewProp_ischeckX = { "ischeckX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMoveAtcor), &Z_Construct_UClass_AMoveAtcor_Statics::NewProp_ischeckX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ischeckX_MetaData), NewProp_ischeckX_MetaData) };
void Z_Construct_UClass_AMoveAtcor_Statics::NewProp_ischeckY_SetBit(void* Obj)
{
	((AMoveAtcor*)Obj)->ischeckY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMoveAtcor_Statics::NewProp_ischeckY = { "ischeckY", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMoveAtcor), &Z_Construct_UClass_AMoveAtcor_Statics::NewProp_ischeckY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ischeckY_MetaData), NewProp_ischeckY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveAtcor_Statics::NewProp_StaticMove = { "StaticMove", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoveAtcor, StaticMove), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMove_MetaData), NewProp_StaticMove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveAtcor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveAtcor_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveAtcor_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveAtcor_Statics::NewProp_MoveDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveAtcor_Statics::NewProp_ischeckX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveAtcor_Statics::NewProp_ischeckY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveAtcor_Statics::NewProp_StaticMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveAtcor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoveAtcor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Project06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveAtcor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveAtcor_Statics::ClassParams = {
	&AMoveAtcor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMoveAtcor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoveAtcor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoveAtcor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoveAtcor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoveAtcor()
{
	if (!Z_Registration_Info_UClass_AMoveAtcor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveAtcor.OuterSingleton, Z_Construct_UClass_AMoveAtcor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoveAtcor.OuterSingleton;
}
template<> PROJECT06_API UClass* StaticClass<AMoveAtcor>()
{
	return AMoveAtcor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveAtcor);
AMoveAtcor::~AMoveAtcor() {}
// End Class AMoveAtcor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project06_Source_Project06_MoveAtcor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoveAtcor, AMoveAtcor::StaticClass, TEXT("AMoveAtcor"), &Z_Registration_Info_UClass_AMoveAtcor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveAtcor), 106586279U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project06_Source_Project06_MoveAtcor_h_1739855307(TEXT("/Script/Project06"),
	Z_CompiledInDeferFile_FID_Project06_Source_Project06_MoveAtcor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project06_Source_Project06_MoveAtcor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
