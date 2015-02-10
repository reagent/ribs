//    this->noteCollection[1]  = new Note("C4", 262);
//    this->noteCollection[2]  = new Note("D4", 294);
//    this->noteCollection[3]  = new Note("E4", 330);
//    this->noteCollection[4]  = new Note("F4", 349);
//    this->noteCollection[5]  = new Note("G4", 392);
//    this->noteCollection[6]  = new Note("A4", 440);
//    this->noteCollection[7]  = new Note("B4", 494);
//    this->noteCollection[8]  = new Note("C5", 523);
//    this->noteCollection[9]  = new Note("D5", 587);
//    this->noteCollection[10] = new Note("E5", 659);
//    this->noteCollection[11] = new Note("F5", 699);
//    this->noteCollection[12] = new Note("G5", 784);
//    this->noteCollection[13] = new Note("A5", 880);
//    this->noteCollection[14] = new Note("B5", 988);

//"G4:2,A4:4,G4:2,E4:4,C5:4,A4:4,G4:12"




#define PIEZO 0

void setup(void)
{
   pinMode(PIEZO, OUTPUT);
}

void playNote(int pin, int frequency, int beats)
{
  tone(pin, frequency, 75 * beats);
  delay(75 * beats);
}

void loop(void)
{
  
  playNote(PIEZO, 392, 2);  // G4
  playNote(PIEZO, 440, 4);  // A4
  playNote(PIEZO, 392, 2);  // G4
  playNote(PIEZO, 330, 4);  // E4
  playNote(PIEZO, 523, 4);  // C5
  playNote(PIEZO, 440, 4);  // A4
  playNote(PIEZO, 392, 12); // G4

  playNote(PIEZO, 392, 2);  // G4
  playNote(PIEZO, 440, 2);  // A4
  playNote(PIEZO, 392, 2);  // G4
  playNote(PIEZO, 440, 2);  // A4
  playNote(PIEZO, 392, 4);  // G4
  playNote(PIEZO, 523, 4);  // C5
  playNote(PIEZO, 494, 16); // B4
  
  // F4:2,G4:4,F4:2,D4:4,B4:4,A4:4,G4:12
  playNote(PIEZO, 349, 2);  // F4
  playNote(PIEZO, 392, 4);  // G4
  playNote(PIEZO, 349, 2);  // F4
  playNote(PIEZO, 294, 4);  // D4
  playNote(PIEZO, 494, 4);  // B4
  playNote(PIEZO, 440, 4);  // A4
  playNote(PIEZO, 392, 12); // G4
  
  // G4:2,A4:2,G4:2,A4:2,G4:4,A4:4,E4:16
  playNote(PIEZO, 392, 2);  // G4
  playNote(PIEZO, 440, 2);  // A4
  playNote(PIEZO, 392, 2);  // G4
  playNote(PIEZO, 440, 2);  // A4
  playNote(PIEZO, 392, 4);  // G4
  playNote(PIEZO, 440, 4);  // A4
  playNote(PIEZO, 330, 16); // E4
  
  
//  playNote(PIEZO, 440, 2);  // A4
//  
//  playNote(PIEZO, 440, 2);  // A4
//  playNote(PIEZO, 392, 4);  // G4
//  playNote(PIEZO, 523, 4);  // C5
//  playNote(PIEZO, 494, 16); // B4



  delay(1000);
}
