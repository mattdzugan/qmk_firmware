#include QMK_KEYBOARD_H

enum alt_keycodes {
    U_T_AUTO = SAFE_RANGE, //USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,              //USB Toggle Automatic GCR control
    DBG_TOG,               //DEBUG Toggle On / Off
    DBG_MTRX,              //DEBUG Toggle Matrix Prints
    DBG_KBD,               //DEBUG Toggle Keyboard Prints
    DBG_MOU,               //DEBUG Toggle Mouse Prints
    MD_BOOT,               //Restart into bootloader after hold timeout
};

enum unicode_names {
    A___,
    B___,
    CONF,
    DEAD,
    EYES,
    FPLM,
    GRIM,
    HERT,
    WAVE,
    JOY_,
    OK__,
    LAFF,
    MSCL,
    NOWY,
    UPDN,
    PRAY,
    QSTN,
    RBOT,
    SWER,
    TADA,
    UPHD,
    VLNT,
    WINK,
    XPLO,
    WHY_,
    ZAP_,
    ONE_,
    TWO_,
    THRE,
    FOUR,
    FIVE,
    SIX_,
    SEVN,
    EGHT,
    NINE,
    ZERO,
    GRDN,
    GRUP,
    REDX,
    WARN,
    TIME,
    HEVL,
    SEVL,
    NNTR,
    THNK,
    CHCK,
    NONE,
    BEER,
    RCKT,
    END_,
    THUP,
    THDN,
    F_UP,
    F_DN,
    F_LF,
    F_RT,
    TRSH,
    HOME,
    CPTR
};

const uint32_t PROGMEM unicode_map[] = {
    [A___]  = 0x1F170, //
    [B___]  = 0x1F171, //
    [CONF]  = 0x1F38A, //
    [DEAD]  = 0x1F480, //
    [EYES]  = 0x1F440, //
    [FPLM]  = 0x1F926, //
    [GRIM]  = 0x1F62C, //
    [HERT]  = 0x2764, //
    [WAVE]  = 0x1F44B, //
    [JOY_]  = 0x1F602, //
    [OK__]  = 0x1F44C, //
    [LAFF]  = 0x1F923, //
    [MSCL]  = 0x1F4AA, //
    [NOWY]  = 0x1F645, //
    [UPDN]  = 0x1F643, //
    [PRAY]  = 0x1F64F, //
    [QSTN]  = 0x1F928, //
    [RBOT]  = 0x1F916, //
    [SWER]  = 0x1F92C, //
    [TADA]  = 0x1F389, //
    [UPHD]  = 0x1F64C, //
    [VLNT]  = 0x1F60D, //
    [WINK]  = 0x1F61C, //
    [XPLO]  = 0x1F92F, //
    [WHY_]  = 0x1F937, //
    [ZAP_]  = 0x26A1, //
    [ONE_]  = 0x0031, //
    [TWO_]  = 0x0032, //
    [THRE]  = 0x0033, //
    [FOUR]  = 0x0034, //
    [FIVE]  = 0x0035, //
    [SIX_]  = 0x0036, //
    [SEVN]  = 0x0037, //
    [EGHT]  = 0x0038, //
    [NINE]  = 0x0039, //
    [ZERO]  = 0x0030, //
    [GRDN]  = 0x1F4C9, //
    [GRUP]  = 0x1F4C8, //
    [REDX]  = 0x274C, //
    [WARN]  = 0x26A0, //
    [TIME]  = 0x23F0, //
    [HEVL]  = 0x1F649, //
    [SEVL]  = 0x1F648, //
    [NNTR]  = 0x26D4, //
    [THNK]  = 0x1F914, //
    [CHCK]  = 0x2705, //
    [NONE]  = 0x1F6AB, //
    [BEER]  = 0x1F37B, //
    [RCKT]  = 0x1F680, //
    [END_]  = 0x1F51A, //
    [THUP]  = 0x1F44D, //
    [THDN]  = 0x1F44E, //
    [F_UP]  = 0x1F446, //
    [F_DN]  = 0x1F447, //
    [F_LF]  = 0x1F448, //
    [F_RT]  = 0x1F449, //
    [TRSH]  = 0x1F5D1, //
    [HOME]  = 0x1F3E0, //
    [CPTR]  = 0x1F5A5  //
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_ansi_blocker(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME, \
        OSL(2),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN, \
        KC_LCTL, KC_LALT, KC_LGUI,                            KC_SPC,                             KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    [1] = LAYOUT_65_ansi_blocker(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_MUTE, \
        _______, RGB_SPD, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, _______, U_T_AUTO,U_T_AGCR,_______, KC_PSCR, KC_SLCK, KC_PAUS, _______, KC_END, \
        _______, RGB_RMOD,RGB_VAD, RGB_MOD, RGB_HUD, RGB_SAD, _______, _______, _______, _______, _______, _______,          _______, KC_VOLU, \
        _______, RGB_TOG, _______, _______, _______, MD_BOOT, NK_TOGG, DBG_TOG, _______, _______, _______, _______,          KC_PGUP, KC_VOLD, \
        _______, _______, _______,                            _______,                            _______, _______, KC_HOME, KC_PGDN, KC_END  \
    ),
    [2] = LAYOUT_65_ansi_blocker(
        X(NONE), X(ONE_), X(TWO_), X(THRE), X(FOUR), X(FIVE), X(SIX_), X(SEVN), X(EGHT), X(NINE), X(ZERO), X(GRDN), X(GRUP), X(END_), X(TRSH), \
        X(BEER), X(QSTN), X(WINK), X(EYES), X(RBOT), X(TADA), X(WHY_), X(UPHD), X(WAVE), X(UPDN), X(PRAY), X(REDX), X(WARN), X(CHCK), X(HOME), \
        _______, X(A___), X(SWER), X(DEAD), X(FPLM), X(GRIM), X(HERT), X(JOY_), X(OK__), X(LAFF), X(TIME), X(HEVL),          X(CPTR), X(THUP), \
        _______, X(ZAP_), X(XPLO), X(CONF), X(VLNT), X(B___), X(NOWY), X(MSCL), X(SEVL), X(NNTR), X(THNK), _______,          X(F_UP), X(THDN), \
        _______, _______, _______,                            X(RCKT),                            _______, _______, X(F_LF), X(F_DN), X(F_RT)  \
    ),
    /*
    [X] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______  \
    ),
    */
};

#define MODS_SHIFT  (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT))
#define MODS_CTRL  (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_RCTRL))
#define MODS_ALT  (get_mods() & MOD_BIT(KC_LALT) || get_mods() & MOD_BIT(KC_RALT))


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case U_T_AUTO:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        case RGB_TOG:
            if (record->event.pressed) {
              switch (rgb_matrix_get_flags()) {
                case LED_FLAG_ALL: {
                    rgb_matrix_set_flags(LED_FLAG_KEYLIGHT);
                    rgb_matrix_set_color_all(0, 0, 0);
                  }
                  break;
                case LED_FLAG_KEYLIGHT: {
                    rgb_matrix_set_flags(LED_FLAG_UNDERGLOW);
                    rgb_matrix_set_color_all(0, 0, 0);
                  }
                  break;
                case LED_FLAG_UNDERGLOW: {
                    rgb_matrix_set_flags(LED_FLAG_NONE);
                    rgb_matrix_disable_noeeprom();
                  }
                  break;
                default: {
                    rgb_matrix_set_flags(LED_FLAG_ALL);
                    rgb_matrix_enable_noeeprom();
                  }
                  break;
              }
            }
            return false;
        default:
            return true; //Process all other keycodes normally
    }
}
