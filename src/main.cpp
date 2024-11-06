#include <Arduino.h>
#include "wifi.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello World!");

  // Call the function from the wifi.h file
  //configWiFi(true, IPAddress(192, 168, 1, 21), IPAddress(192, 168, 1, 254), IPAddress(255, 255, 255, 0));
  Serial.println("End of setup"); 
}

void loop() {
  // put your main code here, to run repeatedly:
}
