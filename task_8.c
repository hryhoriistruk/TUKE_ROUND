//
// Created by hryhorii on 22.10.24.
//
#include "superkarel.h"

void turn_right();
void divide_even_beepers();
void divide_beepers();


int main(){
    turn_on("task_8.kw");
    divide_even_beepers();


    turn_off();

    return 0;
}

void turn_right(){
    turn_left();
    turn_left();
    turn_left();
}

void divide_even_beepers(){
  step();
  while(beepers_present()){
    pick_beeper();
  }
  divide_beepers();
  while(not_facing_west()){
    turn_left();
  }
  while(beepers_present()){
    step();
  }
  turn_left();
  turn_left();

}
void divide_beepers(){
  put_beeper();
  step();
  put_beeper();
  turn_left();
  turn_left();
  if (beepers_in_bag()){
    divide_beepers();
  }
  else{
    return;
  }
}