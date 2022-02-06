// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnknownSteampunk/UnknownSteampunkGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnknownSteampunkGameMode() {}
// Cross Module References
	UNKNOWNSTEAMPUNK_API UClass* Z_Construct_UClass_AUnknownSteampunkGameMode_NoRegister();
	UNKNOWNSTEAMPUNK_API UClass* Z_Construct_UClass_AUnknownSteampunkGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnknownSteampunk();
// End Cross Module References
	void AUnknownSteampunkGameMode::StaticRegisterNativesAUnknownSteampunkGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnknownSteampunkGameMode_NoRegister()
	{
		return AUnknownSteampunkGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnknownSteampunkGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnknownSteampunkGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnknownSteampunk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnknownSteampunkGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The GameMode defines the game being played. It governs the game rules, scoring, what actors\n * are allowed to exist in this game type, and who may enter the game.\n *\n * This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of UnknownSteampunkCharacter\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnknownSteampunkGameMode.h" },
		{ "ModuleRelativePath", "UnknownSteampunkGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of UnknownSteampunkCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnknownSteampunkGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnknownSteampunkGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnknownSteampunkGameMode_Statics::ClassParams = {
		&AUnknownSteampunkGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnknownSteampunkGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnknownSteampunkGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnknownSteampunkGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnknownSteampunkGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnknownSteampunkGameMode, 2597925308);
	template<> UNKNOWNSTEAMPUNK_API UClass* StaticClass<AUnknownSteampunkGameMode>()
	{
		return AUnknownSteampunkGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnknownSteampunkGameMode(Z_Construct_UClass_AUnknownSteampunkGameMode, &AUnknownSteampunkGameMode::StaticClass, TEXT("/Script/UnknownSteampunk"), TEXT("AUnknownSteampunkGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnknownSteampunkGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
