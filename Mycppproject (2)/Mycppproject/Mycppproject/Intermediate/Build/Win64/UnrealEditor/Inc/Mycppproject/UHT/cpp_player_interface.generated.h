// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "week 1_task2/cpp_player_interface.h"

#ifdef MYCPPPROJECT_cpp_player_interface_generated_h
#error "cpp_player_interface.generated.h already included, missing '#pragma once' in cpp_player_interface.h"
#endif
#define MYCPPPROJECT_cpp_player_interface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Interface Ucpp_player_interface ************************************************
#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetActorOverlapEvent_Implementation(AActor* OverlappedActor) {}; \
	DECLARE_FUNCTION(execSetActorOverlapEvent);


#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_13_CALLBACK_WRAPPERS
MYCPPPROJECT_API UClass* Z_Construct_UClass_Ucpp_player_interface_NoRegister();

#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Ucpp_player_interface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	Ucpp_player_interface(Ucpp_player_interface&&) = delete; \
	Ucpp_player_interface(const Ucpp_player_interface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ucpp_player_interface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ucpp_player_interface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Ucpp_player_interface) \
	virtual ~Ucpp_player_interface() = default;


#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUcpp_player_interface(); \
	friend struct Z_Construct_UClass_Ucpp_player_interface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYCPPPROJECT_API UClass* Z_Construct_UClass_Ucpp_player_interface_NoRegister(); \
public: \
	DECLARE_CLASS2(Ucpp_player_interface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Mycppproject"), Z_Construct_UClass_Ucpp_player_interface_NoRegister) \
	DECLARE_SERIALIZER(Ucpp_player_interface)


#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~Icpp_player_interface() {} \
public: \
	typedef Ucpp_player_interface UClassType; \
	typedef Icpp_player_interface ThisClass; \
	static void Execute_SetActorOverlapEvent(UObject* O, AActor* OverlappedActor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_10_PROLOG
#define FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_13_CALLBACK_WRAPPERS \
	FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class Ucpp_player_interface;

// ********** End Interface Ucpp_player_interface **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_h021185l_Downloads_Mycppproject_Mycppproject_Source_Mycppproject_Public_week_1_task2_cpp_player_interface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
