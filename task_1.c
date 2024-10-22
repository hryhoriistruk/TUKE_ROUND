//
// Created by hryhorii on 21.10.24.
//
#include "superkarel.h"

int main(){
  turn_on("task_1.kw");
  while(beepers_present()){
    pick_beeper();
  }

  turn_off();
  return 0;
}