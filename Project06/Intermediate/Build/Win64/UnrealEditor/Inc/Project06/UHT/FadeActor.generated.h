// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FadeActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT06_FadeActor_generated_h
#error "FadeActor.generated.h already included, missing '#pragma once' in FadeActor.h"
#endif
#define PROJECT06_FadeActor_generated_h

#define FID_Project06_Source_Project06_FadeActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFadeActor(); \
	friend struct Z_Construct_UClass_AFadeActor_Statics; \
public: \
	DECLARE_CLASS(AFadeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project06"), NO_API) \
	DECLARE_SERIALIZER(AFadeActor)


#define FID_Project06_Source_Project06_FadeActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFadeActor(AFadeActor&&); \
	AFadeActor(const AFadeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFadeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFadeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFadeActor) \
	NO_API virtual ~AFadeActor();


#define FID_Project06_Source_Project06_FadeActor_h_9_PROLOG
#define FID_Project06_Source_Project06_FadeActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project06_Source_Project06_FadeActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Project06_Source_Project06_FadeActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT06_API UClass* StaticClass<class AFadeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project06_Source_Project06_FadeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
