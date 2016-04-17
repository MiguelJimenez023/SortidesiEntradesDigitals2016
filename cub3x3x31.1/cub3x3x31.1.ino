/*************************************************************************************************
**                                                                                              **
**                              Descripció del programa                                         **
**                                                                                              **
*************************************************************************************************/

//******  Includes  ******************************************************************************


//******  Variables   ****************************************************************************

int timer = 100;           
int ledPins[] = {
  1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27
};   
int pinCount = 27;           

//******  Setup  *********************************************************************************

 void setup() {
  
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }
}

//******  Loop  **********************************************************************************

void loop() {
   
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
  }

  for (int thisPin = pinCount - 1;thisPin >=0; thisPin--) {

    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    digitalWrite(ledPins[thisPin], LOW);
    
  }
}
