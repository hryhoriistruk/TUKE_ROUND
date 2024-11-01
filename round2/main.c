//
// Created by hryhorii on 01.11.24.
//
#include <stdio.h>

#include <ctype.h>
int is_white(const char c);

void change_whites(char string[]);

int guess_eval(const int guess, const int my_number);

int count_positives(const int size, const int array[]);

int count_whites(const char string[]);

int direction_correction(const int degree);

int last_positive(const int size, const int array[]);

int leap_year(const int year);

int all_positives(const int size, const int array[]);

int binary_num(const int num);

void swap_sign(const int size, int array[]);

int div_by_3(const int num);

int same_case(const char a, const char b);
// Returns 1 if character is whitespace, 0 otherwise
int is_white(const char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

// Changes whitespace characters to dots
void change_whites(char string[]) {
    if (string == NULL) return;

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ' || string[i] == '\t' || string[i] == '\n') {
            string[i] = '.';
        }
    }
}

// Evaluates a guess against the target number
int guess_eval(const int guess, const int my_number) {
    if (guess == my_number) return 1;
    else if (my_number > guess) return 2;
    else return 0;
}

// Counts positive numbers in an array
int count_positives(const int size, const int array[]) {
    if (array == NULL) return -1;

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) count++;
    }
    return count;
}

// Counts whitespace characters in a string
int count_whites(const char string[]) {
    if (string == NULL) return -1;

    int count = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ' || string[i] == '\t' || string[i] == '\n') {
            count++;
        }
    }
    return count;
}

// Corrects robot direction based on rules
int direction_correction(const int degree) {
    if (degree < 0 || degree % 90 != 0) return -1;

    int normalized = degree % 360;
    return normalized;
}

// Finds the last positive number in an array
int last_positive(const int size, const int array[]) {
    if (array == NULL) return -1;

    for (int i = size - 1; i >= 0; i--) {
        if (array[i] > 0) return array[i];
    }
    return -1;
}

int leap_year(const int year) {
    // Check for invalid range (less than 1 or greater than 4443)
    if (year < 1 || year > 4443) {
        return -1;
    }

    // Rules are applied in order of precedence:
    // 1. Every 400th year IS a leap year (highest precedence)
    // 2. Every 100th year is NOT a leap year
    // 3. Every 4th year IS a leap year
    // 4. All other years are NOT leap years

    // Rule 1: If divisible by 400, it IS a leap year
    if (year % 400 == 0) {
        return 1;
    }

    // Rule 2: If divisible by 100, it is NOT a leap year
    if (year % 100 == 0) {
        return 0;
    }

    // Rule 3: If divisible by 4, it IS a leap year
    if (year % 4 == 0) {
        return 1;
    }

    // Rule 4: All other years are NOT leap years
    return 0;
}
int all_positives(const int size, const int array[]) {
    if (array == NULL) return -1;

    for (int i = 0; i < size; i++) {
        if (array[i] <= 0) return 0;
    }
    return 1;
}
int binary_num(const int num) {
    // Check if number is within valid range (-1000 < num < 1000)
    if (num <= -1000 || num >= 1000) {
        return -1;
    }

    // Check if number is 0 or 1
    if (num == 0 || num == 1) {
        return 1;
    }

    // Number is within range but not 0 or 1
    return 0;
}
void swap_sign(const int size, int array[]) {
    if (array == NULL) return;

    for (int i = 0; i < size; i++) {
        array[i] = -array[i];
    }
}
int div_by_3(const int num) {
    return num % 3 == 0 ? 1 : 0;
}

int same_case(const char a, const char b) {
    // Check if both inputs are letters
    if (!isalpha(a) || !isalpha(b)) {
        return -1;
    }

    // Check if both are uppercase or both are lowercase
    if ((isupper(a) && isupper(b)) || (islower(a) && islower(b))) {
        return 1;
    }

    // One is uppercase and one is lowercase
    return 0;
}

int main() {

    // Test is_white function

    char test_char = ' ';

    printf("is_white('%c'): %d\n", test_char, is_white(test_char));


    // Test change_whites function

    char test_string[] = "Hello World!\nThis is a test.";

    change_whites(test_string);

    printf("change_whites: %s\n", test_string);


    // Test guess_eval function

    int guess = 5, my_number = 10;

    printf("guess_eval(%d, %d): %d\n", guess, my_number, guess_eval(guess, my_number));


    // Test count_positives function

    int array1[] = {-1, 2, 3, -4, 5};

    printf("count_positives: %d\n", count_positives(5, array1));


    // Test count_whites function

    char white_string[] = "Hello World!";

    printf("count_whites: %d\n", count_whites(white_string));


    // Test direction_correction function

    int degree = 450;

    printf("direction_correction(%d): %d\n", degree, direction_correction(degree));


    // Test last_positive function

    int array2[] = {-1, -2, 3, 4, -5};

    printf("last_positive: %d\n", last_positive(5, array2));


    // Test leap_year function

    int year = 2020;

    printf("leap_year(%d): %d\n", year, leap_year(year));


    // Test all_positives function

    int array3[] = {1, 2, 3, 4, 5};

    printf("all_positives: %d\n", all_positives(5, array3));


    // Test binary_num function

    int num = 1;

    printf("binary_num(%d): %d\n", num, binary_num(num));


    // Test swap_sign function

    int array4[] = {1, -2, 3, -4};

    swap_sign(4, array4);

    printf("swap_sign: ");

    for (int i = 0; i < 4; i++) {

        printf("%d ", array4[i]);

    }

    printf("\n");


    // Test div_by_3 function

    int number = 9;

    printf("div_by_3(%d): %d\n", number, div_by_3(number));


    // Test same_case function

    char a = 'A', b = 'B';

    printf("same_case('%c', '%c'): %d\n", a, b, same_case(a, b));


    return 0;

}