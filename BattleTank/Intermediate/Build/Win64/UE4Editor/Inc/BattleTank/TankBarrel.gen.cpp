// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "Public/TankBarrel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankBarrel() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankBarrel();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void UTankBarrel::StaticRegisterNativesUTankBarrel()
	{
	}
	UClass* Z_Construct_UClass_UTankBarrel_NoRegister()
	{
		return UTankBarrel::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankBarrel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "TankBarrel.h" },
				{ "ModuleRelativePath", "Public/TankBarrel.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinElevationDegrees_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/TankBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinElevationDegrees = { UE4CodeGen_Private::EPropertyClass::Float, "MinElevationDegrees", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UTankBarrel, MinElevationDegrees), METADATA_PARAMS(NewProp_MinElevationDegrees_MetaData, ARRAY_COUNT(NewProp_MinElevationDegrees_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxElevationDegrees_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/TankBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxElevationDegrees = { UE4CodeGen_Private::EPropertyClass::Float, "MaxElevationDegrees", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UTankBarrel, MaxElevationDegrees), METADATA_PARAMS(NewProp_MaxElevationDegrees_MetaData, ARRAY_COUNT(NewProp_MaxElevationDegrees_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDegreesPerSecond_MetaData[] = {
				{ "Category", "Setup" },
				{ "ModuleRelativePath", "Public/TankBarrel.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDegreesPerSecond = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDegreesPerSecond", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UTankBarrel, MaxDegreesPerSecond), METADATA_PARAMS(NewProp_MaxDegreesPerSecond_MetaData, ARRAY_COUNT(NewProp_MaxDegreesPerSecond_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinElevationDegrees,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxElevationDegrees,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDegreesPerSecond,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTankBarrel>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTankBarrel::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UTankBarrel, 4135597524);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankBarrel(Z_Construct_UClass_UTankBarrel, &UTankBarrel::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankBarrel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
