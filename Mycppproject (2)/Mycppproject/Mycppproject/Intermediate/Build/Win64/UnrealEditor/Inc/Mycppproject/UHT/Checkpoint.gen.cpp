// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "week 1_task2/Checkpoint.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCheckpoint() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MYCPPPROJECT_API UClass* Z_Construct_UClass_ACheckpoint();
MYCPPPROJECT_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();
MYCPPPROJECT_API UClass* Z_Construct_UClass_Ucpp_interaction_messages_NoRegister();
MYCPPPROJECT_API UFunction* Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Mycppproject();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEndGaneSignature *****************************************************
struct Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics
{
	struct _Script_Mycppproject_eventEndGaneSignature_Parms
	{
		FString EndMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/week 1_task2/Checkpoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EndMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics::NewProp_EndMessage = { "EndMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Mycppproject_eventEndGaneSignature_Parms, EndMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics::NewProp_EndMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Mycppproject, nullptr, "EndGaneSignature__DelegateSignature", Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics::_Script_Mycppproject_eventEndGaneSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics::_Script_Mycppproject_eventEndGaneSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEndGaneSignature_DelegateWrapper(const FMulticastScriptDelegate& EndGaneSignature, const FString& EndMessage)
{
	struct _Script_Mycppproject_eventEndGaneSignature_Parms
	{
		FString EndMessage;
	};
	_Script_Mycppproject_eventEndGaneSignature_Parms Parms;
	Parms.EndMessage=EndMessage;
	EndGaneSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FEndGaneSignature *******************************************************

// ********** Begin Class ACheckpoint Function CheckpointOverlapEnd ********************************
struct Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics
{
	struct Checkpoint_eventCheckpointOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/week 1_task2/Checkpoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventCheckpointOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventCheckpointOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventCheckpointOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventCheckpointOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACheckpoint, nullptr, "CheckpointOverlapEnd", Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::Checkpoint_eventCheckpointOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::Checkpoint_eventCheckpointOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACheckpoint::execCheckpointOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckpointOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class ACheckpoint Function CheckpointOverlapEnd **********************************

// ********** Begin Class ACheckpoint Function CheckpointOverlapped ********************************
struct Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics
{
	struct Checkpoint_eventCheckpointOverlapped_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/week 1_task2/Checkpoint.h" },
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
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventCheckpointOverlapped_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventCheckpointOverlapped_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventCheckpointOverlapped_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventCheckpointOverlapped_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Checkpoint_eventCheckpointOverlapped_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Checkpoint_eventCheckpointOverlapped_Parms), &Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventCheckpointOverlapped_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACheckpoint, nullptr, "CheckpointOverlapped", Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::Checkpoint_eventCheckpointOverlapped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::Checkpoint_eventCheckpointOverlapped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACheckpoint::execCheckpointOverlapped)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckpointOverlapped(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ACheckpoint Function CheckpointOverlapped **********************************

// ********** Begin Class ACheckpoint **************************************************************
void ACheckpoint::StaticRegisterNativesACheckpoint()
{
	UClass* Class = ACheckpoint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckpointOverlapEnd", &ACheckpoint::execCheckpointOverlapEnd },
		{ "CheckpointOverlapped", &ACheckpoint::execCheckpointOverlapped },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACheckpoint;
UClass* ACheckpoint::GetPrivateStaticClass()
{
	using TClass = ACheckpoint;
	if (!Z_Registration_Info_UClass_ACheckpoint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Checkpoint"),
			Z_Registration_Info_UClass_ACheckpoint.InnerSingleton,
			StaticRegisterNativesACheckpoint,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACheckpoint.InnerSingleton;
}
UClass* Z_Construct_UClass_ACheckpoint_NoRegister()
{
	return ACheckpoint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACheckpoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "week 1_task2/Checkpoint.h" },
		{ "ModuleRelativePath", "Public/week 1_task2/Checkpoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndGameDelagate_MetaData[] = {
		{ "ModuleRelativePath", "Public/week 1_task2/Checkpoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Checkpoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/week 1_task2/Checkpoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndGameDelagate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACheckpoint_CheckpointOverlapEnd, "CheckpointOverlapEnd" }, // 3313711026
		{ &Z_Construct_UFunction_ACheckpoint_CheckpointOverlapped, "CheckpointOverlapped" }, // 3177784879
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckpoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_OnEndGameDelagate = { "OnEndGameDelagate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpoint, OnEndGameDelagate), Z_Construct_UDelegateFunction_Mycppproject_EndGaneSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndGameDelagate_MetaData), NewProp_OnEndGameDelagate_MetaData) }; // 3899215081
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpoint, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_OnEndGameDelagate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_BoxCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACheckpoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Mycppproject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACheckpoint_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_Ucpp_interaction_messages_NoRegister, (int32)VTABLE_OFFSET(ACheckpoint, Icpp_interaction_messages), false },  // 3654891682
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACheckpoint_Statics::ClassParams = {
	&ACheckpoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACheckpoint_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACheckpoint()
{
	if (!Z_Registration_Info_UClass_ACheckpoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACheckpoint.OuterSingleton, Z_Construct_UClass_ACheckpoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACheckpoint.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckpoint);
ACheckpoint::~ACheckpoint() {}
// ********** End Class ACheckpoint ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h__Script_Mycppproject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACheckpoint, ACheckpoint::StaticClass, TEXT("ACheckpoint"), &Z_Registration_Info_UClass_ACheckpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACheckpoint), 420463013U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h__Script_Mycppproject_631589219(TEXT("/Script/Mycppproject"),
	Z_CompiledInDeferFile_FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h__Script_Mycppproject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_Checkpoint_h__Script_Mycppproject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
