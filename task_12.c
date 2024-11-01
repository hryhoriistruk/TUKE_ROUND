//
// Created by hryhorii on 22.10.24.
//
#include "superkarel.h"


void mark_empty_line() {
  while(front_is_clear()){
    put_beeper();
    step();
  }
  put_beeper();
}