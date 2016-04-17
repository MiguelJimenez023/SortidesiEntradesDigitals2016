/*************************************************************************************************
**                                                                                              **
**                              Descripció del programa                                         **
**                                                                                              **
*************************************************************************************************/

//******  Includes  ******************************************************************************


//******  Variables   ****************************************************************************

int timer = 100;           
int ledPins[] = {
  5, 6, 7, 8, 9, 10, 11, 12
};   
int pinCount = 6;           
const int k = 9;



//******  Setup  *********************************************************************************

 void setup() {
  
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }
}



//******  Loop  **********************************************************************************

void loop() {
  const int k=9; 
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    digitalWrite(ledPins[thisPin], LOW);
  }

  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) {
    
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);   
    digitalWrite(ledPins[thisPin], LOW);
  }

  for (int i=4; i<=8; i++) {

    digitalWrite(i, HIGH );
    digitalWrite( k-i, HIGH);
    delay(timer);

  }

  for(int i= 8; i>=1; i--) {
    
    digitalWrite (i, LOW);
    digitalWrite( k-i , LOW );
    delay(timer);

   
  }
}
  






