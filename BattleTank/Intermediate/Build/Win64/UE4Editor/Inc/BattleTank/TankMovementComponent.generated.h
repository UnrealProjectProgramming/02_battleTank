// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTankTrack;
#ifdef BATTLETANK_TankMovementComponent_generated_h
#error "TankMovementComponent.generated.h already included, missing '#pragma once' in TankMovementComponent.h"
#endif
#define BATTLETANK_TankMovementComponent_generated_h

#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIntendTurnRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendTurnRight(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntendMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendMoveForward(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UTankTrack,Z_Param_LeftTrackToSet); \
		P_GET_OBJECT(UTankTrack,Z_Param_RightTrackToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_LeftTrackToSet,Z_Param_RightTrackToSet); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIntendTurnRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendTurnRight(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntendMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntendMoveForward(Z_Param_Throw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialise) \
	{ \
		P_GET_OBJECT(UTankTrack,Z_Param_LeftTrackToSet); \
		P_GET_OBJECT(UTankTrack,Z_Param_RightTrackToSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialise(Z_Param_LeftTrackToSet,Z_Param_RightTrackToSet); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankMovementComponent(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_UTankMovementComponent(); \
public: \
	DECLARE_CLASS(UTankMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTankMovementComponent(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_UTankMovementComponent(); \
public: \
	DECLARE_CLASS(UTankMovementComponent, UNavMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankMovementComponent(UTankMovementComponent&&); \
	NO_API UTankMovementComponent(const UTankMovementComponent&); \
public:


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankMovementComponent(UTankMovementComponent&&); \
	NO_API UTankMovementComponent(const UTankMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankMovementComponent)


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_13_PROLOG
#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_INCLASS \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankMovementComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_TankMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
