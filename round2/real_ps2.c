//
// Created by hryhorii on 03.11.24.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
    return 0;
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
        array[i] *= -1;
    }
}

int div_by_3(const int num){
    if(num % 3 == 0){
        return 1;
    }
    return 0;
}

int same_case(const char a, const char b){
    if(!isalpha(a) || !isalpha(b)){
        return -1;
    }
    if((isupper(a) && isupper(b)) || (!isupper(a) && !isupper(b))){
        return 1;
    }
    return 0;
}

int find_first_A(const char string[]){
    if(string == NULL){
        return -1;
    }
    for(int i = 0; i < strlen(string);i++){
        if(string[i] == 'a' || string[i] == 'A'){
            return i;
        }
    }
    return -1;
}

void string_to_upper(char string[]){
    if(string == NULL){
        return;
    }

    for(int i = 0; i < strlen(string); i++){
        if(islower(string[i])){
            string[i] = toupper(string[i]);
        }
    }
}

int is_prime(const int num){
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}




int main(){

  return 0;
}