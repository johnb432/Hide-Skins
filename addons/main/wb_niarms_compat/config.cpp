#pragma hemtt flag pe23_ignore_has_include

#include "script_component.hpp"

#if __has_include("\f\fkm\addons\fix_niarms\script_component.hpp")
    #define FKM_NIARMS 1
    #define NIARMS 1
#endif
#if __has_include("\z\wb_niarms\addons\main\script_component.hpp")
    #define WB_NIARMS 1
    #define NIARMS 1
#endif

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            #ifdef FKM_NIARMS
                "fkm_fix_niarms",
                "fkm_fix_niarms_prep",
            #endif
            #ifdef WB_NIARMS
                "wb_niarms_main",
                "wb_niarms_main_prep",
            #endif
            "cba_main",
            "hlcweapons_core",
            "hlcweapons_ACR",
            "hlcweapons_AKs",
            "hlcweapons_AR15",
            "hlcweapons_AUG",
            "hlcweapons_falpocalypse",
            "hlcweapons_FHAWCovert",
            "hlcweapons_FN3011",
            "hlcweapons_g3",
            "hlcweapons_G36",
            "hlcweapons_M134",
            "hlcweapons_M14",
            "hlcweapons_M16A2",
            "hlcweapons_M60E4",
            "hlcweapons_MG3s",
            "hlcweapons_MP5",
            "hlcweapons_saw",
            "hlcweapons_SCAR",
            "hlcweapons_SG550",
            "hlcweapons_Springfield1903",
            "hlcweapons_stgw57",
            "hlcweapons_XM8",
            "niaweapons_226",
            "niarms_416",
            "niaweapons_C96",
            "sp_fwa_mas",
            "hide_skins_main"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Hide-Skins";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#ifdef NIARMS
    class CfgWeapons {
        // NIArms
        class hlc_rifle_ACR_GL_SBR_black;
        class hlc_rifle_ACR_GL_SBR_cliffhanger: hlc_rifle_ACR_GL_SBR_black {
            displayName = "Remington ACR-E (Compact/GL/Black/Worn)";
        };

        class hlc_rifle_G36E1AG36;
        class hlc_rifle_G36E1AG36_Romi: hlc_rifle_G36E1AG36 {
            displayName = "HK G36E (GL)";
        };

        class HLC_rifle_XM8_Carbine;
        class HLC_rifle_XM8_Carbine_Fish: HLC_rifle_XM8_Carbine {
            displayName = "XM8 (Carbine)";
        };

        class hlc_rifle_XM8_DMAR;
        class HLC_rifle_XM8_DMAR_Custom: hlc_rifle_XM8_DMAR {
            displayName = "XM8 (DMAR/Green)";
        };

        class hlc_rifle_416C;
        class hlc_rifle_bab: hlc_rifle_416C {
            displayName = "HK416C";
        };
    };
#endif
