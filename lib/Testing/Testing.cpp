#include "Testing.h"




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

    state.TFR_led_R = 1;
    state.TFR_led_G = 1;
    state.TFR_led_B = 1;

    //state.signal_strength_led = 1;     //needs to be something not bool
    state.signal_connection_led = 1;

    state.active_roll_led = 1;
    state.emergency_dump_led = 1;

    state.button_switch_port_1 = 1;
    state.button_switch_port_2 = 1;
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
