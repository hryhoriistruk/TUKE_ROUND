//
// Created by hryhorii on 22.10.24.
//
#include "superkarel.h"



void turn_to_south() {
  while (not_facing_south()){
    turn_left();
  }
}