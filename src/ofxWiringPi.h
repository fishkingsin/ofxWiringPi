#include "mcp3002.h"  
#include "mcp4802.h"  
#include "softPwm.h"   
#include "sr595.h"       
#include "wiringPiSPI.h"
#include "mcp23008.h"  
#include "mcp23017.h"     
#include "mcp23x0817.h"  
#include "mcp3004.h"  
#include "pcf8574.h"  
#include "softServo.h"  
#include "wiringPi.h"     
#include "wiringSerial.h"
#include "mcp23016.h"  
#include "mcp23s08.h"     
#include "mcp23x08.h"    
#include "mcp3422.h"  
#include "pcf8591.h"
#include "softTone.h"
#include "wiringPiI2C.h"
#include "wiringShift.h"


class ofxWiringPi {

	void setupi2c() {
		system("gpio load i2c");
	}

	~ofxWiringPi() {

	}

};
