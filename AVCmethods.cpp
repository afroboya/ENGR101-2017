#include <stdio.h>
#include <time.h>
#include "E101.h"
int ahead();
int turn_left();
int turn_right();
int reverse;

int main(){
    init();
    set_motor(1,100);
    set_motor(2,100);
    sleep1(1,0);
    turn_left();
    turn_right();
    
return 0;}

int average5(){
  double analogreading = 0;
  for(int i=0;i<5;i++){
    analogreading += read_analog(0); 
    sleep1(0,50);
  }
  analogreading = analogreading/5;
  return analogreading;
}
int ahead(){
  set_motor(1,100);
  set_motor(2,100);
}
int turn_left(){
  set_motor(1,100);
  set_motor(2,100);
  sleep1(0,100000);
  set_motor(1,50);
  sleep1(0,100000);
  set_motor(1,25);
  sleep1(0,100000);
  set_motor(1,0);
  sleep1(0,100000);
}

int turn_right(){
  set_motor(2,100);
  set_motor(1,100);
  sleep1(0,100000);
  set_motor(2,50);
  sleep1(0,100000);
  set_motor(2,25);
  sleep1(0,100000);
  set_motor(2,0);
  sleep1(0,100000);
}

int reverse(){
  set_motor(1,0);
  set_motor(2,0);
  sleep1(0,100000);
  set_motor(1,-20);
  set_motor(2,-20);
  sleep1(0,100000);
  set_motor(1,-40);
  set_motor(2,-40);
  sleep1(0,100000);  
}

int object_Front{
  if(average5 > 10){
    reverse();
  }
}