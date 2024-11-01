//
// Created by hryhorii on 21.10.24.
//
#include "superkarel.h"


bool facing_vertical(){
  if (facing_south() && facing_north()){

    return true;
  }
  else{
    return false;
  }
}