#include <superkarel.h>

void pick_all() {
  while(beepers_present()) {
    pick_beeper();
  }
}

void find_south_east() {
  while(!facing_east()) turn_left();
  while(front_is_clear()) step();
  while(!facing_south()) turn_left();
  while(front_is_clear()) step();
}

bool facing_vertical() {
  return facing_north() || facing_south();
}

void climb_stairs() {
  while(front_is_clear()) step();
  while(1) {
    turn_left();
    while(right_is_blocked()) {
      step();
    }
    turn_left();
    turn_left();
    turn_left();
    do {
      step();
      if(right_is_clear()) break;
      while(beepers_present()) pick_beeper();
    } while(front_is_clear());
    if(right_is_clear()) break;
  }
  turn_left();
  turn_left();
  step();
  turn_left();
  turn_left();
}

void olympics() {
  while(!facing_east()) turn_left();
  while(front_is_clear()) step();

  while(!beepers_present()) {
    turn_left();
    if(front_is_blocked()) turn_left();
    while(right_is_blocked()) {
      step();
      if(beepers_present()) return;
    }
    turn_left();
    turn_left();
    turn_left();
    do {
      step();
      if(beepers_present()) return;
    } while(right_is_blocked());
    turn_left();
    turn_left();
    turn_left();
    do {
      step();
      if(beepers_present()) return;
    } while(front_is_clear());
  }
}

void chessboard() {
  while(front_is_clear()) {
    step();
    put_beeper();
    if(front_is_clear()) {
      step();
      if(front_is_blocked()) {
        if(facing_east()) {
          turn_left();
        }
        else {
          turn_left();
          turn_left();
          turn_left();
        }
        if(front_is_blocked()) return;
        if(beepers_present()) {
          step();
          if(right_is_blocked()) { 
            turn_left();
          }
          else {
            turn_left();
            turn_left();
            turn_left();
          }
        }
      }
    } else {
      if(facing_east()) { 
        turn_left(); 
      }
      else {
        turn_left();
        turn_left();
        turn_left();
      }
      if(front_is_blocked()) return;
      if(beepers_present()) {
        step();
        if(right_is_blocked()) { 
          turn_left(); 
        }
        else {
          turn_left();
          turn_left();
          turn_left();
        }
      }
    }
  }
}

void x_mas() {
  turn_left();
  step();
  turn_left();
  turn_left();
  turn_left();
  while(right_is_clear() ) {
    step();
    if(front_is_blocked()) {
      turn_left();
      turn_left();
      turn_left();
      step();
      turn_left();
    }
  }
  while(right_is_blocked()) {
    put_beeper();
    turn_left();
    step();
    turn_left();
    turn_left();
    turn_left();
    step();
  }
  put_beeper();
  put_beeper();
  do {
    step();
    turn_left();
    turn_left();
    turn_left();
    if(front_is_blocked()) {
      turn_left();
      turn_left();
      turn_left();
      step();
      pick_beeper();
      turn_left();
      turn_left();
      while(!front_is_blocked()) {
        step();
      }
      return;
    }
    step();
    turn_left();
    put_beeper();
  } while(right_is_blocked());
}

void divide_even_beepers() {
  if(!beepers_present() && !beepers_in_bag()) {
    step();
  }
  pick_beeper();
  if(beepers_present()) {
    divide_even_beepers();
  }


  put_beeper();
  step();
  put_beeper();
  turn_left();
  turn_left();
  step();
  if(!beepers_in_bag()) {
    step();
    turn_left();
    turn_left();
    turn_off();
  }
  turn_left();
  turn_left();
}

bool no_beepers() {
  return !beepers_in_bag() && !beepers_present();
}

void find_center() {
  while(!beepers_present()) {
    put_beeper();
    while(front_is_clear()) {
      step();
      if(beepers_present()) {
        turn_left();
        turn_left();
        step();
        put_beeper();
        step();
        if(beepers_present()) {
          while(front_is_clear()) {
            if(beepers_present()) pick_beeper();
            step();
          } 
          if(beepers_present()) pick_beeper();
          turn_left();
          turn_left();
          while(!beepers_present()) {
            step();
          }
          step();
          while(beepers_present()) {
            pick_beeper();
            if(front_is_clear()) step();
          }
          turn_left();
          turn_left();
          while(!beepers_present()) {
            step();
          }
          pick_beeper();
          turn_left();
          turn_left();
          turn_left();
          return;
        }
      }
    }
    if(front_is_blocked()) {
      turn_left();
      turn_left();
      put_beeper();
      step();
    }
  }
}

void turn_to_south() {
  while(!facing_south()) turn_left();
}

void mark_empty_line() {
  while(front_is_clear()) {
    step();
    if(!beepers_present()) put_beeper();
  }
  turn_left();
  turn_left();
  while(front_is_clear()) {
    step();
    if(!beepers_present()) put_beeper();
  }
}

void move_beepers(){
  
  if(beepers_present()){
    pick_beeper();
    while(front_is_clear()){
      step();
    }
    put_beeper();
    turn_left();
    turn_left();
    while(front_is_clear()){
      step();
    }
    turn_left();
    turn_left();
  
  move_beepers();
  } 
  while(front_is_clear()){
    step();

  }
  
  
  
}


void find_north_west() {
  while(not_facing_west()){
    turn_left();
  }
    while(front_is_clear()){
      step();
    }
  
  while(not_facing_north()){
    turn_left();
  }
  while(front_is_clear()){
      step();
    }
while(not_facing_east()){
  turn_left();
}
}

int main() {
  set_step_delay(10);
  turn_on("find_center.kw");
  find_center();
  turn_off();
  return 0;
}