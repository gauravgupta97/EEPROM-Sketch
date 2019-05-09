
#include <EEPROM.h>

int add,add1,data;
byte value;

void setup() {
 
  Serial.begin(9600);
 
}

void loop() {
  Serial.println("Enter the address where you write the data:-");
   while (Serial.available()==0) {
    
 }
  add1=Serial.parseInt();
  
  Serial.println("Enter the data value:-");
    while (Serial.available()==0) {
    
 }
  data=Serial.parseInt();
  
   EEPROM.write(add1,data);


   Serial.println("Enter the address where you want to read data:-");
  while (Serial.available()==0) {
    
  }
  add=Serial.parseInt();
  value = EEPROM.read(add);
  Serial.println(value,DEC);
  
  Serial.println();
  Serial.println("AGAIN:-");
  Serial.println();

}
