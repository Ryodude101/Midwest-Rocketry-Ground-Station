#include "Testing.h"

char c = 'A';


void all_high() {
    state.TFC_1_led_R = 1;
    state.TFC_1_led_G = 1;
    state.TFC_1_led_B = 1;

    state.TFC_2_led_R = 1;
    state.TFC_2_led_G = 1;
    state.TFC_2_led_B = 1;

    state.TFC_3_led_R = 1;
    state.TFC_3_led_G = 1;
    state.TFC_3_led_B = 1;

    state.button_switch_port_1 = 1;
    state.button_switch_port_2 = 1;

    state.active_roll_led = 1;
    state.emergency_dump_led = 255;

    state.signal_strength_R = 255;
    state.signal_strength_G = 255;
    state.signal_strength_B = 255;
}

void all_low() {
    state.TFC_1_led_R = 0;
    state.TFC_1_led_G = 0;
    state.TFC_1_led_B = 0;

    state.TFC_2_led_R = 0;
    state.TFC_2_led_G = 0;
    state.TFC_2_led_B = 0;

    state.TFC_3_led_R = 0;
    state.TFC_3_led_G = 0;
    state.TFC_3_led_B = 0;

    state.TFR_led_R = 0;
    state.TFR_led_G = 0;
    state.TFR_led_B = 0;

    state.button_switch_port_1 = 0;
    state.button_switch_port_2 = 0;
    
    state.active_roll_led = 0;
    state.emergency_dump_led = 0;

    state.signal_strength_R = 0;
    state.signal_strength_G = 0;
    state.signal_strength_B = 0;
}

void alphabet() {
    xbee.print( c );
    //--- display the character just sent on console ---
//Serial.println( c );
    //--- get the next letter in the alphabet, and reset to ---
    //--- 'A' once we have reached 'Z'.
    c = c + 1;
    if ( c>'Z' )
         c = 'A';
}
