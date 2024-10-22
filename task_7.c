//
// Created by hryhorii on 21.10.24.
//
#include "superkarel.h"

void turn_right();
void x_mas();

int main(){
    turn_on("task_7.kw");
    x_mas();

    turn_off();

    return 0;
}

void turn_right(){
    turn_left();
    turn_left();
    turn_left();
}

void x_mas(){
  while(front_is_clear()) {
    step();
  }
  turn_left();
  while(front_is_clear()) {
    step();
  }
  turn_left();
  while(right_is_blocked()){
    step();
  }
  turn_right();
  step();
  turn_right();
  step();
  while(1){
    put_beeper();
    turn_left();
    step();
    turn_right();
    while(right_is_clear()){
      step();
      }
      if (front_is_blocked()){
        put_beeper();
        break;
     }if (front_is_blocked()){
       break;
     }
  }
  turn_left();
  while(front_is_clear() && right_is_blocked()){
    step();
  }
  turn_right();
  step();
  put_beeper();
  put_beeper();
  step();
  turn_right();
  while(front_is_clear()){
    step();
  }
  turn_left();
  while(1){
    while(right_is_blocked()){
      if (front_is_blocked()){
        return;
      }
      step();
    }
    turn_left();
    turn_left();
    step();
    put_beeper();
    turn_left();
    turn_left();
    step();
    turn_right();
    step();
    turn_left();
  }
}