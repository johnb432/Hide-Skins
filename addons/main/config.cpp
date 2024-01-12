#pragma hemtt flag pe23_ignore_has_include

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            #if __has_include("\hlc_wp_ACR\config.bin")
                "hlcweapons_acr",
            #endif
            #if __has_include("\hlc_wp_ar15\config.bin")
                "hlcweapons_AR15",
            #endif
            #if __has_include("\hlc_wp_g36\config.bin")
                "hlcweapons_G36",
            #endif
            #if __has_include("\hlc_wp_saw\config.bin")
                "hlcweapons_SAW",
            #endif
            #if __has_include("\nia_wp_SCAR\config.bin")
                "hlcweapons_SCAR",
            #endif
            #if __has_include("\nia_wp_XM8\config.bin")
                "hlcweapons_XM8",
            #endif
            #if __has_include("\nia_wp_HK416\config.bin")
                "niarms_416",
            #endif
            #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
                "rhsusf_main_loadorder",
            #endif
            #if __has_include("\f\fkm\addons\fix_niarms\script_component.hpp")
                "fkm_fix_niarms",
            #endif
            #if __has_include("\f\fkm\addons\fix_rhs\script_component.hpp")
                "fkm_fix_rhs",
            #endif
            #if __has_include("\z\wb_niarms\addons\main\script_component.hpp")
                "wb_niarms_main",
            #endif
            #if __has_include("\z\wb_rhs\addons\main\script_component.hpp")
                "wb_rhs_main",
            #endif
            "A3_Data_F_AoW_Loadorder"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Hide-Skins";
        VERSION_CONFIG;
    };
};

#if __has_include("\f\fkm\addons\fix_niarms\script_component.hpp")
    #define WB_NIARMS 1
#endif
#if __has_include("\z\wb_niarms\addons\main\script_component.hpp")
    #define WB_NIARMS 1
#endif

#if __has_include("\f\fkm\addons\fix_rhs\script_component.hpp")
    #define WB_RHS 1
#endif
#if __has_include("\z\wb_rhs\addons\main\script_component.hpp")
    #define WB_RHS 1
#endif

class CfgWeapons {
    // NIArms
    #if __has_include("\hlc_wp_ACR\config.bin")
        class hlc_rifle_ACR_SBR_tan;
        class hlc_rifle_ACR_SBR_cliffhanger: hlc_rifle_ACR_SBR_tan {
            displayName = "Remington ACR-E (Compact/Black/Worn)";
            hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1-black_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3-black_co.paa","hlc_wp_ACR\tex\mapyesblack_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
            picture = "\hlc_wp_acr\tex\ui\gear_sbr-black_ca";
        };

        class hlc_rifle_ACR_GL_SBR_black;
        class hlc_rifle_ACR_GL_SBR_cliffhanger: hlc_rifle_ACR_GL_SBR_black {
            #ifdef WB_NIARMS
                displayName = "Remington ACR-E (Compact/GL/Black/Worn)";
            #else
                displayName = "Remington ACR-E (GL/Compact/Black/Worn)";
            #endif

            hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1-black_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3-black_co.paa","hlc_wp_ACR\tex\mapyesblack_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
            picture = "\hlc_wp_acr\tex\ui\gear_sbr-black_ca";
        };
    #endif

    #if __has_include("\hlc_wp_ar15\config.bin")
        class hlc_ar15_base;
        class hlc_rifle_SAMR: hlc_ar15_base {
            hiddenSelections[] = {"Upper","Lower","D-Ring","Rails","Panels","VFG","Harris","Patch","Stock"};
            hiddenSelectionsTextures[] = {"hlc_wp_ar15\tex\samr\upper_co.paa","hlc_wp_ar15\tex\samr\lower_co.paa","hlc_wp_ar15\tex\samr\ras_co.paa","hlc_wp_ar15\tex\samr\risras_co.paa","hlc_wp_ar15\tex\samr\xtm_co.paa","hlc_wp_ar15\tex\melon_cqbr\vgrip_tan_co.paa","hlc_wp_ar15\tex\samr\hbipod_co.paa","","hlc_wp_ar15\tex\samr\stock_co.paa"};
        };
    #endif

    #if __has_include("\hlc_wp_g36\config.bin")
        class hlc_rifle_G36E1AG36;
        class hlc_rifle_G36E1AG36_Romi: hlc_rifle_G36E1AG36 {
            #ifdef WB_NIARMS
                displayName = "HK G36E (GL)";
            #else
                displayName = "H&K HK G36E (GL)";
            #endif

            hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_e1_co.paa","hlc_wp_g36\tex\placeholder\g36_dualoptics_export_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\g36_ag36_co.paa"};
            picture = "\hlc_wp_g36\tex\ui\gear_AG36E_ca.paa";
        };
    #endif

    #if __has_include("\hlc_wp_saw\config.bin")
        class hlc_m249_pip4;
        class hlc_m249_SQuantoon: hlc_m249_pip4 {
            displayName = "M249 PIP (Long/Savit/Tan)";
            model = "\hlc_wp_saw\mesh\m249\m249e2_pip4.p3d";
            picture = "\hlc_wp_saw\tex\ui\gear_m249e2pip2_x_ca";
        };
    #endif

    #if __has_include("\nia_wp_SCAR\config.bin")
        class hlc_wp_SCARL_STD_300AAC_SRX;
        class hlc_wp_SCARL_STD_300AAC_SRX_muddy: hlc_wp_SCARL_STD_300AAC_SRX {
            displayName = "FN SCAR-L STD(.300AAC/SRX/Black)";
            hiddenSelectionsTextures[] = {"nia_wp_scar\tex\toadie_scar\scar_common_co.paa","nia_wp_scar\tex\toadie_scar\scar_lower_co.paa","nia_wp_scar\tex\toadie_scar\stock_co.paa","nia_wp_scar\tex\toadie_scar\upper_SCARL_co.paa","hlc_core\tex\acc\Stock\magpul_CTR_black_co.paa","nia_wp_scar\tex\toadie_scar\acc_extensions_co.paa"};
            picture = "\nia_WP_SCAR\tex\ui\hlc_wp_SCARL_STD_300AAC_SRX_Blk_ca";
        };

        class hlc_wp_SCARH_CQC_SRX;
        class hlc_wp_SCARH_CQC_SRX_tranoflage: hlc_wp_SCARH_CQC_SRX {
            displayName = "FN SCAR-H CQC(SRX)";
            hiddenSelectionsTextures[] = {"nia_wp_scar\tex\toadie_scar\scar_common_tan_co.paa","nia_wp_scar\tex\toadie_scar\scar_lower_tan_co.paa","nia_wp_scar\tex\toadie_scar\stock_tan_co.paa","nia_wp_scar\tex\toadie_scar\upper_scarh_tan_co.paa","nia_wp_scar\tex\map3_co.paa","nia_wp_scar\tex\mapyes_co.paa","nia_wp_scar\tex\toadie_scar\acc_extensions_co.paa"};
            picture = "\nia_WP_SCAR\tex\ui\hlc_wp_SCARH_CQC_SRX_ca";
        };
    #endif

    #if __has_include("\nia_wp_XM8\config.bin")
        class HLC_rifle_XM8_Carbine;
        class HLC_rifle_XM8_Carbine_Fish: HLC_rifle_XM8_Carbine {
            #ifdef WB_NIARMS
                displayName = "XM8 (Carbine)";
            #else
                displayName = "XM8 Carbine";
            #endif

            delete HiddenSelectionsMaterials;
            hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_xm320_co.paa"};
            picture = "\nia_wp_xm8\tex\ui\XM8_Carbine_ca.paa";
        };

        class hlc_rifle_XM8_DMAR;
        class HLC_rifle_XM8_DMAR_Custom: hlc_rifle_XM8_DMAR {
            #ifdef WB_NIARMS
                displayName = "XM8 (DMAR/Green)";
            #else
                displayName = "XM8 DMAR(Green)";
            #endif

            delete HiddenSelectionsMaterials;
            hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_Green_co.paa",""};
            picture = "\nia_wp_xm8\tex\ui\XM8_DMAR_Green_ca.paa";
        };
    #endif

    #if __has_include("\nia_wp_HK416\config.bin")
        class hlc_rifle_416C;
        class hlc_rifle_bab: hlc_rifle_416C {
            #ifdef WB_NIARMS
                displayName = "HK416C";
            #else
                displayName = "H&K HK416C";
            #endif

            hiddenSelectionsMaterials[] = {"nia_wp_hk416\mat\416c_upper.rvmat","nia_wp_hk416\mat\416C_lower.rvmat","nia_wp_hk416\mat\416C_Stock.rvmat","nia_wp_hk416\mat\416_common.rvmat","nia_wp_hk416\mat\416c_foreend.rvmat"};
            hiddenSelectionsTextures[] = {"nia_wp_hk416\tex\toadie_416\416c_upper_co.paa","nia_wp_hk416\tex\toadie_416\416c_lower_co.paa","nia_wp_hk416\tex\toadie_416\416c_stock_co.paa","nia_wp_hk416\tex\toadie_416\416_common_co.paa","nia_wp_hk416\tex\toadie_416\416c_foreend_co.paa"};
            picture = "\nia_WP_HK416\tex\ui\gear_416c_ca";
        };
    #endif

    // RHS
    #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
        class rhs_weap_mk17_CQC;
        class rhs_weap_SCARH_USA_CQC: rhs_weap_mk17_CQC {
            #ifdef WB_RHS
                displayName = "SCAR-H CQC (Black)";
            #else
                displayName = "SCAR-H (CQC)";
            #endif

            hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_blk_co.paa"};
            picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_CQC_ca.paa";
        };
        class rhs_weap_SCARH_USA_CQC_Folded: rhs_weap_SCARH_USA_CQC {
            #ifdef WB_RHS
                displayName = "SCAR-H CQC (Black/Folded)";
            #else
                displayName = "SCAR-H (CQC) Folded";
            #endif

            picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_CQC_folded_ca.paa";
        };

        class rhs_weap_mk17_LB;
        class rhs_weap_SCARH_USA_LB: rhs_weap_mk17_LB {
            #ifdef WB_RHS
                displayName = "SCAR-H LB (Black)";
            #else
                displayName = "SCAR-H (LB)";
            #endif

            hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_blk_co.paa"};
            picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_LB_ca.paa";
        };
        class rhs_weap_SCARH_USA_LB_Folded: rhs_weap_SCARH_USA_LB {
            #ifdef WB_RHS
                displayName = "SCAR-H LB (Black/Folded)";
            #else
                displayName = "SCAR-H (LB) Folded";
            #endif

            picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_LB_folded_ca.paa";
        };

        class rhs_weap_mk17_STD;
        class rhs_weap_SCARH_USA_STD: rhs_weap_mk17_STD {
            #ifdef WB_RHS
                displayName = "SCAR-H STD (Black)";
            #else
                displayName = "SCAR-H (STD)";
            #endif

            hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_blk_co.paa"};
            picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_STD_ca.paa";
        };
        class rhs_weap_SCARH_USA_STD_Folded: rhs_weap_SCARH_USA_STD {
            #ifdef WB_RHS
                displayName = "SCAR-H STD (Black/Folded)";
            #else
                displayName = "SCAR-H (STD) Folded";
            #endif

            picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_STD_folded_ca.paa";
        };
    #endif
};
