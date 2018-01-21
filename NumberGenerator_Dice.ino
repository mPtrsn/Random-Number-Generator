
/*
 * executing script for the dice
 * gets the input from a button 
 * and generates a random number between 
 * 1 (inclusive) and 
 * 6 (inclusive)
 * 
 * 
 * 
 */
#include "config.h"





OUTPUT_FORM out(led_middle,led_bot_r,led_mid_r,led_top_r,led_bot_l,led_mid_l,led_top_l);

int buttonMode = 0;
int buttonTimer = 0;
void setup() {
  
  pinMode(BUTTON_PIN,INPUT);

  pinMode(led_middle,OUTPUT);
  pinMode(led_bot_r,OUTPUT);
  pinMode(led_mid_r,OUTPUT);
  pinMode(led_top_r,OUTPUT);
  pinMode(led_bot_l,OUTPUT);
  pinMode(led_mid_l,OUTPUT);
  pinMode(led_top_l,OUTPUT);

  randomSeed(analogRead(0));
  
  int i;
  for(i = 0; i < 3; i++){
    out.doAnimation();
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonMode = digitalRead(BUTTON_PIN);

  while(buttonMode == HIGH && buttonTimer < BUTTON_HOLD_TIME +1){
    buttonTimer++;
    delay(100);
    buttonMode = digitalRead(BUTTON_PIN);
  }
  if (buttonTimer < 20 && buttonTimer > 0){
    out.doOutput(generateNumber());
    delay(3000);
  }else if(buttonTimer >= BUTTON_HOLD_TIME){
    out.doAnimation();
  }else{
    out.doReset();
  }
  buttonTimer = 0;
}

static int generateNumber(){
  return random(1,7);
 }
