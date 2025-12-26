#define _ARMA_

class CfgPatches
{
    class ammo_override
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Weapons_Projectiles",
            "SNAFU_Ammo_Master"
        };
    };
};

class CfgAmmo
{
    /* =====================================================
       VANILLA AMMO (<= .308)
       +40% HEALTH | SHOCK = 0 | BLOOD = 0 | BARREL = 0
       ===================================================== */

    class Bullet_556x45 : Bullet_556x45
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 154; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };
    class Bullet_556x45Tracer : Bullet_556x45 {};

    class Bullet_545x39 : Bullet_545x39
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 161; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };
    class Bullet_545x39Tracer : Bullet_545x39 {};

    class Bullet_762x39 : Bullet_762x39
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 154; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };
    class Bullet_762x39Tracer : Bullet_762x39 {};

    class Bullet_308Win : Bullet_308Win
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 210; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };
    class Bullet_308WinTracer : Bullet_308Win {};

    class Bullet_9x19 : Bullet_9x19
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 84; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };

    /* =====================================================
       SNAFU / GCGN AMMO (<= .308)
       +40% HEALTH | SHOCK = 0 | BLOOD = 0 | BARREL = 0
       ===================================================== */

    class SNAFU_Bullet_5_7x28mm : SNAFU_Bullet_5_7x28mm
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 86.8; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };

    class SNAFU_Bullet_46x30 : SNAFU_Bullet_46x30
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 72.8; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };

    class SNAFU_Bullet_762x25 : SNAFU_Bullet_762x25
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 49.0; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };

    class SNAFU_Bullet_44 : SNAFU_Bullet_44
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 113.75; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };

    class SNAFU_Bullet_44_Magnum : SNAFU_Bullet_44_Magnum
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 203.0; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };

    class SNAFU_Bullet_300ACC : SNAFU_Bullet_300ACC
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 105.0; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };

    class SNAFU_Bullet_556x45mm_M855A1 : SNAFU_Bullet_556x45mm_M855A1
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 105.0; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };

    class GCGN_Bullet_762x51 : GCGN_Bullet_762x51
    {
        damageBarrel = 0;
        class DamageApplied
        {
            class Health { damage = 154.0; };
            class Blood  { damage = 0; };
            class Shock  { damage = 0; };
        };
    };
};
