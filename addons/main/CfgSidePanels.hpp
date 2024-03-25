#pragma hemtt flag pe23_ignore_has_include

class HLC_Panel_base;
class HLC_Panel_Side_Ladder_S_Pride2: HLC_Panel_base {
    displayname = "Ladder Rail Panel (Short/Black)";
    model = "hlc_core\mesh\accessories\acc\panels\Ladder_Short.p3d";
    picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";
};
class HLC_Panel_Side_Ladder_M_Pride2: HLC_Panel_base {
    displayname = "Ladder Rail Panel (Medium/Black)";
    model = "hlc_core\mesh\accessories\acc\panels\Ladder_Med.p3d";
    picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";
};
class HLC_Panel_Side_Ladder_L_Pride2: HLC_Panel_base {
    displayname = "Ladder Rail Panel (Long/Black)";
    model = "hlc_core\mesh\accessories\acc\panels\Ladder_Long.p3d";
    picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";
};
class HLC_Panel_Side_MagpulXT_Pride2: HLC_Panel_base {
    displayname = "Magpul XT Panel (Black)";
    model = "hlc_core\mesh\accessories\acc\panels\Magpul_XT.p3d";
    picture = "\hlc_core\tex\UI\gear_XT_ca.paa";
};

class HLC_Panel_Under_base;
class HLC_Panel_Under_Ladder_S_Pride: HLC_Panel_Under_base {
    displayname = "Ladder Rail Panel (Short/Black)";
    model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Short.p3d";
    picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";
};
class HLC_Panel_Under_Ladder_M_Pride: HLC_Panel_Under_base {
    displayname = "Ladder Rail Panel (Medium/Black)";
    model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Med.p3d";
    picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";
};
class HLC_Panel_Under_Ladder_L_Pride: HLC_Panel_Under_base {
    displayname = "Ladder Rail Panel (Long/Black)";
    model = "hlc_core\mesh\accessories\acc\panels\Underslot\Ladder_Long.p3d";
    picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";
};
class HLC_Panel_Under_MagpulXT_Pride: HLC_Panel_Under_base {
    displayname = "Magpul XT Panel (Black)";
    model = "hlc_core\mesh\accessories\acc\panels\Underslot\Magpul_XT.p3d";
    picture = "\hlc_core\tex\UI\gear_XT_ca.paa";
};

#define SIDE_PANEL_S(type)\
class HLC_Panel_Side_##type##_Ladder_S_Pride: HLC_Panel_Side_Ladder_S_Pride2 {\
    model = "hlc_core\mesh\accessories\acc\panels\Ladder_Short.p3d";\
    picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";\
}

#define SIDE_PANEL_M(type)\
class HLC_Panel_Side_##type##_Ladder_M_Pride: HLC_Panel_Side_Ladder_M_Pride2 {\
    model = "hlc_core\mesh\accessories\acc\panels\Ladder_Med.p3d";\
    picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";\
}

#define SIDE_PANEL_L(type)\
class HLC_Panel_Side_##type##_Ladder_L_Pride: HLC_Panel_Side_Ladder_L_Pride2 {\
    model = "hlc_core\mesh\accessories\acc\panels\Ladder_Long.p3d";\
    picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";\
}

#define SIDE_PANEL_XT(type)\
class HLC_Panel_Side_##type##_MagpulXT_Pride: HLC_Panel_Side_MagpulXT_Pride2 {\
    model = "hlc_core\mesh\accessories\acc\panels\Ladder_Short.p3d";\
    picture = "\hlc_core\tex\UI\gear_Ladder_ca.paa";\
}

#if __has_include("\nia_wp_HK416\config.bin")
    SIDE_PANEL_S(416);
    SIDE_PANEL_M(416);
    SIDE_PANEL_L(416);
    SIDE_PANEL_XT(416);
#endif

#if __has_include("\hlc_wp_ACR\config.bin")
    SIDE_PANEL_S(ACR);
    SIDE_PANEL_M(ACR);
    SIDE_PANEL_L(ACR);
    SIDE_PANEL_XT(ACR);
#endif

#if __has_include("\hlc_wp_ak\config.bin")
    SIDE_PANEL_S(AK12);

    SIDE_PANEL_S(SLR107U);
    SIDE_PANEL_M(SLR107U);
#endif

#if __has_include("\hlc_wp_ar15\config.bin")
    SIDE_PANEL_S(CQBR);
    SIDE_PANEL_M(CQBR);
    SIDE_PANEL_L(CQBR);
    SIDE_PANEL_XT(CQBR);
#endif

#if __has_include("\hlc_wp_aug\config.bin")
    SIDE_PANEL_S(AUGA3);
    SIDE_PANEL_M(AUGA3);
    SIDE_PANEL_L(AUGA3);
    SIDE_PANEL_XT(AUGA3);
#endif

#if __has_include("\hlc_wp_fal\config.bin")
    SIDE_PANEL_S(SA58);
    SIDE_PANEL_M(SA58);
#endif

#if __has_include("\hlc_wp_g3\config.bin")
    SIDE_PANEL_S(HK33);
    SIDE_PANEL_M(HK33);
    SIDE_PANEL_L(HK33);
    SIDE_PANEL_XT(HK33);

    SIDE_PANEL_S(HK53);
    SIDE_PANEL_M(HK53);
    SIDE_PANEL_XT(HK53);

    SIDE_PANEL_S(G3K);
    SIDE_PANEL_M(G3K);
    SIDE_PANEL_L(G3K);
    SIDE_PANEL_XT(G3K);
#endif

#if __has_include("\hlc_wp_g36\config.bin")
    SIDE_PANEL_S(G36Tac);
    SIDE_PANEL_M(G36Tac);
    SIDE_PANEL_L(G36Tac);
    SIDE_PANEL_XT(G36Tac);

    SIDE_PANEL_S(G36V);
    SIDE_PANEL_M(G36V);
#endif

#if __has_include("\hlc_wp_mp5\config.bin")
    SIDE_PANEL_S(MP5TAC);
    SIDE_PANEL_M(MP5TAC);
    SIDE_PANEL_XT(MP5TAC);
#endif

#if __has_include("\hlc_wp_saw\config.bin")
    SIDE_PANEL_S(SAW);
    SIDE_PANEL_M(SAW);
    SIDE_PANEL_L(SAW);
    SIDE_PANEL_XT(SAW);

    SIDE_PANEL_S(Mk48);
    SIDE_PANEL_M(Mk48);
#endif

#if __has_include("\nia_wp_SCAR\config.bin")
    SIDE_PANEL_S(SCAR);
    SIDE_PANEL_M(SCAR);
    SIDE_PANEL_XT(SCAR);

    SIDE_PANEL_S(SCAR_Long);
    SIDE_PANEL_M(SCAR_Long);
    SIDE_PANEL_L(SCAR_Long);
    SIDE_PANEL_XT(SCAR_Long);
#endif
