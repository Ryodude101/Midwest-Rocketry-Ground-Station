#ifndef _DEFINITIONS_H_
#define _DEFINITIONS_H_


#include <Arduino.h>
#include <SoftwareSerial.h>

#include <Setup.h>
#include <Loop.h>
#include <Testing.h>



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

    //bool signal_strength_led = 0;     //needs to be something not bool
    bool signal_connection_led = 0;

    bool active_roll_led = 0;
    bool emergency_dump_led = 0;

    bool button_switch_port_1 = 0;
    bool button_switch_port_2 = 0;
};


const int p_TFC_1_led_R = 0;
const int p_TFC_1_led_G = 1;
const int p_TFC_1_led_B = 2;

const int p_TFC_2_led_R = 3;
const int p_TFC_2_led_G = 4;
const int p_TFC_2_led_B = 5;

const int p_TFC_3_led_R = 6;
const int p_TFC_3_led_G = 7;
const int p_TFC_3_led_B = 8;

const int p_TFR_led_R = 9;
const int p_TFR_led_G = 10;
const int p_TFR_led_B = 11;

//const int p_signal_strength_led = 0;
const int p_signal_connection_led = 12;

const int p_active_roll_led = 13;
const int p_emergency_dump_led = 0;

const int p_button_switch_port_1 = 0;
const int p_button_switch_port_2 = 0;



SoftwareSerial xbee(0, 1); // RX, TX
struct led_display_state state;



#endif
