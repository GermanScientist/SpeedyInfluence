// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeedyInfluence/SpeedyInfluenceGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedyInfluenceGameModeBase() {}
// Cross Module References
	SPEEDYINFLUENCE_API UClass* Z_Construct_UClass_ASpeedyInfluenceGameModeBase_NoRegister();
	SPEEDYINFLUENCE_API UClass* Z_Construct_UClass_ASpeedyInfluenceGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpeedyInfluence();
// End Cross Module References
	void ASpeedyInfluenceGameModeBase::StaticRegisterNativesASpeedyInfluenceGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASpeedyInfluenceGameModeBase_NoRegister()
	{
		return ASpeedyInfluenceGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpeedyInfluenceGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpeedyInfluenceGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpeedyInfluence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeedyInfluenceGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpeedyInfluenceGameModeBase.h" },
		{ "ModuleRelativePath", "SpeedyInfluenceGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpeedyInfluenceGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeedyInfluenceGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpeedyInfluenceGameModeBase_Statics::ClassParams = {
		&ASpeedyInfluenceGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpeedyInfluenceGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedyInfluenceGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpeedyInfluenceGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpeedyInfluenceGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpeedyInfluenceGameModeBase, 3806721309);
	template<> SPEEDYINFLUENCE_API UClass* StaticClass<ASpeedyInfluenceGameModeBase>()
	{
		return ASpeedyInfluenceGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpeedyInfluenceGameModeBase(Z_Construct_UClass_ASpeedyInfluenceGameModeBase, &ASpeedyInfluenceGameModeBase::StaticClass, TEXT("/Script/SpeedyInfluence"), TEXT("ASpeedyInfluenceGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeedyInfluenceGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
