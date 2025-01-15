// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseBuilding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
struct FChaosBreakEvent;
#ifdef FPS_PERSO_BaseBuilding_generated_h
#error "BaseBuilding.generated.h already included, missing '#pragma once' in BaseBuilding.h"
#endif
#define FPS_PERSO_BaseBuilding_generated_h

#define FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSupportedStructure_Statics; \
	FPS_PERSO_API static class UScriptStruct* StaticStruct();


template<> FPS_PERSO_API UScriptStruct* StaticStruct<struct FSupportedStructure>();

#define FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TriggerField_Implementation(AActor* DestructionField); \
	virtual bool IsDestructionInAnchor_Implementation(USceneComponent* CurrentAnchor, FVector BreakLocation); \
	DECLARE_FUNCTION(execTriggerField); \
	DECLARE_FUNCTION(execIsDestructionInAnchor); \
	DECLARE_FUNCTION(execHandleBreakEvent);


#define FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_30_CALLBACK_WRAPPERS
#define FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseBuilding(); \
	friend struct Z_Construct_UClass_ABaseBuilding_Statics; \
public: \
	DECLARE_CLASS(ABaseBuilding, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_Perso"), NO_API) \
	DECLARE_SERIALIZER(ABaseBuilding)


#define FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseBuilding(ABaseBuilding&&); \
	ABaseBuilding(const ABaseBuilding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBuilding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBuilding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseBuilding) \
	NO_API virtual ~ABaseBuilding();


#define FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_27_PROLOG
#define FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_30_CALLBACK_WRAPPERS \
	FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_30_INCLASS_NO_PURE_DECLS \
	FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_PERSO_API UClass* StaticClass<class ABaseBuilding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
