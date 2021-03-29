// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPEEDYINFLUENCE_CarBase_generated_h
#error "CarBase.generated.h already included, missing '#pragma once' in CarBase.h"
#endif
#define SPEEDYINFLUENCE_CarBase_generated_h

#define SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_SPARSE_DATA
#define SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_RPC_WRAPPERS
#define SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarBase(); \
	friend struct Z_Construct_UClass_ACarBase_Statics; \
public: \
	DECLARE_CLASS(ACarBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpeedyInfluence"), NO_API) \
	DECLARE_SERIALIZER(ACarBase)


#define SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACarBase(); \
	friend struct Z_Construct_UClass_ACarBase_Statics; \
public: \
	DECLARE_CLASS(ACarBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpeedyInfluence"), NO_API) \
	DECLARE_SERIALIZER(ACarBase)


#define SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarBase(ACarBase&&); \
	NO_API ACarBase(const ACarBase&); \
public:


#define SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarBase(ACarBase&&); \
	NO_API ACarBase(const ACarBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarBase)


#define SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__baseTurnRate() { return STRUCT_OFFSET(ACarBase, baseTurnRate); } \
	FORCEINLINE static uint32 __PPO__baseLookUpAtRate() { return STRUCT_OFFSET(ACarBase, baseLookUpAtRate); } \
	FORCEINLINE static uint32 __PPO__cameraClamp() { return STRUCT_OFFSET(ACarBase, cameraClamp); } \
	FORCEINLINE static uint32 __PPO__maxSpeed() { return STRUCT_OFFSET(ACarBase, maxSpeed); } \
	FORCEINLINE static uint32 __PPO__accelerationMultiplier() { return STRUCT_OFFSET(ACarBase, accelerationMultiplier); }


#define SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_13_PROLOG
#define SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_PRIVATE_PROPERTY_OFFSET \
	SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_SPARSE_DATA \
	SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_RPC_WRAPPERS \
	SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_INCLASS \
	SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_PRIVATE_PROPERTY_OFFSET \
	SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_SPARSE_DATA \
	SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_INCLASS_NO_PURE_DECLS \
	SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPEEDYINFLUENCE_API UClass* StaticClass<class ACarBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpeedyInfluence_Source_SpeedyInfluence_Public_Cars_CarBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
