// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeedyInfluence/Public/Cars/CarBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarBase() {}
// Cross Module References
	SPEEDYINFLUENCE_API UClass* Z_Construct_UClass_ACarBase_NoRegister();
	SPEEDYINFLUENCE_API UClass* Z_Construct_UClass_ACarBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpeedyInfluence();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACarBase::StaticRegisterNativesACarBase()
	{
	}
	UClass* Z_Construct_UClass_ACarBase_NoRegister()
	{
		return ACarBase::StaticClass();
	}
	struct Z_Construct_UClass_ACarBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_springArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_springArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_staticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseLookUpAtRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseLookUpAtRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cameraClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_accelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_accelerationMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpeedyInfluence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Cars/CarBase.h" },
		{ "ModuleRelativePath", "Public/Cars/CarBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarBase_Statics::NewProp_springArmComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Add spring arm components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cars/CarBase.h" },
		{ "ToolTip", "Add spring arm components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarBase_Statics::NewProp_springArmComponent = { "springArmComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarBase, springArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarBase_Statics::NewProp_springArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarBase_Statics::NewProp_springArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarBase_Statics::NewProp_cameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Add camera components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cars/CarBase.h" },
		{ "ToolTip", "Add camera components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarBase_Statics::NewProp_cameraComponent = { "cameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarBase, cameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarBase_Statics::NewProp_cameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarBase_Statics::NewProp_cameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarBase_Statics::NewProp_staticMeshComponent_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "//Add camera components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cars/CarBase.h" },
		{ "ToolTip", "Add camera components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarBase_Statics::NewProp_staticMeshComponent = { "staticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarBase, staticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarBase_Statics::NewProp_staticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarBase_Statics::NewProp_staticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarBase_Statics::NewProp_baseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Base turn rate\n" },
		{ "ModuleRelativePath", "Public/Cars/CarBase.h" },
		{ "ToolTip", "Base turn rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarBase_Statics::NewProp_baseTurnRate = { "baseTurnRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarBase, baseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACarBase_Statics::NewProp_baseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarBase_Statics::NewProp_baseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarBase_Statics::NewProp_baseLookUpAtRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Base lookup rate rate\n" },
		{ "ModuleRelativePath", "Public/Cars/CarBase.h" },
		{ "ToolTip", "Base lookup rate rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarBase_Statics::NewProp_baseLookUpAtRate = { "baseLookUpAtRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarBase, baseLookUpAtRate), METADATA_PARAMS(Z_Construct_UClass_ACarBase_Statics::NewProp_baseLookUpAtRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarBase_Statics::NewProp_baseLookUpAtRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarBase_Statics::NewProp_cameraClamp_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Base lookup rate rate\n" },
		{ "ModuleRelativePath", "Public/Cars/CarBase.h" },
		{ "ToolTip", "Base lookup rate rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarBase_Statics::NewProp_cameraClamp = { "cameraClamp", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarBase, cameraClamp), METADATA_PARAMS(Z_Construct_UClass_ACarBase_Statics::NewProp_cameraClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarBase_Statics::NewProp_cameraClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarBase_Statics::NewProp_maxSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//Max speed\n" },
		{ "ModuleRelativePath", "Public/Cars/CarBase.h" },
		{ "ToolTip", "Max speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarBase_Statics::NewProp_maxSpeed = { "maxSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarBase, maxSpeed), METADATA_PARAMS(Z_Construct_UClass_ACarBase_Statics::NewProp_maxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarBase_Statics::NewProp_maxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarBase_Statics::NewProp_accelerationMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//Acceleration\n" },
		{ "ModuleRelativePath", "Public/Cars/CarBase.h" },
		{ "ToolTip", "Acceleration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACarBase_Statics::NewProp_accelerationMultiplier = { "accelerationMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACarBase, accelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_ACarBase_Statics::NewProp_accelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarBase_Statics::NewProp_accelerationMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACarBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarBase_Statics::NewProp_springArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarBase_Statics::NewProp_cameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarBase_Statics::NewProp_staticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarBase_Statics::NewProp_baseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarBase_Statics::NewProp_baseLookUpAtRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarBase_Statics::NewProp_cameraClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarBase_Statics::NewProp_maxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarBase_Statics::NewProp_accelerationMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACarBase_Statics::ClassParams = {
		&ACarBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACarBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACarBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACarBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACarBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarBase, 1205662101);
	template<> SPEEDYINFLUENCE_API UClass* StaticClass<ACarBase>()
	{
		return ACarBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarBase(Z_Construct_UClass_ACarBase, &ACarBase::StaticClass, TEXT("/Script/SpeedyInfluence"), TEXT("ACarBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
