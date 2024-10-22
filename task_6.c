//
// Created by hryhorii on 21.10.24.
//
#include "superkarel.h"

void turn_right();
void chess_board();

int main(){
    turn_on("task_6.kw");
    chess_board();
    turn_off();

    return 0;
}
void turn_right(){
  turn_left();
  turn_left();
  turn_left();

}
void chess_board(){
  if (facing_east()){
    step();
    while(front_is_clear()){
      put_beeper();
      if (front_is_clear()){
        step();
        }
        if (front_is_clear()){
          step();
        }
    }
    turn_left();
    if (front_is_blocked()){
      return;
    }
    step();
    turn_left();
  }
  if (facing_west()){
    while(front_is_clear()){
      put_beeper();
      if (front_is_clear()){
        step();
      }
      if (front_is_clear()){
        step();
      }
    }
    put_beeper();
    turn_right();
    if (front_is_blocked()){
      return;
    }
    step();
    turn_right();
  }
  chess_board();
}