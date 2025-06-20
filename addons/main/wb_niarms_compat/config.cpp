#pragma hemtt flag pe23_ignore_has_include

#include "script_component.hpp"

// As fix_niarms_X / \z\wb_niarms\addons\X files are always loaded, need to check if the base X PBO is loaded as well
#if __has_include("\hlc_wp_ACR\config.bin")
    #if __has_include("\f\fkm\addons\fix_niarms_acr\script_component.hpp")
        #define FKM_NIARMS_ACR
        #define NIARMS_ACR
    #endif
    #if __has_include("\z\wb_niarms\addons\acr\script_component.hpp")
        #define WB_NIARMS_ACR
        #define NIARMS_ACR
    #endif
#endif

#if __has_include("\hlc_wp_g36\config.bin")
    #if __has_include("\f\fkm\addons\fix_niarms_g36\script_component.hpp")
        #define FKM_NIARMS_G36
        #define NIARMS_G36
    #endif
    #if __has_include("\z\wb_niarms\addons\g36\script_component.hpp")
        #define WB_NIARMS_G36
        #define NIARMS_G36
    #endif
#endif

#if __has_include("\nia_wp_XM8\config.bin")
    #if __has_include("\f\fkm\addons\fix_niarms_xm8\script_component.hpp")
        #define FKM_NIARMS_XM8
        #define NIARMS_XM8
    #endif
    #if __has_include("\z\wb_niarms\addons\xm8\script_component.hpp")
        #define WB_NIARMS_XM8
        #define NIARMS_XM8
    #endif
#endif

#if __has_include("\nia_wp_HK416\config.bin")
    #if __has_include("\f\fkm\addons\fix_niarms_hk416\script_component.hpp")
        #define FKM_NIARMS_HK416
        #define NIARMS_HK416
    #endif
    #if __has_include("\z\wb_niarms\addons\hk416\script_component.hpp")
        #define WB_NIARMS_HK416
        #define NIARMS_HK416
    #endif
#endif

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            #ifdef FKM_NIARMS_ACR
                "fkm_fix_niarms_acr",
            #endif
            #ifdef FKM_NIARMS_G36
                "fkm_fix_niarms_g36",
            #endif
            #ifdef FKM_NIARMS_XM8
                "fkm_fix_niarms_xm8",
            #endif
            #ifdef FKM_NIARMS_HK416
                "fkm_fix_niarms_hk416",
            #endif
            #ifdef WB_NIARMS_ACR
                "wb_niarms_acr",
            #endif
            #ifdef WB_NIARMS_G36
                "wb_niarms_g36",
            #endif
            #ifdef WB_NIARMS_XM8
                "wb_niarms_xm8",
            #endif
            #ifdef WB_NIARMS_HK416
                "wb_niarms_hk416",
            #endif
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

class CfgWeapons {
    // NIArms
    #ifdef NIARMS_ACR
        class hlc_rifle_ACR_GL_SBR_black;
        class hlc_rifle_ACR_GL_SBR_cliffhanger: hlc_rifle_ACR_GL_SBR_black {
            displayName = "Remington ACR-E (Compact/GL/Black/Worn)";
        };
    #endif

    #ifdef NIARMS_G36
        class hlc_rifle_G36E1AG36;
        class hlc_rifle_G36E1AG36_Romi: hlc_rifle_G36E1AG36 {
            displayName = "HK G36E (GL)";
        };
    #endif

    #ifdef NIARMS_XM8
        class HLC_rifle_XM8_Carbine;
        class HLC_rifle_XM8_Carbine_Fish: HLC_rifle_XM8_Carbine {
            displayName = "XM8 (Carbine)";
        };

        class hlc_rifle_XM8_DMAR;
        class HLC_rifle_XM8_DMAR_Custom: hlc_rifle_XM8_DMAR {
            displayName = "XM8 (DMAR/Green)";
        };
    #endif

    #ifdef NIARMS_HK416
        class hlc_rifle_416C;
        class hlc_rifle_bab: hlc_rifle_416C {
            displayName = "HK416C";
        };
    #endif
};
