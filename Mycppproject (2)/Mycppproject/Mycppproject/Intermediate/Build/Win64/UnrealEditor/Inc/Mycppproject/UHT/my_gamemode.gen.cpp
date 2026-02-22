// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "week 1/my_gamemode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodemy_gamemode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYCPPPROJECT_API UClass* Z_Construct_UClass_Amy_gamemode();
MYCPPPROJECT_API UClass* Z_Construct_UClass_Amy_gamemode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mycppproject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Amy_gamemode Function FinishGame *****************************************
struct Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics
{
	struct my_gamemode_eventFinishGame_Parms
	{
		FString EndMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/week 1/my_gamemode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EndMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics::NewProp_EndMessage = { "EndMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(my_gamemode_eventFinishGame_Parms, EndMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics::NewProp_EndMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_Amy_gamemode, nullptr, "FinishGame", Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics::my_gamemode_eventFinishGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics::my_gamemode_eventFinishGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_Amy_gamemode_FinishGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Amy_gamemode_FinishGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(Amy_gamemode::execFinishGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EndMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishGame(Z_Param_EndMessage);
	P_NATIVE_END;
}
// ********** End Class Amy_gamemode Function FinishGame *******************************************

// ********** Begin Class Amy_gamemode *************************************************************
void Amy_gamemode::StaticRegisterNativesAmy_gamemode()
{
	UClass* Class = Amy_gamemode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishGame", &Amy_gamemode::execFinishGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_Amy_gamemode;
UClass* Amy_gamemode::GetPrivateStaticClass()
{
	using TClass = Amy_gamemode;
	if (!Z_Registration_Info_UClass_Amy_gamemode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("my_gamemode"),
			Z_Registration_Info_UClass_Amy_gamemode.InnerSingleton,
			StaticRegisterNativesAmy_gamemode,
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
	return Z_Registration_Info_UClass_Amy_gamemode.InnerSingleton;
}
UClass* Z_Construct_UClass_Amy_gamemode_NoRegister()
{
	return Amy_gamemode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Amy_gamemode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "week 1/my_gamemode.h" },
		{ "ModuleRelativePath", "Public/week 1/my_gamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_Amy_gamemode_FinishGame, "FinishGame" }, // 3960376701
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Amy_gamemode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Amy_gamemode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Mycppproject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Amy_gamemode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Amy_gamemode_Statics::ClassParams = {
	&Amy_gamemode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Amy_gamemode_Statics::Class_MetaDataParams), Z_Construct_UClass_Amy_gamemode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Amy_gamemode()
{
	if (!Z_Registration_Info_UClass_Amy_gamemode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Amy_gamemode.OuterSingleton, Z_Construct_UClass_Amy_gamemode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Amy_gamemode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Amy_gamemode);
Amy_gamemode::~Amy_gamemode() {}
// ********** End Class Amy_gamemode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_my_gamemode_h__Script_Mycppproject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Amy_gamemode, Amy_gamemode::StaticClass, TEXT("Amy_gamemode"), &Z_Registration_Info_UClass_Amy_gamemode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Amy_gamemode), 2378419522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_my_gamemode_h__Script_Mycppproject_1275867951(TEXT("/Script/Mycppproject"),
	Z_CompiledInDeferFile_FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_my_gamemode_h__Script_Mycppproject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_my_gamemode_h__Script_Mycppproject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
