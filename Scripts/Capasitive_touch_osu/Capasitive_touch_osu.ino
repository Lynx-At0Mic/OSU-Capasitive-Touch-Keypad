//Instructions at https://www.github.com/https://github.com/Lynx-At0Mic/OSU-Capasitive-Touch-Keypad
//Created by Lynx-At0Mic https://github.com/Lynx-At0Mic
#include <CapacitiveSensor.h>
//Pins
  int pin1 = 8;
  int pin2 = 10;
  int pin3 = 11;
  int pin4 = 13;
  int click1Thresh = 500;
  int click2Thresh = 500;
  bool click1 = false;
  bool click2 = false;
  CapacitiveSensor   csClick1 = CapacitiveSensor(pin2, pin1);
  CapacitiveSensor   csClick2 = CapacitiveSensor(pin3,pin4);


void setup() {
  Serial.begin(9600);
}


void loop() {

    long total1 =  csClick1.capacitiveSensor(20);
    long total2 =  csClick2.capacitiveSensor(20);

    
//    Serial.print(total1);
//    Serial.print("\t");
//    Serial.println(total2);

    
    if(total1 > click1Thresh && !click1) {
      Serial.println("c1p");
      click1 = true;
    }

    if(total2 > click2Thresh && !click2) {
      Serial.println("c2p");
      click2 = true;
    }
    
    if (total1 <= click1Thresh && click1) {
      Serial.println("c1r");
      click1 = false;
    }
    
    if (total2 <= click2Thresh && click2) {
      Serial.println("c2r");
      click2 = false;
    }
}
