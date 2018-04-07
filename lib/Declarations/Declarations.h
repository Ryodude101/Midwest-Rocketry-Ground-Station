#ifndef _DEFINITIONS_H_
#define _DEFINITIONS_H_


#include <Arduino.h>
#include <SoftwareSerial.h>


//its possible that not all of these need to be used, find ones to omit
struct led_display_state {
    bool TFC_1_led_R = 0;
    bool TFC_1_led_G = 0;
    bool TFC_1_led_B = 0;

    bool TFC_2_led_R = 0;
    bool TFC_2_led_G = 0;
    bool TFC_2_led_B = 0;

    bool TFC_3_led_R = 0;
    bool TFC_3_led_G = 0;
    bool TFC_3_led_B = 0;

    bool TFR_led_R = 0;
    bool TFR_led_G = 0;
    bool TFR_led_B = 0;

    bool button_switch_port_1 = 0;
    bool button_switch_port_2 = 0;

    bool active_roll_led = 0;
    int emergency_dump_led = 0;
    
    int signal_strength_R = 0;
    int signal_strength_G = 0;
    int signal_strength_B = 0;
};


const int p_TFC_1_led_R = 6;
const int p_TFC_1_led_G = 5;
const int p_TFC_1_led_B = 4;

const int p_TFC_2_led_R = 9;
const int p_TFC_2_led_G = 8;
const int p_TFC_2_led_B = 7;

const int p_TFC_3_led_R = 12;
const int p_TFC_3_led_G = 11;
const int p_TFC_3_led_B = 10;

//const int p_button_switch_port_1 = 0;
//const int p_button_switch_port_2 = 0;

//const int p_active_roll_led = 13;
#define p_emergency_dump_led A0

#define p_signal_strength_R A3
#define p_signal_strength_G A4
#define p_signal_strength_B A5



extern SoftwareSerial xbee;//(0, 1); // RX, TX
extern struct led_display_state state;


#endif
