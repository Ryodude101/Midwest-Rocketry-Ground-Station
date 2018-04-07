#include "Setup.h"



void pinModes() {
    pinMode(p_TFC_1_led_R, OUTPUT);
    pinMode(p_TFC_1_led_G, OUTPUT);
    pinMode(p_TFC_1_led_B, OUTPUT);

    pinMode(p_TFC_2_led_R, OUTPUT);
    pinMode(p_TFC_2_led_G, OUTPUT);
    pinMode(p_TFC_2_led_B, OUTPUT);

    pinMode(p_TFC_3_led_R, OUTPUT);
    pinMode(p_TFC_3_led_G, OUTPUT);
    pinMode(p_TFC_3_led_B, OUTPUT);

    pinMode(p_TFR_led_R, OUTPUT);
    pinMode(p_TFR_led_G, OUTPUT);
    pinMode(p_TFR_led_B, OUTPUT);

    //pinMode(p_signal_strength_led, OUTPUT);
    pinMode(p_signal_connection_led, OUTPUT);

    pinMode(p_active_roll_led, OUTPUT);
    pinMode(p_emergency_dump_led, OUTPUT);

    pinMode(p_button_switch_port_1, OUTPUT);
    pinMode(p_button_switch_port_2, OUTPUT);
}
