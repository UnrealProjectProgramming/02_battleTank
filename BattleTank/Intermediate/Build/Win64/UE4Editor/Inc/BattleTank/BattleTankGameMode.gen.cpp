// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/BattleTankGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleTankGameMode() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ABattleTankGameMode_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ABattleTankGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void ABattleTankGameMode::StaticRegisterNativesABattleTankGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABattleTankGameMode_NoRegister()
	{
		return ABattleTankGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABattleTankGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleTankGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleTankGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BattleTankGameMode.h" },
		{ "ModuleRelativePath", "BattleTankGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleTankGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleTankGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleTankGameMode_Statics::ClassParams = {
		&ABattleTankGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABattleTankGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABattleTankGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattleTankGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattleTankGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleTankGameMode, 1729165561);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleTankGameMode(Z_Construct_UClass_ABattleTankGameMode, &ABattleTankGameMode::StaticClass, TEXT("/Script/BattleTank"), TEXT("ABattleTankGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleTankGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
