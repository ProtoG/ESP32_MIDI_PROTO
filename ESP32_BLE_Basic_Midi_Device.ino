//Proto G Engineering 6/3-/2025
//
//ESP32 Bluetooth MIDI Test

#include <Arduino.h>
#include <BLEMidi.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Initializing bluetooth");
  BLEMidiServer.begin("Basic MIDI device");
  Serial.println("Waiting for connections...");
  //BLEMidiServer.enableDebugging();  // Uncomment if you want to see some debugging output from the library (not much for the server class...)
}

void loop() {
  if(BLEMidiServer.isConnected()) {            

      BLEMidiServer.noteOn(0, 85, 127);
      delay(100);
      BLEMidiServer.noteOff(0, 85, 127);       
      delay(100);
      BLEMidiServer.noteOn(0, 85, 127);
      delay(100);
      BLEMidiServer.noteOff(0, 85, 127);        
      delay(100);
      BLEMidiServer.noteOn(0, 85, 127);
      delay(100);
      BLEMidiServer.noteOff(0, 85, 127);        
      delay(100);
      BLEMidiServer.noteOn(0, 95, 127);
      delay(50);
      BLEMidiServer.noteOff(0, 95, 127);        
      delay(50);
      BLEMidiServer.noteOn(0, 95, 127);
      delay(50);
      BLEMidiServer.noteOff(0, 95, 127);        
      delay(50);
      BLEMidiServer.noteOn(0, 95, 127);
      delay(50);
      BLEMidiServer.noteOff(0, 95, 127);        
      delay(50);
      BLEMidiServer.noteOn(0, 95, 127);
      delay(50);
      BLEMidiServer.noteOff(0, 95, 127);      
      delay(50);
      BLEMidiServer.noteOn(0, 75, 127);
      delay(1000);
      BLEMidiServer.noteOff(0, 75, 127);        
      delay(1000);
  

  }
}