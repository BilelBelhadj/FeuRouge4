#include <Arduino.h>

int delayAttend = 3000 ;
int delayChange = 2000 ;
int rouge1  = 0 ;
int rouge2  = 3 ;
int orange1 = 1 ;
int orange2 = 4 ;
int vert1   = 2 ;
int vert2   = 5 ;
void setup() {

  pinMode(rouge1  , OUTPUT);
  pinMode(rouge2  , OUTPUT);
  pinMode(orange1 , OUTPUT);
  pinMode(orange2 , OUTPUT);
  pinMode(vert1   , OUTPUT);
  pinMode(vert2   , OUTPUT);
}

void loop() {

  digitalWrite(rouge1  , HIGH);
  digitalWrite(rouge2  , HIGH);
  digitalWrite(orange1 , LOW );
  digitalWrite(orange2 , LOW );
  digitalWrite(vert1   , LOW );
  digitalWrite(vert2   , LOW );
  delay(delayAttend);
  
  digitalWrite(rouge1  , LOW );
  digitalWrite(rouge2  , HIGH);
  digitalWrite(orange1 , LOW );
  digitalWrite(orange2 , LOW );
  digitalWrite(vert1   , HIGH);
  digitalWrite(vert2   , LOW );
  delay(delayChange);
  
  digitalWrite(rouge1  , LOW );
  digitalWrite(rouge2  , HIGH);
  digitalWrite(orange1 , HIGH);
  digitalWrite(orange2 , LOW );
  digitalWrite(vert1   , LOW);
  digitalWrite(vert2   , LOW );
  delay(delayChange);
  
  digitalWrite(rouge1  , HIGH);
  digitalWrite(rouge2  , HIGH);
  digitalWrite(orange1 , LOW );
  digitalWrite(orange2 , LOW );
  digitalWrite(vert1   , LOW );
  digitalWrite(vert2   , LOW );
  delay(delayAttend);
  
  digitalWrite(rouge1  , HIGH);
  digitalWrite(rouge2  , LOW );
  digitalWrite(orange1 , LOW );
  digitalWrite(orange2 , LOW );
  digitalWrite(vert1   , LOW );
  digitalWrite(vert2   , HIGH);
  delay(delayChange);
  
  digitalWrite(rouge1  , HIGH);
  digitalWrite(rouge2  , LOW );
  digitalWrite(orange1 , LOW );
  digitalWrite(orange2 , HIGH);
  digitalWrite(vert1   , LOW );
  digitalWrite(vert2   , LOW );
  delay(delayChange);

}