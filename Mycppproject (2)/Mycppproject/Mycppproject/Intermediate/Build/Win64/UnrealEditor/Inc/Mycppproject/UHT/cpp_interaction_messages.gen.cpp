// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "week 1_task2/cpp_interaction_messages.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodecpp_interaction_messages() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MYCPPPROJECT_API UClass* Z_Construct_UClass_Ucpp_interaction_messages();
MYCPPPROJECT_API UClass* Z_Construct_UClass_Ucpp_interaction_messages_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mycppproject();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface Ucpp_interaction_messages Function DoInteract ************************
void Icpp_interaction_messages::DoInteract()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DoInteract instead.");
}
static FName NAME_Ucpp_interaction_messages_DoInteract = FName(TEXT("DoInteract"));
void Icpp_interaction_messages::Execute_DoInteract(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(Ucpp_interaction_messages::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_Ucpp_interaction_messages_DoInteract);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (Icpp_interaction_messages*)(O->GetNativeInterfaceAddress(Ucpp_interaction_messages::StaticClass())))
	{
		I->DoInteract_Implementation();
	}
}
struct Z_Construct_UFunction_Ucpp_interaction_messages_DoInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/week 1_task2/cpp_interaction_messages.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Ucpp_interaction_messages_DoInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_Ucpp_interaction_messages, nullptr, "DoInteract", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Ucpp_interaction_messages_DoInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_Ucpp_interaction_messages_DoInteract_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_Ucpp_interaction_messages_DoInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Ucpp_interaction_messages_DoInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Icpp_interaction_messages::execDoInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoInteract_Implementation();
	P_NATIVE_END;
}
// ********** End Interface Ucpp_interaction_messages Function DoInteract **************************

// ********** Begin Interface Ucpp_interaction_messages ********************************************
void Ucpp_interaction_messages::StaticRegisterNativesUcpp_interaction_messages()
{
	UClass* Class = Ucpp_interaction_messages::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoInteract", &Icpp_interaction_messages::execDoInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_Ucpp_interaction_messages;
UClass* Ucpp_interaction_messages::GetPrivateStaticClass()
{
	using TClass = Ucpp_interaction_messages;
	if (!Z_Registration_Info_UClass_Ucpp_interaction_messages.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("cpp_interaction_messages"),
			Z_Registration_Info_UClass_Ucpp_interaction_messages.InnerSingleton,
			StaticRegisterNativesUcpp_interaction_messages,
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
	return Z_Registration_Info_UClass_Ucpp_interaction_messages.InnerSingleton;
}
UClass* Z_Construct_UClass_Ucpp_interaction_messages_NoRegister()
{
	return Ucpp_interaction_messages::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Ucpp_interaction_messages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/week 1_task2/cpp_interaction_messages.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_Ucpp_interaction_messages_DoInteract, "DoInteract" }, // 1581266025
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Icpp_interaction_messages>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Ucpp_interaction_messages_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Mycppproject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Ucpp_interaction_messages_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Ucpp_interaction_messages_Statics::ClassParams = {
	&Ucpp_interaction_messages::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Ucpp_interaction_messages_Statics::Class_MetaDataParams), Z_Construct_UClass_Ucpp_interaction_messages_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Ucpp_interaction_messages()
{
	if (!Z_Registration_Info_UClass_Ucpp_interaction_messages.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Ucpp_interaction_messages.OuterSingleton, Z_Construct_UClass_Ucpp_interaction_messages_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Ucpp_interaction_messages.OuterSingleton;
}
Ucpp_interaction_messages::Ucpp_interaction_messages(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(Ucpp_interaction_messages);
// ********** End Interface Ucpp_interaction_messages **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_interaction_messages_h__Script_Mycppproject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Ucpp_interaction_messages, Ucpp_interaction_messages::StaticClass, TEXT("Ucpp_interaction_messages"), &Z_Registration_Info_UClass_Ucpp_interaction_messages, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Ucpp_interaction_messages), 3654891682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_interaction_messages_h__Script_Mycppproject_523546517(TEXT("/Script/Mycppproject"),
	Z_CompiledInDeferFile_FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_interaction_messages_h__Script_Mycppproject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_interaction_messages_h__Script_Mycppproject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
