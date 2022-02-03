// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnknownSteampunk/UnknownSteampunkCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnknownSteampunkCharacter() {}
// Cross Module References
	UNKNOWNSTEAMPUNK_API UClass* Z_Construct_UClass_AUnknownSteampunkCharacter_NoRegister();
	UNKNOWNSTEAMPUNK_API UClass* Z_Construct_UClass_AUnknownSteampunkCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnknownSteampunk();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void AUnknownSteampunkCharacter::StaticRegisterNativesAUnknownSteampunkCharacter()
	{
	}
	UClass* Z_Construct_UClass_AUnknownSteampunkCharacter_NoRegister()
	{
		return AUnknownSteampunkCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUnknownSteampunkCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoaringAudioBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoaringAudioBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoaringAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoaringAudioComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnknownSteampunk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnknownSteampunkCharacter.h" },
		{ "ModuleRelativePath", "UnknownSteampunkCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Side view camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnknownSteampunkCharacter.h" },
		{ "ToolTip", "Side view camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SideViewCameraComponent = { "SideViewCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnknownSteampunkCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SideViewCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SideViewCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera beside the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnknownSteampunkCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera beside the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnknownSteampunkCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Soaring" },
		{ "ModuleRelativePath", "UnknownSteampunkCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnknownSteampunkCharacter, Gravity), METADATA_PARAMS(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SoaringAudioBase_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "UnknownSteampunkCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SoaringAudioBase = { "SoaringAudioBase", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnknownSteampunkCharacter, SoaringAudioBase), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SoaringAudioBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SoaringAudioBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SoaringAudioComponent_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnknownSteampunkCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SoaringAudioComponent = { "SoaringAudioComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnknownSteampunkCharacter, SoaringAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SoaringAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SoaringAudioComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SideViewCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SoaringAudioBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::NewProp_SoaringAudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnknownSteampunkCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::ClassParams = {
		&AUnknownSteampunkCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnknownSteampunkCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnknownSteampunkCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnknownSteampunkCharacter, 86755040);
	template<> UNKNOWNSTEAMPUNK_API UClass* StaticClass<AUnknownSteampunkCharacter>()
	{
		return AUnknownSteampunkCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnknownSteampunkCharacter(Z_Construct_UClass_AUnknownSteampunkCharacter, &AUnknownSteampunkCharacter::StaticClass, TEXT("/Script/UnknownSteampunk"), TEXT("AUnknownSteampunkCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnknownSteampunkCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
