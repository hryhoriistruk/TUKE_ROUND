#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int max_2d(const int size, int array[][size]) {
  if (array == NULL) {
    return -1;
  }

  int max = array[0][0];
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (array[i][j] > max) {
        max = array[i][j];
      }
    }
  }
  return max;
}

bool contains_char_2d(char array[], char value) {
  if (array == NULL) {
    return false;
  }

  for (int i = 0; i < strlen(array); i++) {
    if (array[i] == value) {
      return true;
    }
  }
  return false;
}

int vowels_count_2d(const int rows, const int cols, char string[][cols]) {
  if (string == NULL) {
    return -1;
  }

  int count = 0;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (contains_char_2d("aeiouAEIOU", string[i][j])) {
        count++;
      }
    }
  }
  return count;
}

int is_in_array_2d(const int num, const int size, int array[][size]) {
  if (array == NULL) {
    return -1;
  }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (array[i][j] == num) {
        return 1;
      }
    }
  }
  return 0;
}

int largest_line(const int size, int array[][size]) {
  if (array == NULL) {
    return -1;
  }

  int max_sum = NULL;
  int max_line_index = 0;

  for (int i = 0; i < size; i++) {
    int sum = 0;
    for (int j = 0; j < size; j++) {
      sum += array[i][j];
    }
    if (max_sum == NULL) {
      max_sum = sum;
    }
    else if (sum > max_sum) {
      max_sum = sum;
      max_line_index = i;
    }
  }

  return max_line_index;
}

void swap_case_2d(const int rows, const int cols, char string[][cols]) {
  if (string == NULL) {
    return;
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (isalpha(string[i][j])) {
        string[i][j] = islower(string[i][j]) ? toupper(string[i][j]) : tolower(string[i][j]);
      }
    }
  }
}

int largest_col(const int size, int array[][size]) { // РўРµ СЃР°РјРµ, С‰Рѕ С– largest_line, Р°Р»Рµ РїРѕРјС–РЅСЏРЅС– Р»РёС€Рµ РґРІР° СЃРёРјРІРѕР»Рё
  if (array == NULL) {
    return -1;
  }

  int max_sum = NULL;
  int max_col_index = 0;
  for (int i = 0; i < size; i++) {
    int sum = 0;
    for (int j = 0; j < size; j++) {
      sum += array[j][i]; // [j][i] Р·Р°РјС–СЃС‚СЊ [i][j]
    }
    if (max_sum == NULL) {
      max_sum = sum;
    }
    else if (sum > max_sum) {
      max_sum = sum;
      max_col_index = i;
    }
  }
  return max_col_index;
}

int conunt_zeroes_2d(const int size, int array[][size]) {
  if (array == NULL) {
    return -1;
  }

  int count = 0;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (array[i][j] == 0) {
        count++;
      }
    }
  }
  return count;
}

void swap_sign_2d(const int size, int array[][size]) {
  if (array == NULL) {
    return;
  }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      array[i][j] = -array[i][j];
    }
  }
}

int main() {

  char strings[3][50] = {
    "hello WORL###D!",
    "aHOJ",
    "Ahoj"
  };
  printf("Vowels count: %d\n", vowels_count_2d(3, 50, strings));
  // 7

  int array[2][2] = { {1, 0}, {0, -3} };
  printf("%d %d\n", is_in_array_2d(100, 2, array), is_in_array_2d(1, 2, array));
  // 0 1

  printf("%d\n", largest_line(2, array));
  // 0

  swap_case_2d(3, 50, strings);
  for (int i = 0; i < 3; i++) {
    printf("%s\n", strings[i]);
  }

  printf("%d\n", largest_col(2, array));

  return 0;
}
