// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankBarrel;
class UTankTurret;
#ifdef BATTLETANK_TankAimingComponent_generated_h
#error "TankAimingComponent.generated.h already included, missing '#pragma once' in TankAimingComponent.h"
#endif
#define BATTLETANK_TankAimingComponent_generated_h

#define BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRoundsLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetRoundsLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet); \
		P_GET_OBJECT(UTankTurret,Z_Param_TurretToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_BarrelToSet,Z_Param_TurretToSet); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRoundsLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetRoundsLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet); \
		P_GET_OBJECT(UTankTurret,Z_Param_TurretToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_BarrelToSet,Z_Param_TurretToSet); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankAimingComponent(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_UTankAimingComponent(); \
public: \
	DECLARE_CLASS(UTankAimingComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankAimingComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUTankAimingComponent(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_UTankAimingComponent(); \
public: \
	DECLARE_CLASS(UTankAimingComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankAimingComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankAimingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankAimingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankAimingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankAimingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankAimingComponent(UTankAimingComponent&&); \
	NO_API UTankAimingComponent(const UTankAimingComponent&); \
public:


#define BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankAimingComponent(UTankAimingComponent&&); \
	NO_API UTankAimingComponent(const UTankAimingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankAimingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankAimingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTankAimingComponent)


#define BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FiringState() { return STRUCT_OFFSET(UTankAimingComponent, FiringState); } \
	FORCEINLINE static uint32 __PPO__ProjectileBlueprint() { return STRUCT_OFFSET(UTankAimingComponent, ProjectileBlueprint); } \
	FORCEINLINE static uint32 __PPO__LaunchSpeed() { return STRUCT_OFFSET(UTankAimingComponent, LaunchSpeed); } \
	FORCEINLINE static uint32 __PPO__ReloadTimeInSeconds() { return STRUCT_OFFSET(UTankAimingComponent, ReloadTimeInSeconds); } \
	FORCEINLINE static uint32 __PPO__RoundsLeft() { return STRUCT_OFFSET(UTankAimingComponent, RoundsLeft); }


#define BattleTank_Source_BattleTank_Public_TankAimingComponent_h_24_PROLOG
#define BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_INCLASS \
	BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankAimingComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_TankAimingComponent_h


#define FOREACH_ENUM_EFIRINGSTATE(op) \
	op(EFiringState::Reloading) \
	op(EFiringState::Aiming) \
	op(EFiringState::Locked) \
	op(EFiringState::OutOfAmmo) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
