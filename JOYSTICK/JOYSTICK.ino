// #
// # Editor     : Lauren from DFRobot
// # Date       : 17.01.2012

// # Product name: Joystick Module
// # Product SKU : DFR0061
// # Version     : 1.0

// # Description:
// # Modify the Sample code for the Joystick Module

// # Connection:
// #        X-Axis  -> Analog pin 0
// #        Y-Axis  -> Analog pin 1
// #        Z-Axis  -> Digital pin 3
// #


int JoyStick_X = A0; //x
int JoyStick_Y = A5; //y
int JoyStick_Z = 7; //key

void setup()
{
  pinMode(JoyStick_Z, INPUT);
  Serial.begin(9600); // 9600 bps
}
void loop()
{
  int x,y,z;
  x=analogRead(JoyStick_X);
  y=analogRead(JoyStick_Y);
  z=digitalRead(JoyStick_Z);
  Serial.print(x ,DEC);
  Serial.print(",");
  Serial.print(y ,DEC);
  Serial.print(",");
  Serial.println(z ,DEC);
  delay(100);
}
