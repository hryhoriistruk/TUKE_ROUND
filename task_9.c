//
// Created by hryhorii on 22.10.24.
//
#include "superkarel.h"


bool no_beepers(){
  if (beepers_present() && beepers_in_bag()) {
    return true;
    } else {
      return false;
    }

}