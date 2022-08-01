
// This program writes and reads from the uSD card slot


#include <Arduino.h>
#include "TinyML_init.h"
#include "SAMD21_init.h"
#include "SdFat.h"
extern SdFat SD;

File myFile;    
void setup(void) {
  SAMD21_init(1);                                           // Setting up SAMD21 (0) will not wait for serial port, (1) will wait and RGB LED will be Red
  char variableChar;
   if (SD.begin(SDCARD_SS_PIN)) {                           // Check if SD card inserted
      Serial.println("Opening TinyML.bin file");
      myFile = SD.open("TinyML.bin", FILE_WRITE);
      for (uint8_t i=0; i<255; i++){
        variableChar = i;
        myFile.print(variableChar);
      }     
      myFile.close();
      Serial.println("TinyML.bin saved");  
   }
   if (SD.begin(SDCARD_SS_PIN)) {                           // Check if SD card inserted
      Serial.println("Opening TinyML.bin file for reading");
      myFile = SD.open("TinyML.bin", FILE_READ);
      for (uint8_t i=0; i<255; i++){
        Serial.println(myFile.read());
      }     
      myFile.close();
      Serial.println("TinyML.bin completed");  
   }
}

void loop() {

}
