// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "Public/TankMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankMovementComponent() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTrack_NoRegister();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight();
// End Cross Module References
	void UTankMovementComponent::StaticRegisterNativesUTankMovementComponent()
	{
		UClass* Class = UTankMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialise", &UTankMovementComponent::execInitialise },
			{ "IntendMoveForward", &UTankMovementComponent::execIntendMoveForward },
			{ "IntendTurnRight", &UTankMovementComponent::execIntendTurnRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise()
	{
		struct TankMovementComponent_eventInitialise_Parms
		{
			UTankTrack* LeftTrackToSet;
			UTankTrack* RightTrackToSet;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightTrackToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightTrackToSet = { UE4CodeGen_Private::EPropertyClass::Object, "RightTrackToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankMovementComponent_eventInitialise_Parms, RightTrackToSet), Z_Construct_UClass_UTankTrack_NoRegister, METADATA_PARAMS(NewProp_RightTrackToSet_MetaData, ARRAY_COUNT(NewProp_RightTrackToSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftTrackToSet_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftTrackToSet = { UE4CodeGen_Private::EPropertyClass::Object, "LeftTrackToSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TankMovementComponent_eventInitialise_Parms, LeftTrackToSet), Z_Construct_UClass_UTankTrack_NoRegister, METADATA_PARAMS(NewProp_LeftTrackToSet_MetaData, ARRAY_COUNT(NewProp_LeftTrackToSet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightTrackToSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftTrackToSet,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/TankMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, "Initialise", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TankMovementComponent_eventInitialise_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward()
	{
		struct TankMovementComponent_eventIntendMoveForward_Parms
		{
			float Throw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throw = { UE4CodeGen_Private::EPropertyClass::Float, "Throw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankMovementComponent_eventIntendMoveForward_Parms, Throw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Throw,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Public/TankMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, "IntendMoveForward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TankMovementComponent_eventIntendMoveForward_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight()
	{
		struct TankMovementComponent_eventIntendTurnRight_Parms
		{
			float Throw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throw = { UE4CodeGen_Private::EPropertyClass::Float, "Throw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankMovementComponent_eventIntendTurnRight_Parms, Throw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Throw,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Public/TankMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, "IntendTurnRight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TankMovementComponent_eventIntendTurnRight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister()
	{
		return UTankMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNavMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTankMovementComponent_Initialise, "Initialise" }, // 3819901720
				{ &Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward, "IntendMoveForward" }, // 3421600454
				{ &Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight, "IntendTurnRight" }, // 732632311
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "TankMovementComponent.h" },
				{ "ModuleRelativePath", "Public/TankMovementComponent.h" },
				{ "ToolTip", "Responsible for driving the tank tracks" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTankMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTankMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankMovementComponent, 2263502310);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankMovementComponent(Z_Construct_UClass_UTankMovementComponent, &UTankMovementComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
