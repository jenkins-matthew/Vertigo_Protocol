// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vertigo_Protocol/Vertigo_ProtocolGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertigo_ProtocolGameMode() {}
// Cross Module References
	VERTIGO_PROTOCOL_API UClass* Z_Construct_UClass_AVertigo_ProtocolGameMode_NoRegister();
	VERTIGO_PROTOCOL_API UClass* Z_Construct_UClass_AVertigo_ProtocolGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Vertigo_Protocol();
// End Cross Module References
	void AVertigo_ProtocolGameMode::StaticRegisterNativesAVertigo_ProtocolGameMode()
	{
	}
	UClass* Z_Construct_UClass_AVertigo_ProtocolGameMode_NoRegister()
	{
		return AVertigo_ProtocolGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AVertigo_ProtocolGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVertigo_ProtocolGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Vertigo_Protocol,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVertigo_ProtocolGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Vertigo_ProtocolGameMode.h" },
		{ "ModuleRelativePath", "Vertigo_ProtocolGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVertigo_ProtocolGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVertigo_ProtocolGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVertigo_ProtocolGameMode_Statics::ClassParams = {
		&AVertigo_ProtocolGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVertigo_ProtocolGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVertigo_ProtocolGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVertigo_ProtocolGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVertigo_ProtocolGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVertigo_ProtocolGameMode, 2598198877);
	template<> VERTIGO_PROTOCOL_API UClass* StaticClass<AVertigo_ProtocolGameMode>()
	{
		return AVertigo_ProtocolGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVertigo_ProtocolGameMode(Z_Construct_UClass_AVertigo_ProtocolGameMode, &AVertigo_ProtocolGameMode::StaticClass, TEXT("/Script/Vertigo_Protocol"), TEXT("AVertigo_ProtocolGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVertigo_ProtocolGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
