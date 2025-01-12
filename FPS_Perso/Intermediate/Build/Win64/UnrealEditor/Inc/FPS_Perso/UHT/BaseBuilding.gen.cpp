// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_Perso/BaseBuilding.h"
#include "Runtime/Engine/Public/Physics/Experimental/ChaosEventType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBuilding() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakEvent();
FPS_PERSO_API UClass* Z_Construct_UClass_ABaseBuilding();
FPS_PERSO_API UClass* Z_Construct_UClass_ABaseBuilding_NoRegister();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPS_Perso();
// End Cross Module References

// Begin Class ABaseBuilding Function HandleBreakEvent
struct Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics
{
	struct BaseBuilding_eventHandleBreakEvent_Parms
	{
		FChaosBreakEvent BreakEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BreakEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics::NewProp_BreakEvent = { "BreakEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseBuilding_eventHandleBreakEvent_Parms, BreakEvent), Z_Construct_UScriptStruct_FChaosBreakEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakEvent_MetaData), NewProp_BreakEvent_MetaData) }; // 1524158577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics::NewProp_BreakEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBuilding, nullptr, "HandleBreakEvent", nullptr, nullptr, Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics::BaseBuilding_eventHandleBreakEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics::BaseBuilding_eventHandleBreakEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseBuilding::execHandleBreakEvent)
{
	P_GET_STRUCT_REF(FChaosBreakEvent,Z_Param_Out_BreakEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBreakEvent(Z_Param_Out_BreakEvent);
	P_NATIVE_END;
}
// End Class ABaseBuilding Function HandleBreakEvent

// Begin Class ABaseBuilding Function IsDestructionInAnchor
struct BaseBuilding_eventIsDestructionInAnchor_Parms
{
	USceneComponent* CurrentAnchor;
	FVector BreakLocation;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	BaseBuilding_eventIsDestructionInAnchor_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_ABaseBuilding_IsDestructionInAnchor = FName(TEXT("IsDestructionInAnchor"));
bool ABaseBuilding::IsDestructionInAnchor(USceneComponent* CurrentAnchor, FVector BreakLocation)
{
	BaseBuilding_eventIsDestructionInAnchor_Parms Parms;
	Parms.CurrentAnchor=CurrentAnchor;
	Parms.BreakLocation=BreakLocation;
	ProcessEvent(FindFunctionChecked(NAME_ABaseBuilding_IsDestructionInAnchor),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAnchor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAnchor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BreakLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::NewProp_CurrentAnchor = { "CurrentAnchor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseBuilding_eventIsDestructionInAnchor_Parms, CurrentAnchor), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAnchor_MetaData), NewProp_CurrentAnchor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::NewProp_BreakLocation = { "BreakLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseBuilding_eventIsDestructionInAnchor_Parms, BreakLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseBuilding_eventIsDestructionInAnchor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseBuilding_eventIsDestructionInAnchor_Parms), &Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::NewProp_CurrentAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::NewProp_BreakLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBuilding, nullptr, "IsDestructionInAnchor", nullptr, nullptr, Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::PropPointers), sizeof(BaseBuilding_eventIsDestructionInAnchor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseBuilding_eventIsDestructionInAnchor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseBuilding::execIsDestructionInAnchor)
{
	P_GET_OBJECT(USceneComponent,Z_Param_CurrentAnchor);
	P_GET_STRUCT(FVector,Z_Param_BreakLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDestructionInAnchor_Implementation(Z_Param_CurrentAnchor,Z_Param_BreakLocation);
	P_NATIVE_END;
}
// End Class ABaseBuilding Function IsDestructionInAnchor

// Begin Class ABaseBuilding Function TriggerField
struct BaseBuilding_eventTriggerField_Parms
{
	USceneComponent* CurrentAnchor;
};
static FName NAME_ABaseBuilding_TriggerField = FName(TEXT("TriggerField"));
void ABaseBuilding::TriggerField(USceneComponent* CurrentAnchor)
{
	BaseBuilding_eventTriggerField_Parms Parms;
	Parms.CurrentAnchor=CurrentAnchor;
	ProcessEvent(FindFunctionChecked(NAME_ABaseBuilding_TriggerField),&Parms);
}
struct Z_Construct_UFunction_ABaseBuilding_TriggerField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAnchor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAnchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseBuilding_TriggerField_Statics::NewProp_CurrentAnchor = { "CurrentAnchor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseBuilding_eventTriggerField_Parms, CurrentAnchor), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAnchor_MetaData), NewProp_CurrentAnchor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseBuilding_TriggerField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBuilding_TriggerField_Statics::NewProp_CurrentAnchor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_TriggerField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBuilding_TriggerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBuilding, nullptr, "TriggerField", nullptr, nullptr, Z_Construct_UFunction_ABaseBuilding_TriggerField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_TriggerField_Statics::PropPointers), sizeof(BaseBuilding_eventTriggerField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_TriggerField_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseBuilding_TriggerField_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseBuilding_eventTriggerField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseBuilding_TriggerField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBuilding_TriggerField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseBuilding::execTriggerField)
{
	P_GET_OBJECT(USceneComponent,Z_Param_CurrentAnchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerField_Implementation(Z_Param_CurrentAnchor);
	P_NATIVE_END;
}
// End Class ABaseBuilding Function TriggerField

// Begin Class ABaseBuilding
void ABaseBuilding::StaticRegisterNativesABaseBuilding()
{
	UClass* Class = ABaseBuilding::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleBreakEvent", &ABaseBuilding::execHandleBreakEvent },
		{ "IsDestructionInAnchor", &ABaseBuilding::execIsDestructionInAnchor },
		{ "TriggerField", &ABaseBuilding::execTriggerField },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseBuilding);
UClass* Z_Construct_UClass_ABaseBuilding_NoRegister()
{
	return ABaseBuilding::StaticClass();
}
struct Z_Construct_UClass_ABaseBuilding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseBuilding.h" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anchor_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterField_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDestruction_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Building;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fields;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterField;
	static void NewProp_PlayerDestruction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayerDestruction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseBuilding_HandleBreakEvent, "HandleBreakEvent" }, // 1372812720
		{ &Z_Construct_UFunction_ABaseBuilding_IsDestructionInAnchor, "IsDestructionInAnchor" }, // 4046006525
		{ &Z_Construct_UFunction_ABaseBuilding_TriggerField, "TriggerField" }, // 896432868
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseBuilding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBuilding, Building), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Building_MetaData), NewProp_Building_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBuilding, Fields), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fields_MetaData), NewProp_Fields_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBuilding, Anchor), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anchor_MetaData), NewProp_Anchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_MasterField = { "MasterField", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBuilding, MasterField), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterField_MetaData), NewProp_MasterField_MetaData) };
void Z_Construct_UClass_ABaseBuilding_Statics::NewProp_PlayerDestruction_SetBit(void* Obj)
{
	((ABaseBuilding*)Obj)->PlayerDestruction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_PlayerDestruction = { "PlayerDestruction", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseBuilding), &Z_Construct_UClass_ABaseBuilding_Statics::NewProp_PlayerDestruction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerDestruction_MetaData), NewProp_PlayerDestruction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseBuilding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Building,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Fields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_MasterField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_PlayerDestruction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseBuilding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPS_Perso,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseBuilding_Statics::ClassParams = {
	&ABaseBuilding::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseBuilding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseBuilding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseBuilding()
{
	if (!Z_Registration_Info_UClass_ABaseBuilding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseBuilding.OuterSingleton, Z_Construct_UClass_ABaseBuilding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseBuilding.OuterSingleton;
}
template<> FPS_PERSO_API UClass* StaticClass<ABaseBuilding>()
{
	return ABaseBuilding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseBuilding);
ABaseBuilding::~ABaseBuilding() {}
// End Class ABaseBuilding

// Begin Registration
struct Z_CompiledInDeferFile_FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseBuilding, ABaseBuilding::StaticClass, TEXT("ABaseBuilding"), &Z_Registration_Info_UClass_ABaseBuilding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseBuilding), 3985160392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_2788041820(TEXT("/Script/FPS_Perso"),
	Z_CompiledInDeferFile_FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_Perso_Source_FPS_Perso_BaseBuilding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
