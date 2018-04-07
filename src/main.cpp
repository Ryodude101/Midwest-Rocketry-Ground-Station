
#include "Declarations.h"
#include <Setup.h>
#include <Loop.h>
#include <Testing.h>


SoftwareSerial xbee(2, 3); // RX, TX
struct led_display_state state;


char received = 'a';// = 'received';
/////////////////////


#include "Wire.h"



void setup() {

    pinModes();


    Serial.begin(9600);
    Serial.println( "Arduino started sending bytes via XBee" );

    // set the data rate for the SoftwareSerial port
    //xbee.begin( 19200 );
     xbee.begin(9600);
}


void loop() {


    alphabet();

    //if (Serial.available())
    //{ // If data comes in from serial monitor, send it out to XBee
      //xbee.write(Serial.read());
    //}
    //if (xbee.available())
    //{ // If data comes in from XBee, send it out to serial monitor
      //Serial.write(xbee.read());
    //}
    if(xbee.isListening()) {
    }

    if(xbee.read() == -1) {
        delay(400);
    }


    if(xbee.available() > 0) {
        delay(1000);
        xbee.print( received );
        Serial.print( received );
    }

    //all_high();
    //update_display();
    //delay(150);
    //analogWrite(0, 0);
    //analogWrite(1, 0);
    //analogWrite(2, 0);
    //analogWrite(3, 0);
    //analogWrite(4, 0);
    //analogWrite(5, 0);
    //delay(400);
    //all_low();
    //update_display();
    //delay(500);
    //Serial.print('H');
    //delay(100);
    //Serial.print('L');

    received = xbee.read();

}
