// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "FPSProject.h"
#include "GeneratedCppIncludes.h"
#include "FPSProject.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1FPSProject() {}
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(), "Fire",(Native)&AFPSCharacter::execFire);
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(), "MoveForward",(Native)&AFPSCharacter::execMoveForward);
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(), "MoveRight",(Native)&AFPSCharacter::execMoveRight);
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(), "StartJump",(Native)&AFPSCharacter::execStartJump);
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(), "StopJump",(Native)&AFPSCharacter::execStopJump);
	}
	IMPLEMENT_CLASS(AFPSCharacter, 3215052635);
	void AFPSProjectGameModeBase::StaticRegisterNativesAFPSProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS(AFPSProjectGameModeBase, 559053612);
	void AFPSProjectile::StaticRegisterNativesAFPSProjectile()
	{
	}
	IMPLEMENT_CLASS(AFPSProjectile, 3003397918);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();

	FPSPROJECT_API class UFunction* Z_Construct_UFunction_AFPSCharacter_Fire();
	FPSPROJECT_API class UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward();
	FPSPROJECT_API class UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight();
	FPSPROJECT_API class UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump();
	FPSPROJECT_API class UFunction* Z_Construct_UFunction_AFPSCharacter_StopJump();
	FPSPROJECT_API class UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	FPSPROJECT_API class UClass* Z_Construct_UClass_AFPSCharacter();
	FPSPROJECT_API class UClass* Z_Construct_UClass_AFPSProjectGameModeBase_NoRegister();
	FPSPROJECT_API class UClass* Z_Construct_UClass_AFPSProjectGameModeBase();
	FPSPROJECT_API class UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	FPSPROJECT_API class UClass* Z_Construct_UClass_AFPSProjectile();
	FPSPROJECT_API class UPackage* Z_Construct_UPackage__Script_FPSProject();
	UFunction* Z_Construct_UFunction_AFPSCharacter_Fire()
	{
		UObject* Outer=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward()
	{
		struct FPSCharacter_eventMoveForward_Parms
		{
			float Value;
		};
		UObject* Outer=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveForward"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(FPSCharacter_eventMoveForward_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, FPSCharacter_eventMoveForward_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Moving forward and back"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight()
	{
		struct FPSCharacter_eventMoveRight_Parms
		{
			float Value;
		};
		UObject* Outer=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(FPSCharacter_eventMoveRight_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, FPSCharacter_eventMoveRight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Moving left and right"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump()
	{
		UObject* Outer=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets jump flag when key is pressed."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_StopJump()
	{
		UObject* Outer=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clears jump flag when key is released."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_FPSProject();
			OuterClass = AFPSCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_Fire());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_MoveForward());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_MoveRight());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_StartJump());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_StopJump());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProjectileClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, AFPSCharacter), 0x0014000000010001, Z_Construct_UClass_AFPSProjectile_NoRegister(), UClass::StaticClass());
				UProperty* NewProp_MuzzleOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MuzzleOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MuzzleOffset, AFPSCharacter), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_FPSMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FPSMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FPSMesh, AFPSCharacter), 0x00100000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_FPSCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FPSCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FPSCameraComponent, AFPSCharacter), 0x00100000000a0009, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_Fire(), "Fire"); // 874774978
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_MoveForward(), "MoveForward"); // 564954716
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_MoveRight(), "MoveRight"); // 1954759069
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_StartJump(), "StartJump"); // 4217648784
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFPSCharacter_StopJump(), "StopJump"); // 1356515321
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ToolTip"), TEXT("Projectile class to spawn."));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("ToolTip"), TEXT("Gun muzzle's offset from the camera location."));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_FPSMesh, TEXT("ToolTip"), TEXT("First-person mesh (arms), visible only to the owning player."));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("Category"), TEXT("FPSCharacter"));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_FPSCameraComponent, TEXT("ToolTip"), TEXT("FPS camera."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacter(Z_Construct_UClass_AFPSCharacter, &AFPSCharacter::StaticClass, TEXT("AFPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
	UClass* Z_Construct_UClass_AFPSProjectGameModeBase_NoRegister()
	{
		return AFPSProjectGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSProjectGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_FPSProject();
			OuterClass = AFPSProjectGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSProjectGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPSProjectGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSProjectGameModeBase(Z_Construct_UClass_AFPSProjectGameModeBase, &AFPSProjectGameModeBase::StaticClass, TEXT("AFPSProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSProjectGameModeBase);
	UClass* Z_Construct_UClass_AFPSProjectile_NoRegister()
	{
		return AFPSProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_FPSProject();
			OuterClass = AFPSProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProjectileMovementComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovementComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovementComponent, AFPSProjectile), 0x00100000000a0009, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComponent, AFPSProjectile), 0x00100000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovementComponent, TEXT("ToolTip"), TEXT("Projectile movement component."));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
				MetaData->SetValue(NewProp_CollisionComponent, TEXT("ToolTip"), TEXT("Sphere collision component."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSProjectile(Z_Construct_UClass_AFPSProjectile, &AFPSProjectile::StaticClass, TEXT("AFPSProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSProjectile);
	UPackage* Z_Construct_UPackage__Script_FPSProject()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/FPSProject")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x6F26CF17;
			Guid.B = 0x33050F68;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
