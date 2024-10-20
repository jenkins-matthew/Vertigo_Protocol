// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vertigo_Protocol/Vertigo_ProtocolHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertigo_ProtocolHUD() {}
// Cross Module References
	VERTIGO_PROTOCOL_API UClass* Z_Construct_UClass_AVertigo_ProtocolHUD_NoRegister();
	VERTIGO_PROTOCOL_API UClass* Z_Construct_UClass_AVertigo_ProtocolHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Vertigo_Protocol();
// End Cross Module References
	void AVertigo_ProtocolHUD::StaticRegisterNativesAVertigo_ProtocolHUD()
	{
	}
	UClass* Z_Construct_UClass_AVertigo_ProtocolHUD_NoRegister()
	{
		return AVertigo_ProtocolHUD::StaticClass();
	}
	struct Z_Construct_UClass_AVertigo_ProtocolHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVertigo_ProtocolHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Vertigo_Protocol,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVertigo_ProtocolHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Vertigo_ProtocolHUD.h" },
		{ "ModuleRelativePath", "Vertigo_ProtocolHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVertigo_ProtocolHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVertigo_ProtocolHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVertigo_ProtocolHUD_Statics::ClassParams = {
		&AVertigo_ProtocolHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVertigo_ProtocolHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVertigo_ProtocolHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVertigo_ProtocolHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVertigo_ProtocolHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVertigo_ProtocolHUD, 105117623);
	template<> VERTIGO_PROTOCOL_API UClass* StaticClass<AVertigo_ProtocolHUD>()
	{
		return AVertigo_ProtocolHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVertigo_ProtocolHUD(Z_Construct_UClass_AVertigo_ProtocolHUD, &AVertigo_ProtocolHUD::StaticClass, TEXT("/Script/Vertigo_Protocol"), TEXT("AVertigo_ProtocolHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVertigo_ProtocolHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
