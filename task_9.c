//
// Created by hryhorii on 22.10.24.
//
#include "superkarel.h"

bool no_beepers();

int main() {
    turn_on("task_9.kw");
    no_beepers();
    turn_off();

    return 0;
}
bool no_beepers(){
  if (beepers_present() && beepers_in_bag()) {
    return true;
    } else {
      return false;
    }

}