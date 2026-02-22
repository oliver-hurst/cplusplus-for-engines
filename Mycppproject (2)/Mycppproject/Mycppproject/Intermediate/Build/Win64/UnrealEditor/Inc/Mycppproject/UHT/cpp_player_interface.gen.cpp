// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "week 1_task2/cpp_player_interface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodecpp_player_interface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MYCPPPROJECT_API UClass* Z_Construct_UClass_Ucpp_player_interface();
MYCPPPROJECT_API UClass* Z_Construct_UClass_Ucpp_player_interface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mycppproject();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface Ucpp_player_interface Function SetActorOverlapEvent ******************
struct cpp_player_interface_eventSetActorOverlapEvent_Parms
{
	AActor* OverlappedActor;
};
void Icpp_player_interface::SetActorOverlapEvent(AActor* OverlappedActor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetActorOverlapEvent instead.");
}
static FName NAME_Ucpp_player_interface_SetActorOverlapEvent = FName(TEXT("SetActorOverlapEvent"));
void Icpp_player_interface::Execute_SetActorOverlapEvent(UObject* O, AActor* OverlappedActor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(Ucpp_player_interface::StaticClass()));
	cpp_player_interface_eventSetActorOverlapEvent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_Ucpp_player_interface_SetActorOverlapEvent);
	if (Func)
	{
		Parms.OverlappedActor=OverlappedActor;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (Icpp_player_interface*)(O->GetNativeInterfaceAddress(Ucpp_player_interface::StaticClass())))
	{
		I->SetActorOverlapEvent_Implementation(OverlappedActor);
	}
}
struct Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/week 1_task2/cpp_player_interface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cpp_player_interface_eventSetActorOverlapEvent_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent_Statics::NewProp_OverlappedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_Ucpp_player_interface, nullptr, "SetActorOverlapEvent", Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent_Statics::PropPointers), sizeof(cpp_player_interface_eventSetActorOverlapEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(cpp_player_interface_eventSetActorOverlapEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Icpp_player_interface::execSetActorOverlapEvent)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActorOverlapEvent_Implementation(Z_Param_OverlappedActor);
	P_NATIVE_END;
}
// ********** End Interface Ucpp_player_interface Function SetActorOverlapEvent ********************

// ********** Begin Interface Ucpp_player_interface ************************************************
void Ucpp_player_interface::StaticRegisterNativesUcpp_player_interface()
{
	UClass* Class = Ucpp_player_interface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetActorOverlapEvent", &Icpp_player_interface::execSetActorOverlapEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_Ucpp_player_interface;
UClass* Ucpp_player_interface::GetPrivateStaticClass()
{
	using TClass = Ucpp_player_interface;
	if (!Z_Registration_Info_UClass_Ucpp_player_interface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("cpp_player_interface"),
			Z_Registration_Info_UClass_Ucpp_player_interface.InnerSingleton,
			StaticRegisterNativesUcpp_player_interface,
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
	return Z_Registration_Info_UClass_Ucpp_player_interface.InnerSingleton;
}
UClass* Z_Construct_UClass_Ucpp_player_interface_NoRegister()
{
	return Ucpp_player_interface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Ucpp_player_interface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/week 1_task2/cpp_player_interface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_Ucpp_player_interface_SetActorOverlapEvent, "SetActorOverlapEvent" }, // 2082030186
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Icpp_player_interface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Ucpp_player_interface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Mycppproject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ucpp_player_interface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Ucpp_player_interface_Statics::ClassParams = {
	&Ucpp_player_interface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ucpp_player_interface_Statics::Class_MetaDataParams), Z_Construct_UClass_Ucpp_player_interface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Ucpp_player_interface()
{
	if (!Z_Registration_Info_UClass_Ucpp_player_interface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ucpp_player_interface.OuterSingleton, Z_Construct_UClass_Ucpp_player_interface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Ucpp_player_interface.OuterSingleton;
}
Ucpp_player_interface::Ucpp_player_interface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(Ucpp_player_interface);
// ********** End Interface Ucpp_player_interface **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h__Script_Mycppproject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Ucpp_player_interface, Ucpp_player_interface::StaticClass, TEXT("Ucpp_player_interface"), &Z_Registration_Info_UClass_Ucpp_player_interface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ucpp_player_interface), 2392250347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h__Script_Mycppproject_3072113589(TEXT("/Script/Mycppproject"),
	Z_CompiledInDeferFile_FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h__Script_Mycppproject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h__Script_Mycppproject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
