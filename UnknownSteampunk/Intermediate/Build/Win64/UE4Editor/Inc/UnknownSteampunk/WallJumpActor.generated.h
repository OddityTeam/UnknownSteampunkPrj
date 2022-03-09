// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UNKNOWNSTEAMPUNK_WallJumpActor_generated_h
#error "WallJumpActor.generated.h already included, missing '#pragma once' in WallJumpActor.h"
#endif
#define UNKNOWNSTEAMPUNK_WallJumpActor_generated_h

#define UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_SPARSE_DATA
#define UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompHit);


#define UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompHit);


#define UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWallJumpActor(); \
	friend struct Z_Construct_UClass_AWallJumpActor_Statics; \
public: \
	DECLARE_CLASS(AWallJumpActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnknownSteampunk"), NO_API) \
	DECLARE_SERIALIZER(AWallJumpActor)


#define UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAWallJumpActor(); \
	friend struct Z_Construct_UClass_AWallJumpActor_Statics; \
public: \
	DECLARE_CLASS(AWallJumpActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnknownSteampunk"), NO_API) \
	DECLARE_SERIALIZER(AWallJumpActor)


#define UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWallJumpActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWallJumpActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWallJumpActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWallJumpActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWallJumpActor(AWallJumpActor&&); \
	NO_API AWallJumpActor(const AWallJumpActor&); \
public:


#define UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWallJumpActor(AWallJumpActor&&); \
	NO_API AWallJumpActor(const AWallJumpActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWallJumpActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWallJumpActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWallJumpActor)


#define UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyMesh() { return STRUCT_OFFSET(AWallJumpActor, MyMesh); } \
	FORCEINLINE static uint32 __PPO__HoldingComp() { return STRUCT_OFFSET(AWallJumpActor, HoldingComp); } \
	FORCEINLINE static uint32 __PPO__FForce() { return STRUCT_OFFSET(AWallJumpActor, FForce); } \
	FORCEINLINE static uint32 __PPO__FZAxisScale() { return STRUCT_OFFSET(AWallJumpActor, FZAxisScale); } \
	FORCEINLINE static uint32 __PPO__FYAxisScale() { return STRUCT_OFFSET(AWallJumpActor, FYAxisScale); }


#define UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_14_PROLOG
#define UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_PRIVATE_PROPERTY_OFFSET \
	UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_SPARSE_DATA \
	UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_RPC_WRAPPERS \
	UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_INCLASS \
	UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_PRIVATE_PROPERTY_OFFSET \
	UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_SPARSE_DATA \
	UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_INCLASS_NO_PURE_DECLS \
	UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNKNOWNSTEAMPUNK_API UClass* StaticClass<class AWallJumpActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnknownSteampunk_Source_UnknownSteampunk_WallJumpActor_WallJumpActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
