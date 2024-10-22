//
// Created by hryhorii on 22.10.24.
//
#include "superkarel.h"

void mark_empty_line();

int main() {
    turn_on("task_12.kw");
    set_step_delay(100);
    mark_empty_line();
    turn_off();

    return 0;
}

void mark_empty_line() {
  while(front_is_clear()){
    put_beeper();
    step();
  }
  put_beeper();
}