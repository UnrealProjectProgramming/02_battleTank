// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLETANK_TankAIController_generated_h
#error "TankAIController.generated.h already included, missing '#pragma once' in TankAIController.h"
#endif
#define BATTLETANK_TankAIController_generated_h

#define BattleTank_Source_BattleTank_Public_TankAIController_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPossedTankDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPossedTankDeath(); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_TankAIController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPossedTankDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPossedTankDeath(); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_TankAIController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankAIController(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_ATankAIController(); \
public: \
	DECLARE_CLASS(ATankAIController, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ATankAIController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_TankAIController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATankAIController(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_ATankAIController(); \
public: \
	DECLARE_CLASS(ATankAIController, AAIController, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ATankAIController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_TankAIController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankAIController(ATankAIController&&); \
	NO_API ATankAIController(const ATankAIController&); \
public:


#define BattleTank_Source_BattleTank_Public_TankAIController_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankAIController(ATankAIController&&); \
	NO_API ATankAIController(const ATankAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankAIController)


#define BattleTank_Source_BattleTank_Public_TankAIController_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AcceptanceRadius() { return STRUCT_OFFSET(ATankAIController, AcceptanceRadius); }


#define BattleTank_Source_BattleTank_Public_TankAIController_h_11_PROLOG
#define BattleTank_Source_BattleTank_Public_TankAIController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankAIController_h_14_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankAIController_h_14_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_TankAIController_h_14_INCLASS \
	BattleTank_Source_BattleTank_Public_TankAIController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_TankAIController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankAIController_h_14_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankAIController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankAIController_h_14_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankAIController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_TankAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
