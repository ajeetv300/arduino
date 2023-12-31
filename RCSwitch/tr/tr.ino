/*
ESP8266 ESP-12E (Nodemcu 1.0) Transmitter code 
*/
#include <RCSwitch.h>
RCSwitch mySwitch = RCSwitch();
const int redLed = 2;
void setup() {
  Serial.begin(9600);  
  // Transmitter is connected to D2 (GPIO4) of Nodemcu 1.0 module 
  mySwitch.enableTransmit(4);
  pinMode(redLed, OUTPUT);
  // Optional set pulse length.
  // mySwitch.setPulseLength(320);  
  // Optional set protocol (default is 1, will work for most outlets)
  // mySwitch.setProtocol(2);  
  // Optional set number of transmission repetitions.
  // mySwitch.setRepeatTransmit(15);  
}
void loop() {
  /*  
  //See Example: TypeA_WithDIPSwitches
  mySwitch.switchOn("11111", "00010");
  delay(1000);
  mySwitch.switchOff("11111", "00010");
  delay(1000);
  //Same switch as above, but using decimal code
  mySwitch.send(5393, 24);
  delay(1000);  
  mySwitch.send(5396, 24);
  delay(1000);  
  //Same switch as above, but using binary code
  mySwitch.send("000000000001010100010001");
  delay(1000);  
  mySwitch.send("000000000001010100010100");
  delay(1000);
  //Same switch as above, but tri-state code
  mySwitch.sendTriState("00000FFF0F0F");
  delay(1000);  
  mySwitch.sendTriState("00000FFF0FF0");
  delay(1000);
*/
  /* using decimal code */
  Serial.print("On");
  mySwitch.send(5592368, 24);
  digitalWrite(redLed, HIGH);
  delay(3000);  
  Serial.print("Off");
  mySwitch.send(5592332, 24);
  digitalWrite(redLed, LOW);
  delay(2000);  
}
