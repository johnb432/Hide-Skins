#pragma hemtt flag pe23_ignore_has_include

#include "script_component.hpp"

#if __has_include("\f\fkm\addons\fix_rhs\script_component.hpp")
    #define FKM_RHS 1
    #define RHS 1
#endif
#if __has_include("\z\wb_rhs\addons\main\script_component.hpp")
    #define WB_RHS 1
    #define RHS 1
#endif

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            #ifdef FKM_RHS
                "fkm_fix_rhs",
                "fkm_fix_rhs_prep",
            #endif
            #ifdef WB_RHS
                "wb_rhs_main",
                "wb_rhs_main_prep",
            #endif
            "cba_main",
            "rhs_main_loadorder",
            "rhsgref_main_loadorder",
            "rhssaf_main_loadorder",
            "rhsusf_main_loadorder",
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

#ifdef RHS
    class CfgWeapons {
        // RHS
        class rhs_weap_mk17_CQC;
        class rhs_weap_SCARH_USA_CQC: rhs_weap_mk17_CQC {
            displayName = "SCAR-H CQC (Black)";
        };
        class rhs_weap_SCARH_USA_CQC_Folded: rhs_weap_SCARH_USA_CQC {
            displayName = "SCAR-H CQC (Black/Folded)";
        };

        class rhs_weap_mk17_LB;
        class rhs_weap_SCARH_USA_LB: rhs_weap_mk17_LB {
            displayName = "SCAR-H LB (Black)";
        };
        class rhs_weap_SCARH_USA_LB_Folded: rhs_weap_SCARH_USA_LB {
            displayName = "SCAR-H LB (Black/Folded)";
        };

        class rhs_weap_mk17_STD;
        class rhs_weap_SCARH_USA_STD: rhs_weap_mk17_STD {
            displayName = "SCAR-H STD (Black)";
        };
        class rhs_weap_SCARH_USA_STD_Folded: rhs_weap_SCARH_USA_STD {
            displayName = "SCAR-H STD (Black/Folded)";
        };
    };
#endif
