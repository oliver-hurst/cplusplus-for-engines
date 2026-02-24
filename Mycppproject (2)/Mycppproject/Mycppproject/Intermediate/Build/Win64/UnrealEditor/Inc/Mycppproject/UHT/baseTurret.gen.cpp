// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "wee2 part 1/baseTurret.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodebaseTurret() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
MYCPPPROJECT_API UClass* Z_Construct_UClass_ABaseProjectile_NoRegister();
MYCPPPROJECT_API UClass* Z_Construct_UClass_AbaseTurret();
MYCPPPROJECT_API UClass* Z_Construct_UClass_AbaseTurret_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mycppproject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AbaseTurret Function Fire ************************************************
static FName NAME_AbaseTurret_Fire = FName(TEXT("Fire"));
void AbaseTurret::Fire()
{
	UFunction* Func = FindFunctionChecked(NAME_AbaseTurret_Fire);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Fire_Implementation();
	}
}
struct Z_Construct_UFunction_AbaseTurret_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TurretData" },
		{ "ModuleRelativePath", "Public/wee2 part 1/baseTurret.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AbaseTurret_Fire_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AbaseTurret, nullptr, "Fire", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AbaseTurret_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AbaseTurret_Fire_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AbaseTurret_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AbaseTurret_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AbaseTurret::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire_Implementation();
	P_NATIVE_END;
}
// ********** End Class AbaseTurret Function Fire **************************************************

// ********** Begin Class AbaseTurret **************************************************************
void AbaseTurret::StaticRegisterNativesAbaseTurret()
{
	UClass* Class = AbaseTurret::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fire", &AbaseTurret::execFire },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AbaseTurret;
UClass* AbaseTurret::GetPrivateStaticClass()
{
	using TClass = AbaseTurret;
	if (!Z_Registration_Info_UClass_AbaseTurret.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("baseTurret"),
			Z_Registration_Info_UClass_AbaseTurret.InnerSingleton,
			StaticRegisterNativesAbaseTurret,
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
	return Z_Registration_Info_UClass_AbaseTurret.InnerSingleton;
}
UClass* Z_Construct_UClass_AbaseTurret_NoRegister()
{
	return AbaseTurret::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AbaseTurret_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "wee2 part 1/baseTurret.h" },
		{ "ModuleRelativePath", "Public/wee2 part 1/baseTurret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMeshComponent_MetaData[] = {
		{ "Category", "baseTurret" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/wee2 part 1/baseTurret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarrelMeshComponent_MetaData[] = {
		{ "Category", "baseTurret" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/wee2 part 1/baseTurret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirePoint_MetaData[] = {
		{ "Category", "baseTurret" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/wee2 part 1/baseTurret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSpeed_MetaData[] = {
		{ "Category", "TurretData" },
		{ "ModuleRelativePath", "Public/wee2 part 1/baseTurret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireTimer_MetaData[] = {
		{ "Category", "TurretData" },
		{ "ModuleRelativePath", "Public/wee2 part 1/baseTurret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "TurretData" },
		{ "ModuleRelativePath", "Public/wee2 part 1/baseTurret.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BarrelMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirePoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireTimer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AbaseTurret_Fire, "Fire" }, // 2947233207
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbaseTurret>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbaseTurret_Statics::NewProp_BaseMeshComponent = { "BaseMeshComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbaseTurret, BaseMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMeshComponent_MetaData), NewProp_BaseMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbaseTurret_Statics::NewProp_BarrelMeshComponent = { "BarrelMeshComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbaseTurret, BarrelMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarrelMeshComponent_MetaData), NewProp_BarrelMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AbaseTurret_Statics::NewProp_FirePoint = { "FirePoint", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbaseTurret, FirePoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirePoint_MetaData), NewProp_FirePoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AbaseTurret_Statics::NewProp_FireSpeed = { "FireSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbaseTurret, FireSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSpeed_MetaData), NewProp_FireSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AbaseTurret_Statics::NewProp_FireTimer = { "FireTimer", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbaseTurret, FireTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireTimer_MetaData), NewProp_FireTimer_MetaData) }; // 3834150579
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AbaseTurret_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbaseTurret, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AbaseTurret_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbaseTurret_Statics::NewProp_BaseMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbaseTurret_Statics::NewProp_BarrelMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbaseTurret_Statics::NewProp_FirePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbaseTurret_Statics::NewProp_FireSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbaseTurret_Statics::NewProp_FireTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AbaseTurret_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AbaseTurret_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AbaseTurret_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Mycppproject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AbaseTurret_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AbaseTurret_Statics::ClassParams = {
	&AbaseTurret::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AbaseTurret_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AbaseTurret_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AbaseTurret_Statics::Class_MetaDataParams), Z_Construct_UClass_AbaseTurret_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AbaseTurret()
{
	if (!Z_Registration_Info_UClass_AbaseTurret.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AbaseTurret.OuterSingleton, Z_Construct_UClass_AbaseTurret_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AbaseTurret.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AbaseTurret);
AbaseTurret::~AbaseTurret() {}
// ********** End Class AbaseTurret ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_baseTurret_h__Script_Mycppproject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AbaseTurret, AbaseTurret::StaticClass, TEXT("AbaseTurret"), &Z_Registration_Info_UClass_AbaseTurret, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AbaseTurret), 3545980750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_baseTurret_h__Script_Mycppproject_1819097369(TEXT("/Script/Mycppproject"),
	Z_CompiledInDeferFile_FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_baseTurret_h__Script_Mycppproject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_h021185l_Documents_GitHub_cplusplus_for_engines_Mycppproject__2__Mycppproject_Mycppproject_Source_Mycppproject_Public_wee2_part_1_baseTurret_h__Script_Mycppproject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
