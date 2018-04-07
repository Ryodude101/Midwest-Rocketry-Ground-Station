#include "Declarations.h"


char received = 'received';
/////////////////////


void setup() {

    pinModes();

    //Serial.begin(57600);
    //Serial.println( "Arduino started sending bytes via XBee" );

    // set the data rate for the SoftwareSerial port
    //xbee.begin( 19200 );
     xbee.begin(9600);
}


void loop() {

    //if (Serial.available())
    //{ // If data comes in from serial monitor, send it out to XBee
      //xbee.write(Serial.read());
    //}
    //if (xbee.available())
    //{ // If data comes in from XBee, send it out to serial monitor
      //Serial.write(xbee.read());
    //}
    if(xbee.isListening()) {
        digitalWrite(12, HIGH);
        delay(1000);
    }

    if(xbee.read() == -1) {
        digitalWrite(12, LOW);
    }


    if(xbee.available() > 0) {
        digitalWrite(13, HIGH);
        delay(1000);
        xbee.print( received );
    }

    delay(150);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    //Serial.print('H');
    //delay(100);
    //Serial.print('L');

}
