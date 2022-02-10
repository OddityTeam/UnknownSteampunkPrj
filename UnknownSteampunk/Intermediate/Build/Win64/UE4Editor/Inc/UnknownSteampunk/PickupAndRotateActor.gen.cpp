// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnknownSteampunk/PickupAndRotateActor/PickupAndRotateActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupAndRotateActor() {}
// Cross Module References
	UNKNOWNSTEAMPUNK_API UClass* Z_Construct_UClass_APickupAndRotateActor_NoRegister();
	UNKNOWNSTEAMPUNK_API UClass* Z_Construct_UClass_APickupAndRotateActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnknownSteampunk();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void APickupAndRotateActor::StaticRegisterNativesAPickupAndRotateActor()
	{
	}
	UClass* Z_Construct_UClass_APickupAndRotateActor_NoRegister()
	{
		return APickupAndRotateActor::StaticClass();
	}
	struct Z_Construct_UClass_APickupAndRotateActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupAndRotateActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnknownSteampunk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupAndRotateActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
		{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_MyMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupAndRotateActor, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_MyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_MyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_HoldingComp_MetaData[] = {
		{ "Category", "PickupAndRotateActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_HoldingComp = { "HoldingComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupAndRotateActor, HoldingComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_HoldingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_HoldingComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupAndRotateActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_MyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_HoldingComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupAndRotateActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupAndRotateActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupAndRotateActor_Statics::ClassParams = {
		&APickupAndRotateActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APickupAndRotateActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupAndRotateActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupAndRotateActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupAndRotateActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupAndRotateActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupAndRotateActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupAndRotateActor, 3687402339);
	template<> UNKNOWNSTEAMPUNK_API UClass* StaticClass<APickupAndRotateActor>()
	{
		return APickupAndRotateActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupAndRotateActor(Z_Construct_UClass_APickupAndRotateActor, &APickupAndRotateActor::StaticClass, TEXT("/Script/UnknownSteampunk"), TEXT("APickupAndRotateActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupAndRotateActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
