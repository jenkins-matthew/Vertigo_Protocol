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
#ifdef VERTIGO_PROTOCOL_Vertigo_ProtocolProjectile_generated_h
#error "Vertigo_ProtocolProjectile.generated.h already included, missing '#pragma once' in Vertigo_ProtocolProjectile.h"
#endif
#define VERTIGO_PROTOCOL_Vertigo_ProtocolProjectile_generated_h

#define Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_SPARSE_DATA
#define Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVertigo_ProtocolProjectile(); \
	friend struct Z_Construct_UClass_AVertigo_ProtocolProjectile_Statics; \
public: \
	DECLARE_CLASS(AVertigo_ProtocolProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vertigo_Protocol"), NO_API) \
	DECLARE_SERIALIZER(AVertigo_ProtocolProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVertigo_ProtocolProjectile(); \
	friend struct Z_Construct_UClass_AVertigo_ProtocolProjectile_Statics; \
public: \
	DECLARE_CLASS(AVertigo_ProtocolProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vertigo_Protocol"), NO_API) \
	DECLARE_SERIALIZER(AVertigo_ProtocolProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVertigo_ProtocolProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVertigo_ProtocolProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVertigo_ProtocolProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVertigo_ProtocolProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVertigo_ProtocolProjectile(AVertigo_ProtocolProjectile&&); \
	NO_API AVertigo_ProtocolProjectile(const AVertigo_ProtocolProjectile&); \
public:


#define Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVertigo_ProtocolProjectile(AVertigo_ProtocolProjectile&&); \
	NO_API AVertigo_ProtocolProjectile(const AVertigo_ProtocolProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVertigo_ProtocolProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVertigo_ProtocolProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVertigo_ProtocolProjectile)


#define Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AVertigo_ProtocolProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AVertigo_ProtocolProjectile, ProjectileMovement); }


#define Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_12_PROLOG
#define Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_SPARSE_DATA \
	Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_RPC_WRAPPERS \
	Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_INCLASS \
	Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_SPARSE_DATA \
	Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERTIGO_PROTOCOL_API UClass* StaticClass<class AVertigo_ProtocolProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Vertigo_Protocol_Source_Vertigo_Protocol_Vertigo_ProtocolProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
