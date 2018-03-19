#include <Wire.h> // Must include Wire library for I2C
#include <SparkFun_MMA8452Q.h> // Includes the SFE_MMA8452Q library

MMA8452Q accel;

void setup(){
  Serial.begin(9600);
  accel.init();  
}

  
void loop() {
  /*
byte pl = accel.readPL();
switch (pl)
{
case PORTRAIT_U:
    Serial.println("Portrait Up");
    break;
case PORTRAIT_D:
    Serial.println("Portrait Down");
    break;
case LANDSCAPE_R:
    Serial.println("Landscape Right");
    break;
case LANDSCAPE_L:
    Serial.println("Landscape Left");
    break;
case LOCKOUT:
    Serial.println("Flat");
    break;
}
  */
  accel.read();

double xAcceleration = accel.x; // Read in raw x-axis acceleration data

double zAcceleration = accel.z; // Read in calculated z-axis acceleration

double yAcceleration = accel.y; // Read in calculated z-axis acceleration

Serial.print(xAcceleration); //blue
Serial.print(",");
Serial.print(yAcceleration); //red
Serial.print(",");
Serial.println(zAcceleration); //green

  
  delay(100);
}

