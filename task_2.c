//
// Created by hryhorii on 21.10.24.
//
#include "superkarel.h"

int main(){
  turn_on("task_2.kw");
  while(not_facing_south()){
    turn_left();
   }
   while(front_is_clear()){
     step();
   }
   turn_left();
   while(front_is_clear()){
     step();
   }
  turn_off();
  return 0;
}