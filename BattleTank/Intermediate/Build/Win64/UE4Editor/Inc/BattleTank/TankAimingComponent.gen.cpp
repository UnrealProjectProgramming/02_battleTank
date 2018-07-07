// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "Public/TankAimingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAimingComponent() {}
// Cross Module References
	BATTLETANK_API UEnum* Z_Construct_UEnum_BattleTank_EFiringState();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAimingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankAimingComponent_Fire();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankAimingComponent_Initialise();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BATTLETANK_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	static UEnum* EFiringState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BattleTank_EFiringState, Z_Construct_UPackage__Script_BattleTank(), TEXT("EFiringState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFiringState(EFiringState_StaticEnum, TEXT("/Script/BattleTank"), TEXT("EFiringState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BattleTank_EFiringState_CRC() { return 2352962111U; }
	UEnum* Z_Construct_UEnum_BattleTank_EFiringState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BattleTank();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFiringState"), 0, Get_Z_Construct_UEnum_BattleTank_EFiringState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFiringState::Reloading", (int64)EFiringState::Reloading },
				{ "EFiringState::Aiming", (int64)EFiringState::Aiming },
				{ "EFiringState::Locked", (int64)EFiringState::Locked },
				{ "EFiringState::OutOfAmmo", (int64)EFiringState::OutOfAmmo },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
				{ "ToolTip", "Enum for aiming state" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BattleTank,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFiringState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFiringState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTankAimingComponent::StaticRegisterNativesUTankAimingComponent()
	{
		UClass* Class = UTankAimingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &UTankAimingComponent::execFire },
			{ "GetRoundsLeft", &UTankAimingComponent::execGetRoundsLeft },
			{ "Initialise", &UTankAimingComponent::execInitialise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAimingComponent, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft()
	{
		struct TankAimingComponent_eventGetRoundsLeft_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TankAimingComponent_eventGetRoundsLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAimingComponent, "GetRoundsLeft", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(TankAimingComponent_eventGetRoundsLeft_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_Initialise()
	{
		struct TankAimingComponent_eventInitialise_Parms
		{
			UTankBarrel* BarrelToSet;
			UTankTurret* TurretToSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretToSet = { UE4CodeGen_Private::EPropertyClass::Object, "TurretToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankAimingComponent_eventInitialise_Parms, TurretToSet), Z_Construct_UClass_UTankTurret_NoRegister, METADATA_PARAMS(NewProp_TurretToSet_MetaData, ARRAY_COUNT(NewProp_TurretToSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrelToSet = { UE4CodeGen_Private::EPropertyClass::Object, "BarrelToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankAimingComponent_eventInitialise_Parms, BarrelToSet), Z_Construct_UClass_UTankBarrel_NoRegister, METADATA_PARAMS(NewProp_BarrelToSet_MetaData, ARRAY_COUNT(NewProp_BarrelToSet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TurretToSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BarrelToSet,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAimingComponent, "Initialise", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TankAimingComponent_eventInitialise_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister()
	{
		return UTankAimingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankAimingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTankAimingComponent_Fire, "Fire" }, // 3017060535
				{ &Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft, "GetRoundsLeft" }, // 1764003453
				{ &Z_Construct_UFunction_UTankAimingComponent_Initialise, "Initialise" }, // 2827243007
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "TankAimingComponent.h" },
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
				{ "ToolTip", "Holds barrel's properties and Elevate method" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundsLeft_MetaData[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoundsLeft = { UE4CodeGen_Private::EPropertyClass::Int, "RoundsLeft", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, RoundsLeft), METADATA_PARAMS(NewProp_RoundsLeft_MetaData, ARRAY_COUNT(NewProp_RoundsLeft_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTimeInSeconds_MetaData[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTimeInSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "ReloadTimeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, ReloadTimeInSeconds), METADATA_PARAMS(NewProp_ReloadTimeInSeconds_MetaData, ARRAY_COUNT(NewProp_ReloadTimeInSeconds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[] = {
				{ "Category", "Firing" },
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "LaunchSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, LaunchSpeed), METADATA_PARAMS(NewProp_LaunchSpeed_MetaData, ARRAY_COUNT(NewProp_LaunchSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileBlueprint_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileBlueprint = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000010001, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, ProjectileBlueprint), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileBlueprint_MetaData, ARRAY_COUNT(NewProp_ProjectileBlueprint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringState_MetaData[] = {
				{ "Category", "State" },
				{ "ModuleRelativePath", "Public/TankAimingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FiringState = { UE4CodeGen_Private::EPropertyClass::Enum, "FiringState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UTankAimingComponent, FiringState), Z_Construct_UEnum_BattleTank_EFiringState, METADATA_PARAMS(NewProp_FiringState_MetaData, ARRAY_COUNT(NewProp_FiringState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FiringState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RoundsLeft,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReloadTimeInSeconds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaunchSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileBlueprint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FiringState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FiringState_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTankAimingComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTankAimingComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankAimingComponent, 1109339666);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAimingComponent(Z_Construct_UClass_UTankAimingComponent, &UTankAimingComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankAimingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAimingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
