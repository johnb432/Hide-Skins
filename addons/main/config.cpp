#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "niarms_416",
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
