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

    //digitalWrite(p_button_switch_port_1, state.button_switch_port_1);
    //digitalWrite(p_button_switch_port_2, state.button_switch_port_2);

    analogWrite(p_emergency_dump_led, state.emergency_dump_led);
    //digitalWrite(p_active_roll_led, state.active_roll_led);

    analogWrite(p_signal_strength_R, state.signal_strength_R);
    analogWrite(p_signal_strength_G, state.signal_strength_G);
    analogWrite(p_signal_strength_B, state.signal_strength_B);
}
