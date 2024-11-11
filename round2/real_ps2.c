//
// Created by hryhorii on 03.11.24.
//

#include <stdio.h>
#include <string.h>

int is_white(const char c){
    if(c=='\n' || c=='\t' || c==' '){
        return 1;
    }
    return 0;
}

void chainge_whites(char string[]){
    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == ' ' || string[i] == '\n'){
            string[i] = '.';
        }
    }
}

int guess_eval(const int guess, const int my_number){
    if(my_number == guess){
        return 1;
    }
    else if(my_number < guess){
        return 0;
    }
    else if(my_number > guess){
        return 2;
    }
}


int count_positives(const int size, const int array[]){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(array[i] > 0){
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

int all_positives(const int size, const int array[]){
    if(array == NULL){
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        if(array[i] <= 0){
            return 0;
        }
    }
    return 1;
}

int last_positive(const int size, const int array[]){
    int cur_last_positive = -1;
    for(int i = 0; i < size; i++){
        if(array[i] > 0){
            cur_last_positive = array[i];
        }
    }
    return cur_last_positive;
}

int binary_num(const int num){
    if(num == 1 || num == 0){
        return 1;
    }
    if(num < -1000 || num > 1000){
        return -1;
    }
    if(num < 0){
        return 0;
    }
    return 0;
}
void swap_sign(const int size, int array[]){
    if(array == NULL){
            return;
    }
    for (int i = 0; i < size; i++)
    {

        //array[i] =  array[i] * -1;
        array[i] *= -1;
    }
}




int main(){

  return 0;
}