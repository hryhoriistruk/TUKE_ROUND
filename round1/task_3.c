//
// Created by hryhorii on 21.10.24.
//
#include "superkarel.h"

bool facing_vertical();

int main(){
    turn_on("task_2.kw");
    turn_off();
    return 0;
}
bool facing_vertical(){
  if (facing_south() && facing_north()){

    return true;
  }
  else{
    return false;
  }
}