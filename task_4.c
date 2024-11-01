//
// Created by hryhorii on 21.10.24.
//
#include "superkarel.h"


void turn_right(){
  turn_left();
  turn_left();
  turn_left();
}
void one_stairs(){
  turn_left();
  while(right_is_blocked()){
    while (beepers_present()){
      pick_beeper();
    }
    step();
  }
    turn_right();
    while(front_is_clear()){
      step();
      while (beepers_present()){
        pick_beeper();
      }
    }
    if(right_is_clear()){
      return;
      }
      else{
        one_stairs();
      }
}
void climb_stairs(){
  one_stairs();
  turn_left();
  turn_left();
  while(left_is_clear()){
    step();
  }
  turn_left();
  turn_left();
}