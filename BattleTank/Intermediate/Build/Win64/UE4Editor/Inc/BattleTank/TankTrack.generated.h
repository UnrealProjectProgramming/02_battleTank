// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BATTLETANK_TankTrack_generated_h
#error "TankTrack.generated.h already included, missing '#pragma once' in TankTrack.h"
#endif
#define BATTLETANK_TankTrack_generated_h

#define BattleTank_Source_BattleTank_Public_TankTrack_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThrottle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throttle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThrottle(Z_Param_Throttle); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_TankTrack_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThrottle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throttle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThrottle(Z_Param_Throttle); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_TankTrack_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankTrack(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_UTankTrack(); \
public: \
	DECLARE_CLASS(UTankTrack, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankTrack) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_TankTrack_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTankTrack(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_UTankTrack(); \
public: \
	DECLARE_CLASS(UTankTrack, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(UTankTrack) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_TankTrack_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankTrack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTrack(UTankTrack&&); \
	NO_API UTankTrack(const UTankTrack&); \
public:


#define BattleTank_Source_BattleTank_Public_TankTrack_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTrack(UTankTrack&&); \
	NO_API UTankTrack(const UTankTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTankTrack)


#define BattleTank_Source_BattleTank_Public_TankTrack_h_14_PRIVATE_PROPERTY_OFFSET
#define BattleTank_Source_BattleTank_Public_TankTrack_h_11_PROLOG
#define BattleTank_Source_BattleTank_Public_TankTrack_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankTrack_h_14_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankTrack_h_14_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_TankTrack_h_14_INCLASS \
	BattleTank_Source_BattleTank_Public_TankTrack_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_TankTrack_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankTrack_h_14_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankTrack_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankTrack_h_14_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankTrack_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_TankTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
