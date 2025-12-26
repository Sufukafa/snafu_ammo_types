////////////////////////////////////////////////////////////////////
//DeRap: data\snafu_ammo\config.bin
//Produced from mikero's Dos Tools Dll version 10.13
//https://mikero.bytex.digital/Downloads
//'now' is Fri Dec 26 16:24:51 2025 : 'file' last modified on Wed Jun 04 21:28:42 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SNAFU_Ammo_Master
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines"};
		magazines[] = {"SNAFU_Ammo_5_7x28mm","SNAFU_Ammo_127x55mm","SNAFU_Ammo_127x55mmAP","SNAFU_Ammo_500_SW","SNAFU_Ammo_45_70mm","SNAFU_Ammo_46x30","GCGN_Ammo_50Cal","SNAFU_Ammo_145Cal","SNAFU_Ammo_300ACC","SNAFU_MD_Ammo_556x45mm_M855A1","SNAFU_Ammo_762x25","SNAFU_Ammo_44","SNAFU_Ammo_338","GCGN_Ammo_408Chey","GCGN_Ammo_762x51","GCGN_Ammo_3006"};
		ammo[] = {"SNAFU_Bullet_5_7x28mm","SNAFU_Bullet_127x55mm","SNAFU_Bullet_127x55mmAP","SNAFU_Bullet_44_Magnum","SNAFU_Bullet_45_70mm","SNAFU_Bullet_46x30","GCGN_Bullet_50Cal","SNAFU_Bullet_145Cal","SNAFU_Bullet_300ACC","SNAFU_Bullet_556x45mm_M855A1","SNAFU_Bullet_762x25","SNAFU_Bullet_44","SNAFU_Bullet_338","GCGN_Bullet_408Chey","GCGN_Bullet_762x51","GCGN_Bullet_3006"};
	};
};
class cfgAmmoTypes
{
	class SNAFUType_Bullet_5_7x28mm
	{
		name = "SNAFU_Bullet_5_7x28mm";
	};
	class SNAFUType_Bullet_127x55mm
	{
		name = "SNAFU_Bullet_127x55mm";
	};
	class SNAFUType_Bullet_127x55mmAP
	{
		name = "SNAFU_Bullet_127x55mmAP";
	};
	class SNAFUType_Bullet_44_Magnum
	{
		name = "SNAFU_Bullet_44_Magnum";
	};
	class SNAFUType_Bullet_45_70mm
	{
		name = "SNAFU_Bullet_45_70mm";
	};
	class SNAFUType_Bullet_46x30
	{
		name = "SNAFU_Bullet_46x30";
	};
	class GCGNType_Bullet_50Cal
	{
		name = "GCGN_Bullet_50Cal";
	};
	class SNAFUType_Bullet_145Cal
	{
		name = "SNAFU_Bullet_145Cal";
	};
	class SNAFUType_Bullet_300ACC
	{
		name = "SNAFU_Bullet_300ACC";
	};
	class Type_SNAFU_Bullet_556x45mm_M855A1
	{
		name = "SNAFU_Bullet_556x45mm_M855A1";
	};
	class Type_SNAFU_Bullet_762x25
	{
		name = "SNAFU_Bullet_762x25";
	};
	class Type_SNAFU_Bullet_44
	{
		name = "SNAFU_Bullet_44";
	};
	class SNAFUType_Bullet_338
	{
		name = "SNAFU_Bullet_338";
	};
	class GCGNType_Bullet_408Chey
	{
		name = "GCGN_Bullet_408Chey";
	};
	class GCGNType_Bullet_762x51
	{
		name = "GCGN_Bullet_762x51";
	};
	class GCGNType_Bullet_3006
	{
		name = "GCGN_Bullet_3006";
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_556x45;
	class SNAFU_Bullet_5_7x28mm: Bullet_Base
	{
		scope = 1;
		spawnPileType = "SNAFU_Ammo_5_7x28mm";
		casing = "FxCartridge_SNAFU_57x28";
		round = "FxRound_SNAFU_57x28";
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 716;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.0023206766;
		caliber = 1.2;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 720;
		weight = 0.0084;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.96,1.0}};
			class Health
			{
				damage = 62;
				armorDamage = 0.3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 66;
			};
		};
		class NoiseHit
		{
			strength = 4;
			type = "shot";
		};
	};
	class SNAFU_Bullet_127x55mm: Bullet_Base
	{
		scope = 1;
		spawnPileType = "SNAFU_Ammo_127x55mm";
		casing = "FxCartridge_SNAFU_127x55";
		round = "FxRound_SNAFU_127x55";
		hit = 13;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 930;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.0023206766;
		caliber = 3;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 930;
		weight = 0.01;
		impactBehaviour = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 350;
				armorDamage = 0.27;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 85;
			};
		};
		class NoiseHit
		{
			strength = 8;
			type = "shot";
		};
	};
	class SNAFU_Bullet_127x55mmAP: SNAFU_Bullet_127x55mm
	{
		scope = 1;
		spawnPileType = "SNAFU_Ammo_127x55mmAP";
		casing = "FxCartridge_SNAFU_127x55";
		round = "FxRound_SNAFU_127x55";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 1250;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.0043206764;
		caliber = 10;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 900;
		weight = 0.04;
		impactBehaviour = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 1050;
				armorDamage = 0.67;
			};
			class Blood
			{
				damage = 200;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class NoiseHit
		{
			strength = 8;
			type = "shot";
		};
	};
	class SNAFU_Bullet_44_Magnum: Bullet_Base
	{
		scope = 1;
		spawnPileType = "SNAFU_Ammo_500_SW";
		casing = "FxCartridge_SNAFU_500";
		round = "FxRound_SNAFU_500";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 1;
		deflecting = 30;
		airFriction = -0.0025;
		typicalSpeed = 670;
		initSpeed = 570;
		weight = 0.0102;
		impactBehaviour = 0;
		hitAnimation = 1;
		unconRefillModifier = 5;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.95000005,1}};
			class Health
			{
				damage = 145;
				armorDamage = 0.1;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 90;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class SNAFU_Bullet_45_70mm: Bullet_Base
	{
		scope = 1;
		spawnPileType = "SNAFU_Ammo_45_70mm";
		cartridge = "FxCartridge_SNAFU_45x70";
		casing = "FxRound_SNAFU_45x70";
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 635;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.0023206766;
		caliber = 0.9;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 635;
		weight = 0.005;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{1.0,1.0}};
			class Health
			{
				damage = 121;
				armorDamage = 0.1;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
		class NoiseHit
		{
			strength = 2;
			type = "shot";
		};
	};
	class SNAFU_Bullet_46x30: Bullet_Base
	{
		scope = 1;
		spawnPileType = "SNAFU_Ammo_46x30";
		casing = "FxCartridge_SNAFU_46x30";
		round = "FxRound_SNAFU_46x30";
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 740;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.00085;
		caliber = 0.9;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 720;
		weight = 0.0168;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{1.0,1.0}};
			class Health
			{
				damage = 52;
				armorDamage = 0.3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
	class GCGN_Bullet_50Cal: Bullet_Base
	{
		scope = 1;
		spawnPileType = "GCGN_Ammo_50Cal";
		casing = "FxCartridge_GCGN_50Ca";
		round = "FxRound_GCGN_50Cal";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 1600;
		typicalSpeed = 1600;
		airFriction = -0.00157;
		caliber = 1.85;
		deflecting = 10;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		nvgOnly = 1;
		damageBarrel = 3;
		damageBarrelDestroyed = 30;
		weight = 0.0071;
		impactBehaviour = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{1.0,1.0}};
			class Health
			{
				damage = 2000;
				armorDamage = 0.99;
			};
			class Blood
			{
				damage = 200;
			};
			class Shock
			{
				damage = 400;
			};
		};
		class NoiseHit
		{
			strength = 12;
			type = "shot";
		};
	};
	class SNAFU_Bullet_145Cal: Bullet_Base
	{
		scope = 1;
		spawnPileType = "SNAFU_Ammo_145Cal";
		casing = "FxCartridge_SNAFU_145x114";
		round = "FxRound_SNAFU_145x114";
		hit = 13;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 1630;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.00013206765;
		caliber = 5;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 1630;
		weight = 0.01;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 3550;
				armorDamage = 0.99;
			};
			class Blood
			{
				damage = 1000;
			};
			class Shock
			{
				damage = 850;
			};
		};
		class NoiseHit
		{
			strength = 8;
			type = "shot";
		};
	};
	class SNAFU_Bullet_300ACC: Bullet_Base
	{
		scope = 1;
		spawnPileType = "SNAFU_Ammo_300ACC";
		casing = "FxCartridge_SNAFU_300ACC";
		round = "FxRound_SNAFU_300ACC";
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		timeToLive = 6;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 1000;
		tracerStartTime = -1;
		airFriction = -0.00105;
		caliber = 1.1;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 850;
		weight = 0.00158;
		impactBehaviour = 0;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{1.0,1.0}};
			class Health
			{
				damage = 75;
				armorDamage = 0.22;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 56;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class SNAFU_Bullet_556x45mm_M855A1: Bullet_556x45
	{
		scope = 1;
		spawnPileType = "SNAFU_MD_Ammo_556x45mm_M855A1";
		casing = "FxCartridge_556";
		round = "FxRound_556";
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		timeToLive = 6;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 1000;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.00105;
		caliber = 1.2;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 850;
		weight = 0.0050000004;
		impactBehaviour = 0;
		hitAnimation = 0;
		nvgOnly = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 75;
				armorDamage = 0.35;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 66;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class SNAFU_Bullet_762x25: Bullet_Base
	{
		scope = 1;
		spawnPileType = "SNAFU_Ammo_762x25";
		casing = "FxCartridge_SNAFU_762x25";
		round = "FxRound_SNAFU_762x25";
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		timeToLive = 6;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 290;
		tracerStartTime = -1;
		airFriction = -0.0001;
		caliber = 0.8;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 260;
		weight = 0.0129;
		impactBehaviour = 0;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 35;
				armorDamage = 0.15;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 66;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class SNAFU_Bullet_44: Bullet_Base
	{
		scope = 1;
		spawnPileType = "SNAFU_Ammo_44";
		casing = "FxCartridge_SNAFU_44";
		round = "FxRound_SNAFU_44";
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		timeToLive = 6;
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 650;
		tracerStartTime = -1;
		airFriction = -0.0031249998;
		caliber = 1.25;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 550;
		weight = 0.01275;
		impactBehaviour = 0;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 81.25;
				armorDamage = 0.18;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 90;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class SNAFU_Bullet_338: Bullet_Base
	{
		scope = 1;
		spawnPileType = "SNAFU_Ammo_338";
		casing = "FxCartridge_SNAFU_338";
		round = "FxRound_SNAFU_338";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 1223;
		tracerScale = 1;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.0006770228;
		caliber = 2.0;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 849;
		weight = 0.019;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 320;
				armorDamage = 0.4;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 60;
			};
		};
		class NoiseHit
		{
			strength = 6;
			type = "shot";
		};
	};
	class GCGN_Bullet_408Chey: Bullet_Base
	{
		scope = 1;
		spawnPileType = "GCGN_Ammo_408Chey";
		casing = "FxCartridge_GCGN_408Chey";
		round = "FxRound_GCGN_408Chey";
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1650;
		typicalSpeed = 1450;
		airFriction = -0.0008;
		caliber = 2.5;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		weight = 0.015;
		impactBehaviour = 0;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{1.0,1.0}};
			class Health
			{
				damage = 975;
				armorDamage = 0.99;
			};
			class Blood
			{
				damage = 300;
			};
			class Shock
			{
				damage = 200;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class GCGN_Bullet_762x51: Bullet_Base
	{
		scope = 1;
		spawnPileType = "GCGN_Ammo_762x51";
		casing = "FxCartridge_GCGN_762x51";
		round = "FxRound_GCGN_762x51";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 740;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.00085;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 740;
		weight = 0.01;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class GCGN_Bullet_3006: Bullet_Base
	{
		scope = 1;
		spawnPileType = "GCGN_Ammo_3006";
		casing = "FxCartridge_GCGN_3006";
		round = "FxRound_GCGN_3006";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 740;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.00085;
		caliber = 1.7;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		initSpeed = 740;
		weight = 0.01;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{1.0,1.0}};
			class Health
			{
				damage = 155;
				armorDamage = 0.45;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 450;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class SNAFU_Ammo_5_7x28mm: Ammunition_Base
	{
		scope = 2;
		displayName = "5.7x28mm";
		descriptionShort = "5.7x28mm";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_57x28\SNAFU_57x28.p3d";
		weight = 24;
		itemSize[] = {1,1};
		count = 40;
		ammo = "SNAFU_Bullet_5_7x28mm";
	};
	class SNAFU_Ammo_127x55mm: Ammunition_Base
	{
		scope = 2;
		displayName = "127x55mm STs-130PT";
		descriptionShort = "127x55mm STs-130PT The cartridge is based on the .338 Lapua Magnum, however, it has similarities with the .50 Beowulf. The cartridge has a projectile that weighs between 108 grains and 173 grains. This is because the bullet is used in both subsonic and supersonic applications. The cartridge has an effective range of 100m and 600m.";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_127x55\SNAFU_127x55.p3d";
		weight = 24;
		itemSize[] = {1,2};
		count = 40;
		ammo = "SNAFU_Bullet_127x55mm";
	};
	class SNAFU_Ammo_127x55mmAP: Ammunition_Base
	{
		scope = 2;
		displayName = "12.7×55mm STs-130VPS AP";
		descriptionShort = "12.7×55mm STs-130VPS Subsonic cartridge is used in the VKS bullpup sniper rifle. The cartridge can carry a projectile weighing between from 59 grams (911 grains) and 76 g (1173 gr), yielding massive amounts of kinetic energy. The round can penetrate up to 16 mm (0.63 in) of steel at 200 meters or heavy body armor at 100 meters. The accuracy of this cartridge is claimed as to be 1 MOA at 100 meters range.";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_127x55AP\SNAFU_127x55AP.p3d";
		weight = 24;
		itemSize[] = {1,2};
		count = 40;
		ammo = "SNAFU_Bullet_127x55mmAP";
	};
	class SNAFU_Ammo_500_SW: Ammunition_Base
	{
		scope = 2;
		displayName = "500 SW Ammo";
		descriptionShort = "It hurts";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU500\SNAFU_500.p3d";
		iconCartridge = 1;
		weight = 8;
		itemSize[] = {1,1};
		count = 40;
		ammo = "SNAFU_Bullet_44_Magnum";
	};
	class SNAFU_Ammo_45_70mm: Ammunition_Base
	{
		scope = 2;
		displayName = "45.70";
		descriptionShort = "45.70";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_45x70\SNAFU_45x70.p3d";
		weight = 24;
		itemSize[] = {1,1};
		count = 40;
		ammo = "SNAFU_Bullet_45_70mm";
	};
	class SNAFU_Ammo_46x30: Ammunition_Base
	{
		scope = 2;
		displayName = "46x30";
		descriptionShort = "4.6x30";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_46x30\SNAFU_46x30.p3d";
		weight = 24;
		itemSize[] = {1,1};
		count = 40;
		ammo = "SNAFU_Bullet_46x30";
	};
	class GCGN_Ammo_50Cal: Ammunition_Base
	{
		scope = 2;
		displayName = ".50cal BMG";
		descriptionShort = "Make them a stain on the wall 50 cal bullet";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_50bmg\SNAFU_50bmg.p3d";
		weight = 24;
		itemSize[] = {1,3};
		count = 10;
		ammo = "GCGN_Bullet_50Cal";
	};
	class SNAFU_Ammo_145Cal: Ammunition_Base
	{
		scope = 2;
		displayName = "14.5 × 114mm";
		descriptionShort = "The 14.5×114mm (.57 calibre) is a heavy machine gun and anti-materiel rifle cartridge, Make them a stain on the wall with this bullet";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU145x114\SNAFU_145x114.p3d";
		weight = 24;
		itemSize[] = {1,3};
		count = 20;
		ammo = "SNAFU_Bullet_145Cal";
	};
	class SNAFU_Ammo_300ACC: Ammunition_Base
	{
		scope = 2;
		displayName = "300ACC";
		descriptionShort = "300ACC Blackout";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_300ac\SNAFU_300ac.p3d";
		weight = 24;
		itemSize[] = {1,1};
		count = 40;
		ammo = "SNAFU_Bullet_300ACC";
	};
	class SNAFU_MD_Ammo_556x45mm_M855A1: Ammunition_Base
	{
		scope = 2;
		displayName = "5.56 M855A1";
		descriptionShort = "The M855A1, is a 5.56mm Ball ammunition, is an enhanced performance round towards body armour. - More Armour Damage less flesh damage, better than 300AC -";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_556\SNAFU_556.p3d";
		weight = 24;
		itemSize[] = {1,1};
		count = 40;
		ammo = "SNAFU_Bullet_556x45mm_M855A1";
		hiddenSelections[] = {"SNAFU"};
		hiddenSelectionsTextures[] = {"SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_556\snafubody556_M855A1co.paa"};
		hiddenSelectionsMaterials[] = {"SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_556\SNAFU.rvmat"};
	};
	class SNAFU_Ammo_762x25: Ammunition_Base
	{
		scope = 2;
		displayName = "7.62×25mm Tokarev";
		descriptionShort = "The 7.62×25mm Tokarev cartridge is a Russian rimless bottlenecked pistol cartridge widely used in former Soviet states and in China, among other countries.";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_762x25\SNAFU_762x25_Stack.p3d";
		weight = 24;
		itemSize[] = {1,1};
		count = 40;
		ammo = "SNAFU_Bullet_762x25";
		hiddenSelections[] = {"SNAFU"};
		hiddenSelectionsTextures[] = {"SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_762x25\snafubody_co.paa"};
		hiddenSelectionsMaterials[] = {"SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_762x25\SNAFU.rvmat"};
	};
	class SNAFU_Ammo_44: Ammunition_Base
	{
		scope = 2;
		displayName = ".44 Magnum";
		descriptionShort = "44 Magnum or 10.9x33mmR, is a rimmed, large-bore cartridge originally designed for revolvers.";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_44\SNAFU_44_Stack.p3d";
		weight = 24;
		itemSize[] = {1,1};
		count = 40;
		ammo = "SNAFU_Bullet_44";
		hiddenSelections[] = {"SNAFU"};
		hiddenSelectionsTextures[] = {"SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_44\snafubody_co.paa"};
		hiddenSelectionsMaterials[] = {"SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_44\SNAFU.rvmat"};
	};
	class SNAFU_Ammo_338: Ammunition_Base
	{
		scope = 2;
		displayName = "338";
		descriptionShort = "Lapua 338";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_338\SNAFU_338.p3d";
		weight = 24;
		itemSize[] = {1,2};
		count = 40;
		ammo = "SNAFU_Bullet_338";
	};
	class GCGN_Ammo_408Chey: Ammunition_Base
	{
		scope = 2;
		displayName = ".408 CheyTac";
		descriptionShort = "Anti-sniper and anti-materiel, make a red mist.";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU408\SNAFU_408.p3d";
		weight = 24;
		itemSize[] = {1,3};
		count = 10;
		ammo = "GCGN_Bullet_408Chey";
	};
	class GCGN_Ammo_762x51: Ammunition_Base
	{
		scope = 2;
		displayName = "762x51mm";
		descriptionShort = "Standard 762x51mm Nato";
		model = "GCGN_Guns\Data\Ammunition\762x51\GCGN_762x51.p3d";
		weight = 24;
		itemSize[] = {1,1};
		count = 40;
		ammo = "GCGN_Bullet_762x51";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"GCGN_Guns\Data\Ammunition\762x51\Textures\GCGN_762x51_co.paa"};
		hiddenSelectionsMaterials[] = {"GCGN_Guns\Data\Ammunition\762x51\Textures\GCGN_762x51.rvmat"};
	};
	class GCGN_Ammo_3006: Ammunition_Base
	{
		scope = 2;
		displayName = ".30-06 Springfield";
		descriptionShort = "The .30-06 Springfield cartridge, 7.62×63mm in by Winchester, was introduced to the United States Army in 1906 and later standardized; it remained in use until the late-1970s.";
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU3006\SNAFU_3006.p3d";
		weight = 24;
		itemSize[] = {1,2};
		count = 20;
		ammo = "GCGN_Bullet_3006";
	};
};
class CfgVehicles
{
	class FxRound;
	class FxCartridge;
	class FxRound_GCGN_50Cal: FxRound
	{
		model = "GCGN_Guns\Data\Ammunition\50Cal\GCGN_50Cal_Single.p3d";
	};
	class FxCartridge_GCGN_50Ca: FxCartridge
	{
		model = "GCGN_Guns\Data\Ammunition\50Cal\GCGN_50Cal_Naboj.p3d";
	};
	class FxRound_SNAFU_300ACC: FxRound
	{
		model = "GCGN_Guns\Data\Ammunition\300AAC\SNAFU_300ACC_Single.p3d";
	};
	class FxCartridge_SNAFU_300ACC: FxCartridge
	{
		model = "GCGN_Guns\Data\Ammunition\300AAC\SNAFU_300ACC_Naboj.p3d";
	};
	class FxRound_GCGN_408Chey: FxRound
	{
		model = "\GCGN_Guns\Data\Ammunition\408Chey\GCGN_408Chey_Single.p3d";
	};
	class FxCartridge_GCGN_408Chey: FxCartridge
	{
		model = "\GCGN_Guns\Data\Ammunition\408Chey\GCGN_408_Naboj.p3d";
	};
	class FxRound_GCGN_762x51: FxRound
	{
		model = "GCGN_Guns\Data\Ammunition\762x51\GCGN_762x51_Single.p3d";
	};
	class FxCartridge_GCGN_762x51: FxCartridge
	{
		model = "GCGN_Guns\Data\Ammunition\762x51\GCGN_762x51_Naboj.p3d";
	};
	class FxRound_SNAFU_762x25: FxRound
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_762x25\SNAFU_762x25_Single.p3d";
	};
	class FxCartridge_SNAFU_762x25: FxCartridge
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_762x25\SNAFU_762x25_Naboj.p3d";
	};
	class FxRound_SNAFU_44: FxRound
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_44\SNAFU_44_Single.p3d";
	};
	class FxCartridge_SNAFU_44: FxCartridge
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_44\SNAFU_44_Naboj.p3d";
	};
	class FxRound_GCGN_3006: FxRound
	{
		model = "\GCGN_Guns\Data\Ammunition\3006\GCGN_3006_Single.p3d";
	};
	class FxCartridge_GCGN_3006: FxCartridge
	{
		model = "\GCGN_Guns\Data\Ammunition\3006\GCGN_3006_Naboj.p3d";
	};
	class FxRound_SNAFU_45x70: FxRound
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_45x70\SNAFU_45x70_Single.p3d";
	};
	class FxCartridge_SNAFU_45x70: FxCartridge
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_45x70\SNAFU_45x70_Naboj.p3d";
	};
	class FxRound_SNAFU_46x30: FxRound
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_46x30\SNAFU_46x30_Single.p3d";
	};
	class FxCartridge_SNAFU_46x30: FxCartridge
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_46x30\SNAFU_46x30_Naboj.p3d";
	};
	class FxRound_SNAFU_50bmg: FxRound
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_50bmg\SNAFU_50bmg_Single.p3d";
	};
	class FxCartridge_SNAFU_50bmg: FxCartridge
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_50bmg\SNAFU_50bmg_Naboj.p3d";
	};
	class FxRound_SNAFU_57x28: FxRound
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_57x28\SNAFU_57x28_Single.p3d";
	};
	class FxCartridge_SNAFU_57x28: FxCartridge
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_57x28\SNAFU_57x28_Naboj.p3d";
	};
	class FxRound_SNAFU_127x55: FxRound
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_127x55\SNAFU_127x55_Single.p3d";
	};
	class FxCartridge_SNAFU_127x55: FxCartridge
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_127x55\SNAFU_127x55_Naboj.p3d";
	};
	class FxRound_SNAFU_300ac: FxRound
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_300ac\SNAFU_300ac_Single.p3d";
	};
	class FxCartridge_SNAFU_300ac: FxCartridge
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU_300ac\SNAFU_300ac_Naboj.p3d";
	};
	class FxRound_SNAFU_338: FxRound
	{
		model = "GCGN_Guns\Data\Ammunition\338\SNAFU_338_Single.p3d";
	};
	class FxCartridge_SNAFU_338: FxCartridge
	{
		model = "GCGN_Guns\Data\Ammunition\338\SNAFU_338_Naboj.p3d";
	};
	class FxRound_SNAFU_145x114: FxRound
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU145x114\SNAFU_145x114_Single.p3d";
	};
	class FxCartridge_SNAFU_145x114: FxCartridge
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU145x114\SNAFU_145x114_Naboj.p3d";
	};
	class FxRound_SNAFU408: FxRound
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU408\SNAFU408R_Single.p3d";
	};
	class FxCartridge_SNAFU408: FxCartridge
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU408\SNAFU408N_Naboj.p3d";
	};
	class FxRound_SNAFU_500: FxRound
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU500\SNAFU_500_Single.p3d";
	};
	class FxCartridge_SNAFU_500: FxCartridge
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU500\SNAFU_500_Naboj.p3d";
	};
	class FxRound_SNAFU_3006: FxRound
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU3006\SNAFU_3006_Single.p3d";
	};
	class FxCartridge_SNAFU_3006: FxCartridge
	{
		model = "SNAFU_Guns_01\Data\SNAFU_Ammo\SNAFU3006\SNAFU_3006_Naboj.p3d";
	};
};
