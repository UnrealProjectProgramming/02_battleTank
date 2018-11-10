// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLETANK_TankTurret_generated_h
#error "TankTurret.generated.h already included, missing '#pragma once' in TankTurret.h"
#endif
#define BATTLETANK_TankTurret_generated_h

#define BattleTank_Source_BattleTank_Public_TankTurret_h_14_RPC_WRAPPERS
#define BattleTank_Source_BattleTank_Public_TankTurret_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleTank_Source_BattleTank_Public_TankTurret_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankTurret(); \
	friend struct Z_Construct_UClass_UTankTurret_Statics; \
public: \
	DECLARE_CLASS(UTankTurret, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankTurret)


#define BattleTank_Source_BattleTank_Public_TankTurret_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTankTurret(); \
	friend struct Z_Construct_UClass_UTankTurret_Statics; \
public: \
	DECLARE_CLASS(UTankTurret, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankTurret)


#define BattleTank_Source_BattleTank_Public_TankTurret_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankTurret(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankTurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTurret(UTankTurret&&); \
	NO_API UTankTurret(const UTankTurret&); \
public:


#define BattleTank_Source_BattleTank_Public_TankTurret_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankTurret(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTurret(UTankTurret&&); \
	NO_API UTankTurret(const UTankTurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTurret); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankTurret)


#define BattleTank_Source_BattleTank_Public_TankTurret_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxDegreesPerSecond() { return STRUCT_OFFSET(UTankTurret, MaxDegreesPerSecond); }


#define BattleTank_Source_BattleTank_Public_TankTurret_h_11_PROLOG
#define BattleTank_Source_BattleTank_Public_TankTurret_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankTurret_h_14_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankTurret_h_14_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_TankTurret_h_14_INCLASS \
	BattleTank_Source_BattleTank_Public_TankTurret_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_TankTurret_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankTurret_h_14_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankTurret_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankTurret_h_14_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankTurret_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_TankTurret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
