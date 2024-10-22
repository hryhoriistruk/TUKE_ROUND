//
// Created by hryhorii on 22.10.24.
//
#include "superkarel.h"

void turn_to_south();

int main() {
    turn_on("task_10.kw");
    set_step_delay(100);
    turn_to_south();
    turn_off();

    return 0;
}

void turn_to_south() {
  while (not_facing_south()){
    turn_left();
  }
}