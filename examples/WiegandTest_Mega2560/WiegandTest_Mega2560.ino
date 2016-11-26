#include <WiegandMega2560.h>

#define FALSE 0			
#define TRUE  1	


WIEGAND wg;

void setup() {
	Serial.begin(9600);  
	wg.begin(TRUE, TRUE, FALSE);  // wg.begin(GateA , GateB, GateC)
}

void loop() {
	if(wg.available())
	{
		Serial.print("Wiegand HEX = ");
		Serial.print(wg.getCode(),HEX);
		Serial.print(", DECIMAL = ");
		Serial.print(wg.getCode());
                Serial.print(", Gate= ");
                Serial.print(wg.getGateActive());
		Serial.print(", Type W");
		Serial.println(wg.getWiegandType());    
	}
}