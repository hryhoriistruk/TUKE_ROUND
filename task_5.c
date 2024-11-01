//
// Created by hryhorii on 21.10.24.
//
#include "superkarel.h"

void turn_right(){
  turn_left();
  turn_left();
  turn_left();
}

void olympics(){
  while(no_beepers_present()){
    if(right_is_blocked()){
      if(front_is_clear()){
        step();

      }else{
        turn_left();
        }
    }
    else{
      turn_right();
      step();
    }
  }
}

