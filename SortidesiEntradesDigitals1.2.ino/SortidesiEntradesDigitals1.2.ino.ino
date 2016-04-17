/*************************************************************************************************
**                                                                                              **
**                              Descripció del programa                                         **
**                                                                                              **
*************************************************************************************************/

//******  Includes  ******************************************************************************


//******  Variables   ****************************************************************************

int timer = 100;           
int ledPin1 = 5;
int ledPin2 = 6;
int ledPin3 = 7;
int ledPin4 = 8;
int ledPin5 = 9;
int ledPin6 = 10;
int ledPin7 = 11;
int ledPin8 = 12;


//******  Setup  *********************************************************************************

 void setup() {
  
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
    pinMode(ledPin5, OUTPUT);
    pinMode(ledPin6, OUTPUT);
    pinMode(ledPin7, OUTPUT);
    pinMode(ledPin8, OUTPUT);
  
}

//******  Loop  **********************************************************************************

void loop() {

  digitalWrite(ledPin1 , LOW);
  delay(timer);
  digitalWrite(ledPin1 , HIGH);
  delay(timer);
  digitalWrite(ledPin1 , LOW);
  delay(timer);
  digitalWrite(ledPin1 , HIGH);
  delay(timer);
  digitalWrite(ledPin1 , LOW);
  delay(timer);
  digitalWrite(ledPin1 , HIGH);
  delay(timer);
  digitalWrite(ledPin1 , LOW);
  delay(timer);
  digitalWrite(ledPin1 , HIGH);
  delay(timer);

  digitalWrite(ledPin1 , HIGH);
  delay(timer);
  digitalWrite(ledPin1 , LOW);
  delay(timer);
  digitalWrite(ledPin1 , HIGH);
  delay(timer);
  digitalWrite(ledPin1 , LOW);
  delay(timer);
  digitalWrite(ledPin1 , HIGH);
  delay(timer);
  digitalWrite(ledPin1 , LOW);
  delay(timer);
  digitalWrite(ledPin1 , HIGH);
  delay(timer);
  digitalWrite(ledPin1 , LOW);
  delay(timer);
  
  
}

