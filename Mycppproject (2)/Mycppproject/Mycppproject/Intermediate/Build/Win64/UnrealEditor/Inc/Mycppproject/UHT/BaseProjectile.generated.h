// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "wee2 part 1/BaseProjectile.h"

#ifdef MYCPPPROJECT_BaseProjectile_generated_h
#error "BaseProjectile.generated.h already included, missing '#pragma once' in BaseProjectile.h"
#endif
#define MYCPPPROJECT_BaseProjectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ABaseProjectile **********************************************************
#define FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_BaseProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProJectileHit);


MYCPPPROJECT_API UClass* Z_Construct_UClass_ABaseProjectile_NoRegister();

#define FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_BaseProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseProjectile(); \
	friend struct Z_Construct_UClass_ABaseProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYCPPPROJECT_API UClass* Z_Construct_UClass_ABaseProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mycppproject"), Z_Construct_UClass_ABaseProjectile_NoRegister) \
	DECLARE_SERIALIZER(ABaseProjectile)


#define FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_BaseProjectile_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseProjectile(ABaseProjectile&&) = delete; \
	ABaseProjectile(const ABaseProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseProjectile) \
	NO_API virtual ~ABaseProjectile();


#define FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_BaseProjectile_h_12_PROLOG
#define FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_BaseProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_BaseProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_BaseProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_BaseProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseProjectile;

// ********** End Class ABaseProjectile ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_BaseProjectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
