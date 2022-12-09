#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "niarms_416",
            "hlcweapons_acr",
            "hlcweapons_G36",
            "hlcweapons_SAW",
            "hlcweapons_SCAR",
            "hlcweapons_XM8",
            "rhsusf_main_loadorder",
            "fk_fix_niarms",
            "fk_fix_rhs"
        };
        author = "johnb43";
        authors[] = {"johnb43"};
        url = "https://github.com/johnb432/Hide-Skins";
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    // NIArms
    class hlc_rifle_416C;
    class hlc_rifle_bab: hlc_rifle_416C {
        displayName = "HK416C";
        HiddenSelectionsMaterials[] = {"nia_wp_hk416\mat\416c_upper.rvmat","nia_wp_hk416\mat\416C_lower.rvmat","nia_wp_hk416\mat\416C_Stock.rvmat","nia_wp_hk416\mat\416_common.rvmat","nia_wp_hk416\mat\416c_foreend.rvmat"};
        hiddenSelectionsTextures[] = {"nia_wp_hk416\tex\toadie_416\416c_upper_co.paa","nia_wp_hk416\tex\toadie_416\416c_lower_co.paa","nia_wp_hk416\tex\toadie_416\416c_stock_co.paa","nia_wp_hk416\tex\toadie_416\416_common_co.paa","nia_wp_hk416\tex\toadie_416\416c_foreend_co.paa"};
        picture = "\nia_WP_HK416\tex\ui\gear_416c_ca";
    };

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

    class hlc_rifle_G36E1AG36;
    class hlc_rifle_G36E1AG36_Romi: hlc_rifle_G36E1AG36 {
        displayName = "HK G36E (GL)";
        hiddenSelectionsTextures[] = {"hlc_wp_g36\tex\commonmaps\g36_commonmap_e1_co.paa","hlc_wp_g36\tex\placeholder\g36_dualoptics_export_co.paa","hlc_wp_g36\tex\placeholder\g36_magwell_co.paa","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.paa","hlc_wp_g36\tex\placeholder\g36_ag36_co.paa"};
        picture = "\hlc_wp_g36\tex\ui\gear_AG36E_ca.paa";
    };

    class hlc_m249_pip4;
    class hlc_m249_SQuantoon: hlc_m249_pip4 {
        displayName = "M249 PIP (Long/Savit/Tan)";
        model = "\hlc_wp_saw\mesh\m249\m249e2_pip4.p3d";
        picture = "\hlc_wp_saw\tex\ui\gear_m249e2pip2_x_ca";
    };

    class hlc_rifle_ACR_SBR_tan;
    class hlc_rifle_ACR_SBR_cliffhanger: hlc_rifle_ACR_SBR_tan {
        displayName = "Remington ACR-E (Compact/Black/Worn)";
        hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1-black_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3-black_co.paa","hlc_wp_ACR\tex\mapyesblack_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
        picture = "\hlc_wp_acr\tex\ui\gear_sbr-black_ca";
    };

    class hlc_rifle_ACR_GL_SBR_black;
    class hlc_rifle_ACR_GL_SBR_cliffhanger: hlc_rifle_ACR_GL_SBR_black {
        displayName = "Remington ACR-E (Compact/GL/Black/Worn)";
        hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1-black_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3-black_co.paa","hlc_wp_ACR\tex\mapyesblack_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
        picture = "\hlc_wp_acr\tex\ui\gear_sbr-black_ca";
    };

    class HLC_rifle_XM8_Carbine;
    class HLC_rifle_XM8_Carbine_Fish: HLC_rifle_XM8_Carbine {
        displayName = "XM8 (Carbine)";
        delete HiddenSelectionsMaterials;
        hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_STD_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_xm320_co.paa"};
        picture = "\nia_wp_xm8\tex\ui\XM8_Carbine_ca.paa";
    };

    class hlc_rifle_XM8_DMAR;
    class HLC_rifle_XM8_DMAR_Custom: hlc_rifle_XM8_DMAR {
        displayName = "XM8 (DMAR/Green)";
        delete HiddenSelectionsMaterials;
        hiddenSelectionsTextures[] = {"nia_wp_XM8\tex\toadie_XM8\XM8_Common_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_reciever_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\xm8_stocks_Green_co.paa","nia_wp_XM8\tex\toadie_XM8\XM8_Foregrip_DMAR_Green_co.paa",""};
        picture = "\nia_wp_xm8\tex\ui\XM8_DMAR_Green_ca.paa";
    };

    // RHS
    class rhs_weap_mk17_CQC;
    class rhs_weap_SCARH_USA_CQC: rhs_weap_mk17_CQC {
        displayName = "SCAR-H CQC (Black)";
        hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_blk_co.paa"};
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_CQC_ca.paa";
    };
    class rhs_weap_SCARH_USA_CQC_Folded: rhs_weap_SCARH_USA_CQC  {
        displayName = "SCAR-H CQC (Black/Folded)";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_CQC_folded_ca.paa";
    };

    class rhs_weap_mk17_LB;
    class rhs_weap_SCARH_USA_LB: rhs_weap_mk17_LB {
        displayName = "SCAR-H LB (Black)";
        hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_blk_co.paa"};
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_LB_ca.paa";
    };
    class rhs_weap_SCARH_USA_LB_Folded: rhs_weap_SCARH_USA_LB {
        displayName = "SCAR-H LB (Black/Folded)";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_LB_folded_ca.paa";
    };

    class rhs_weap_mk17_STD;
    class rhs_weap_SCARH_USA_STD: rhs_weap_mk17_STD {
        displayName = "SCAR-H STD (Black)";
        hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_blk_co.paa"};
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_STD_ca.paa";
    };
    class rhs_weap_SCARH_USA_STD_Folded: rhs_weap_SCARH_USA_STD {
        displayName = "SCAR-H STD (Black/Folded)";
        picture = "\rhssaf\addons\rhssaf_inventoryicons\data\weapons\rhs_weap_SCARH_STD_folded_ca.paa";
    };
};
