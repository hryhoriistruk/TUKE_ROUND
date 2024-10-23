//
// Created by hryhorii on 21.10.24.
//
#include "superkarel.h"



void find_south_east(){
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
}