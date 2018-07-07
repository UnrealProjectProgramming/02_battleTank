// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "Public/TankPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPlayerController() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ATankPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UFunction* Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
	BATTLETANK_API UFunction* Z_Construct_UFunction_ATankPlayerController_OnPossedTankDeath();
// End Cross Module References
	static FName NAME_ATankPlayerController_FoundAimingComponent = FName(TEXT("FoundAimingComponent"));
	void ATankPlayerController::FoundAimingComponent(UTankAimingComponent* AimCompRef)
	{
		TankPlayerController_eventFoundAimingComponent_Parms Parms;
		Parms.AimCompRef=AimCompRef;
		ProcessEvent(FindFunctionChecked(NAME_ATankPlayerController_FoundAimingComponent),&Parms);
	}
	void ATankPlayerController::StaticRegisterNativesATankPlayerController()
	{
		UClass* Class = ATankPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPossedTankDeath", &ATankPlayerController::execOnPossedTankDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimCompRef_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimCompRef = { UE4CodeGen_Private::EPropertyClass::Object, "AimCompRef", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankPlayerController_eventFoundAimingComponent_Parms, AimCompRef), Z_Construct_UClass_UTankAimingComponent_NoRegister, METADATA_PARAMS(NewProp_AimCompRef_MetaData, ARRAY_COUNT(NewProp_AimCompRef_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AimCompRef,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/TankPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPlayerController, "FoundAimingComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(TankPlayerController_eventFoundAimingComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATankPlayerController_OnPossedTankDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/TankPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPlayerController, "OnPossedTankDeath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankPlayerController_NoRegister()
	{
		return ATankPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ATankPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent, "FoundAimingComponent" }, // 397828468
				{ &Z_Construct_UFunction_ATankPlayerController_OnPossedTankDeath, "OnPossedTankDeath" }, // 3352204379
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TankPlayerController.h" },
				{ "ModuleRelativePath", "Public/TankPlayerController.h" },
				{ "ToolTip", "Responsible for helping the player aim." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTraceRange_MetaData[] = {
				{ "Category", "TankPlayerController" },
				{ "ModuleRelativePath", "Public/TankPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineTraceRange = { UE4CodeGen_Private::EPropertyClass::Float, "LineTraceRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(ATankPlayerController, LineTraceRange), METADATA_PARAMS(NewProp_LineTraceRange_MetaData, ARRAY_COUNT(NewProp_LineTraceRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairYLocation_MetaData[] = {
				{ "Category", "TankPlayerController" },
				{ "ModuleRelativePath", "Public/TankPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairYLocation = { UE4CodeGen_Private::EPropertyClass::Float, "CrosshairYLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(ATankPlayerController, CrosshairYLocation), METADATA_PARAMS(NewProp_CrosshairYLocation_MetaData, ARRAY_COUNT(NewProp_CrosshairYLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairXLocation_MetaData[] = {
				{ "Category", "TankPlayerController" },
				{ "ModuleRelativePath", "Public/TankPlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairXLocation = { UE4CodeGen_Private::EPropertyClass::Float, "CrosshairXLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(ATankPlayerController, CrosshairXLocation), METADATA_PARAMS(NewProp_CrosshairXLocation_MetaData, ARRAY_COUNT(NewProp_CrosshairXLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineTraceRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrosshairYLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CrosshairXLocation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATankPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATankPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankPlayerController, 3134217563);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPlayerController(Z_Construct_UClass_ATankPlayerController, &ATankPlayerController::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif