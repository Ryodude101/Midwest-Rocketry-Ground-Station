#include "Loop.h"



void update_display() {
    digitalWrite(p_TFC_1_led_R, state.TFC_1_led_R);
    digitalWrite(p_TFC_1_led_G, state.TFC_1_led_G);
    digitalWrite(p_TFC_1_led_B, state.TFC_1_led_B);

    digitalWrite(p_TFC_2_led_R, state.TFC_2_led_R);
    digitalWrite(p_TFC_2_led_G, state.TFC_2_led_G);
    digitalWrite(p_TFC_2_led_B, state.TFC_2_led_B);

    digitalWrite(p_TFC_3_led_R, state.TFC_3_led_R);
    digitalWrite(p_TFC_3_led_G, state.TFC_3_led_G);
    digitalWrite(p_TFC_3_led_B, state.TFC_3_led_B);

    digitalWrite(p_TFR_led_R, state.TFR_led_R);
    digitalWrite(p_TFR_led_G, state.TFR_led_G);
    digitalWrite(p_TFR_led_B, state.TFR_led_B);

    //digitalWrite(p_signal_strength_led, state.signal_strength_led);
    digitalWrite(p_signal_connection_led, state.signal_connection_led);

    digitalWrite(p_active_roll_led, state.active_roll_led);
    digitalWrite(p_emergency_dump_led, state.emergency_dump_led);

    digitalWrite(p_button_switch_port_1, state.button_switch_port_1);
    digitalWrite(p_button_switch_port_2, state.button_switch_port_2);
}
