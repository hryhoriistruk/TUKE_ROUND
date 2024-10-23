//
// Created by hryhorii on 21.10.24.
//
#include "superkarel.h"

void pick_all();

int main(){
  turn_on("task_1.kw");
  pick_all();


  turn_off();
  return 0;
}

void pick_all(){
  while(beepers_present()){
    pick_beeper();
    }
}