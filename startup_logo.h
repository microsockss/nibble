#include QMK_KEYBOARD_H

static void render_logo(void) {
    // microsocks logo
    static const char PROGMEM logo[] = {
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x83, 0x01, 
        0x01, 0x01, 0x03, 0x07, 0x1f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0x7f, 0x3f, 0x0f, 0x07, 0x07, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x07, 0x07, 0x07, 0x07, 0x0f, 0x0f, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
        0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x07, 0x07, 0x03, 0x01, 0x00, 
        0x00, 0x00, 0x00, 0x40, 0x40, 0x60, 0xf0, 0xf8, 0xf8, 0xf8, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 
        0xff, 0xff, 0x1f, 0x5f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x1f, 0xff, 0xff, 0x6f, 0xff, 0xff, 
        0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 
        0xff, 0xff, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 
        0x7f, 0x7f, 0xff, 0xff, 0x0f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x1f, 
        0x1f, 0x1f, 0x0f, 0x0f, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xc0, 
        0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xe0, 0xe0, 0xfe, 0xf8, 0xe7, 0xe3, 0xfc, 0xff, 0xe0, 0xff, 0xff, 0xe0, 0xff, 0xff, 
        0xf0, 0xee, 0xef, 0xff, 0xef, 0xff, 0xe0, 0xfe, 0xff, 0xff, 0xf0, 0xee, 0xef, 0xff, 0xef, 0xf0, 
        0xff, 0xec, 0xfd, 0xfb, 0xe3, 0xff, 0xf9, 0xe0, 0xef, 0xff, 0xef, 0xe0, 0xfb, 0xff, 0xe0, 0xef, 
        0xff, 0xef, 0xff, 0xff, 0xe0, 0xf9, 0xf6, 0xef, 0xff, 0xff, 0xec, 0xfb, 0xeb, 0xf7, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf8, 0xf0, 
        0xf0, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xfe, 0xf8, 0xf0, 0xf0, 0xe0, 0xe0, 0xf0, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
    };

    oled_write_raw_P(logo, sizeof(logo));
}