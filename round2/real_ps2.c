//
// Created by hryhorii on 03.11.24.
//

#include <string.h>

int is_white(const char c){
  if(c=='\n'||c==' '||c=='\t'){

    return 1;

  }
  return 0;
}

void change_whites(char string[]){
  for (int i = 0; string[i] != '\0'; i++) {
    if (string[i] == '\n' || string[i] == ' ' ) {
      string[i] = '.';
      }
  }
}

int guess_eval(const int guess, const int my_number){
  if(my_number == guess){
    return 1;
  }
  else if(my_number > guess){
    return 2;
  }
  else if (my_number < guess){
    return 0;
  }
  return 0;

}

int laep_year(const int year){
  if(year<1||year>4443){
    return -1;
  }
  if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
    return 1;
  }
    return 0;
    }
int count_positives(const int size, const int array[]) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] > 0) {
      count++;
    }
  }
  return count;
}
int count_whites(const char string[]){
  int count = 0;
  for(int i = 0; i < strlen(string); i++){
    if(string[i] == ' ' || string[i] == '\t' || string[i] == '\n'){
      count++;
    }
  }
  return count;
}

int direction_correction(const int degree){
  int degree_1 = degree;
  if(degree < 0){
    return -1;
  }
  else{

  }
  while (degree_1 >= 360)
  {
    degree_1 = degree_1 - 360;
  }
  if(degree_1 % 90 != 0){
    return -1;
  }
  return degree_1;
}

int main(){

  return 0;
}