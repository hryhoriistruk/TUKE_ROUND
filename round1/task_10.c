//
// Created by hryhorii on 22.10.24.
//
#include "superkarel.h"

void turn_right();
void find_center();
bool check();

int main() {
    turn_on("task_10.kw");
    set_step_delay(100);
    find_center();
    turn_off();

    return 0;
}

void turn_right() {
  turn_left();
  turn_left();
  turn_left();
}

void find_center() {
  while(not_facing_south()){
    turn_left();
  }
  while(front_is_clear()){
    step();
  }
  turn_right();
  while(front_is_clear()){
    step();
    }
    turn_left();
    turn_left();
    put_beeper();
    while(front_is_clear()){
      step();
    }
    put_beeper();
    turn_left();
    turn_left();
    while(1){
      step();
      if(check()){
        break;
        }
        while(no_beepers_present()){
          step();
        }
        turn_left();
        turn_left();
        step();
        put_beeper();
    }
    while(not_facing_north()){
      turn_left();
    }
  put_beeper();
  while(front_is_clear()){
    step();
  }
  put_beeper();
  turn_left();
  turn_left();
  while(1){
    step();
    if(check()){
      break;
    }
    while(no_beepers_present()){
      step();
    }
    turn_left();
    turn_left();
    step();
    put_beeper();
  }
  put_beeper();
  put_beeper();
  while(not_facing_south()){
    turn_left();
  }
  while(front_is_clear()){
    step();
  }
  turn_right();
  while(front_is_clear()){
    step();
  }
  turn_left();
  turn_left();
  while(1){
    while(front_is_clear()){
      if(beepers_present()){
        pick_beeper();
      }
      step();
    }
    if(beepers_present()){
      pick_beeper();
    }
    if(facing_east()){
      turn_left();
      if(front_is_blocked()){
        break;
       }
       step();
       turn_left();
    }
    else{
      turn_right();
      if(front_is_blocked()){
        break;
      }
      step();
      turn_right();
    }
  }
  while(not_facing_south()){
    turn_left();
  }
  while(front_is_clear()){
    step();
  }
  turn_right();
  while(1){
    while(front_is_clear()){
      if(beepers_present()){
        pick_beeper();
        return;
      }
      step();
    }
    if(beepers_present()){
      pick_beeper();
      return;
    }
    if(facing_east()){
      turn_left();
      if(front_is_blocked()){
        break;
      }
      step();
      turn_left();
    }
    else{
      turn_right();
      if(front_is_blocked()){
        break;
      }
      step();
      turn_right();
    }
  }
}
bool check(){
  step();
  if(beepers_present()){
    turn_left();
    turn_left();
    step();
    turn_left();
    turn_left();
    return true;

  }else{
    turn_left();
    turn_left();
    step();
    turn_left();
    turn_left();
    return false;
    }
}