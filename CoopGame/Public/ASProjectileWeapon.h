// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "ASProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API AASProjectileWeapon : public ASWeapon
{
	GENERATED_BODY()
	
public:
	AASProjectileWeapon();

protected:

	virtual void BeginPlay() override;

	virtual void Fire() override;

	UPROPERTY(EditDefaultsOnly, Category = "ProjectileWeapon")
	TSubclassOf<AActor> ProjectileClass;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	//TSubclassOf<UDamageType> DamageType;

	//UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	//FName MuzzleSocketName;

	//UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	//FName TracerTargetName;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	//UParticleSystem* MuzzleEffect;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	//UParticleSystem* ImpactEffect;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	//UParticleSystem* TracerEffect;

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	//USkeletalMeshComponent* MeshComp;

};
