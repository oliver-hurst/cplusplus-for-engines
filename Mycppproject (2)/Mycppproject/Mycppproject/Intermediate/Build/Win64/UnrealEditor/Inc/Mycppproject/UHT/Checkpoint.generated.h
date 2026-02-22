// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "week 1_task2/Checkpoint.h"

#ifdef MYCPPPROJECT_Checkpoint_generated_h
#error "Checkpoint.generated.h already included, missing '#pragma once' in Checkpoint.h"
#endif
#define MYCPPPROJECT_Checkpoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Delegate FEndGaneSignature *****************************************************
#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h_13_DELEGATE \
MYCPPPROJECT_API void FEndGaneSignature_DelegateWrapper(const FMulticastScriptDelegate& EndGaneSignature, const FString& EndMessage);


// ********** End Delegate FEndGaneSignature *******************************************************

// ********** Begin Class ACheckpoint **************************************************************
#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckpointOverlapEnd); \
	DECLARE_FUNCTION(execCheckpointOverlapped);


MYCPPPROJECT_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();

#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACheckpoint(); \
	friend struct Z_Construct_UClass_ACheckpoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYCPPPROJECT_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister(); \
public: \
	DECLARE_CLASS2(ACheckpoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mycppproject"), Z_Construct_UClass_ACheckpoint_NoRegister) \
	DECLARE_SERIALIZER(ACheckpoint) \
	virtual UObject* _getUObject() const override { return const_cast<ACheckpoint*>(this); }


#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACheckpoint(ACheckpoint&&) = delete; \
	ACheckpoint(const ACheckpoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACheckpoint) \
	NO_API virtual ~ACheckpoint();


#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h_14_PROLOG
#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACheckpoint;

// ********** End Class ACheckpoint ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
