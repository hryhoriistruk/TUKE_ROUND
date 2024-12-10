#include "superkarel.h"
//1
void pick_all(){
  while(beepers_present()){
    pick_beeper();
    }
}



//2
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




//3
bool facing_vertical(){
  if (facing_south() && facing_north()){

    return true;
  }
  else{
    return false;
  }
}



//4
void climb_stairs(){
  one_stairs();
  turn_left();
  turn_left();
  while(left_is_clear()){
    step();
  }
  turn_left();
  turn_left();
}
void turn_right(){
  turn_left();
  turn_left();
  turn_left();
}
void one_stairs(){
  turn_left();
  while(right_is_blocked()){
    while (beepers_present()){
      pick_beeper();
    }
    step();
  }
    turn_right();
    while(front_is_clear()){
      step();
      while (beepers_present()){
        pick_beeper();
      }
    }
    if(right_is_clear()){
      return;
      }
      else{
        one_stairs();
      }
}



//5
void olympics(){
  while(no_beepers_present()){
    if(right_is_blocked()){
      if(front_is_clear()){
        step();

      }else{
        turn_left();
        }
    }
    else{
      turn_right();
      step();
    }
  }
}

void turn_right(){
  turn_left();
  turn_left();
  turn_left();
}




//6
//void turn_right(){ функція відноситься до chess_board але може бути не потрібною
 // turn_left();
 // turn_left();
 // turn_left();

}
void chess_board(){
  if (facing_east()){
    step();
    while(front_is_clear()){
      put_beeper();
      if (front_is_clear()){
        step();
        }
        if (front_is_clear()){
          step();
        }
    }
    turn_left();
    if (front_is_blocked()){
      return;
    }
    step();
    turn_left();
  }
  if (facing_west()){
    while(front_is_clear()){
      put_beeper();
      if (front_is_clear()){
        step();
      }
      if (front_is_clear()){
        step();
      }
    }
    put_beeper();
    turn_right();
    if (front_is_blocked()){
      return;
    }
    step();
    turn_right();
  }
  chess_board();
}







//7
// void turn_right(){ функція віноситься до x_mas() може бути не потрібною
   // turn_left();
   // turn_left();
   // turn_left();
}

void x_mas(){
  while(front_is_clear()) {
    step();
  }
  turn_left();
  while(front_is_clear()) {
    step();
  }
  turn_left();
  while(right_is_blocked()){
    step();
  }
  turn_right();
  step();
  turn_right();
  step();
  while(1){
    put_beeper();
    turn_left();
    step();
    turn_right();
    while(right_is_clear()){
      step();
      }
      if (front_is_blocked()){
        put_beeper();
        break;
     }if (front_is_blocked()){
       break;
     }
  }
  turn_left();
  while(front_is_clear() && right_is_blocked()){
    step();
  }
  turn_right();
  step();
  put_beeper();
  put_beeper();
  step();
  turn_right();
  while(front_is_clear()){
    step();
  }
  turn_left();
  while(1){
    while(right_is_blocked()){
      if (front_is_blocked()){
        return;
      }
      step();
    }
    turn_left();
    turn_left();
    step();
    put_beeper();
    turn_left();
    turn_left();
    step();
    turn_right();
    step();
    turn_left();
  }
}





//8
// void turn_right(){ функція віноситься до void divide_even_beepers() і може бути не потрібною
   // turn_left();
   // turn_left();
   // turn_left();
// }

void divide_even_beepers(){
  step();
  while(beepers_present()){
    pick_beeper();
  }
  divide_beepers();
  while(not_facing_west()){
    turn_left();
  }
  while(beepers_present()){
    step();
  }
  turn_left();
  turn_left();

}
void divide_beepers(){
  put_beeper();
  step();
  put_beeper();
  turn_left();
  turn_left();
  if (beepers_in_bag()){
    divide_beepers();
  }
  else{
    return;
  }
}







//9

bool no_beepers(){
  if (beepers_present() && beepers_in_bag()) {
    return true;
    } else {
      return false;
    }

}






//10
// void turn_right() { //функція відноситься до void find_center() і може бути не потрібною
 // turn_left();
 // turn_left();
 // turn_left();
//}

void find_center() {
  while(not_facing_south()){
    turn_left();
  }
  while(front_is_clear()){
    step();
  }
  turn_right();
  while(front_is_clear()){
    step();
    }
    turn_left();
    turn_left();
    put_beeper();
    while(front_is_clear()){
      step();
    }
    put_beeper();
    turn_left();
    turn_left();
    while(1){
      step();
      if(check()){
        break;
        }
        while(no_beepers_present()){
          step();
        }
        turn_left();
        turn_left();
        step();
        put_beeper();
    }
    while(not_facing_north()){
      turn_left();
    }
  put_beeper();
  while(front_is_clear()){
    step();
  }
  put_beeper();
  turn_left();
  turn_left();
  while(1){
    step();
    if(check()){
      break;
    }
    while(no_beepers_present()){
      step();
    }
    turn_left();
    turn_left();
    step();
    put_beeper();
  }
  put_beeper();
  put_beeper();
  while(not_facing_south()){
    turn_left();
  }
  while(front_is_clear()){
    step();
  }
  turn_right();
  while(front_is_clear()){
    step();
  }
  turn_left();
  turn_left();
  while(1){
    while(front_is_clear()){
      if(beepers_present()){
        pick_beeper();
      }
      step();
    }
    if(beepers_present()){
      pick_beeper();
    }
    if(facing_east()){
      turn_left();
      if(front_is_blocked()){
        break;
       }
       step();
       turn_left();
    }
    else{
      turn_right();
      if(front_is_blocked()){
        break;
      }
      step();
      turn_right();
    }
  }
  while(not_facing_south()){
    turn_left();
  }
  while(front_is_clear()){
    step();
  }
  turn_right();
  while(1){
    while(front_is_clear()){
      if(beepers_present()){
        pick_beeper();
        return;
      }
      step();
    }
    if(beepers_present()){
      pick_beeper();
      return;
    }
    if(facing_east()){
      turn_left();
      if(front_is_blocked()){
        break;
      }
      step();
      turn_left();
    }
    else{
      turn_right();
      if(front_is_blocked()){
        break;
      }
      step();
      turn_right();
    }
  }
}
bool check(){
  step();
  if(beepers_present()){
    turn_left();
    turn_left();
    step();
    turn_left();
    turn_left();
    return true;

  }else{
    turn_left();
    turn_left();
    step();
    turn_left();
    turn_left();
    return false;
    }
}







//11
void turn_to_south() {
  while (not_facing_south()){
    turn_left();
  }
}





//12
void mark_empty_line() {
  while(front_is_clear()){
    put_beeper();
    step();
  }
  put_beeper();
}
