#include <stdio.h>
#include <stdbool.h>

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
int vowels_count_2d(const int rows, const int cols, char strings[][cols]) {
    if (strings == NULL) {
        return -1;
    }

    int count = 0;
    const char vowels[] = "AEIOUaeiou";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            char ch = strings[i][j];

            for (int k = 0; vowels[k] != '\0'; k++) {
                if (ch == vowels[k]) {
                    count++;
                    break;
                }
            }
        }
    }

    return count;
}
int is_in_array_2d(int num, int size, int array[][size]) {
    if (array == NULL) {
        return 0;
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

int largest_line(int size, int array3[size][size]) {
    int largest_value = array3[0][0];
    int largest_index = 0;

    for (int i = 0; i < size; i++) {
        int row_max = array3[i][0];
        for (int j = 1; j < size; j++) {
            if (array3[i][j] > row_max) {
                row_max = array3[i][j];
            }
        }
        if (row_max > largest_value) {
            largest_value = row_max;
            largest_index = i;
        }
    }

    return largest_index;
}
void swap_case_2d(int rows, int cols, char strings[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (strings[i][j] >= 'A' && strings[i][j] <= 'Z') {
                strings[i][j] += 'a' - 'A';
            } else if (strings[i][j] >= 'a' && strings[i][j] <= 'z') {
                strings[i][j] -= 'a' - 'A';
            }
        }
    }
}
int largest_col(int size, int array[size][size]) {
    int largest_sum = 0;
    int largest_index = 0;

    for (int j = 0; j < size; j++) {
        int col_sum = 0;
        for (int i = 0; i < size; i++) {
            col_sum += array[i][j];
        }
        if (col_sum > largest_sum) {
            largest_sum = col_sum;
            largest_index = j;
        }
    }

    return largest_index;
}

int count_zeroes_2d(int size, int array6[size][size]) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array6[i][j] == 0) {
                count++;
            }
        }
    }

    return count;
}
void swap_sign_2d(int size, int array[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i][j] > 0) {
                array[i][j] = -array[i][j];
            } else if (array[i][j] < 0) {
                array[i][j] = -array[i][j];
            }
        }
    }
}



int main() {
    int array[2][2] = {{1,2}, {0,-3}};
    printf("%d\n", max_2d(2, array));
    // 2
    char strings[3][50] = {"hello WORLD!", "AHOJ", "Ahoj"};
    printf("%d\n", vowels_count_2d(3, 50, strings));
    // 7
    int array10[2][2] = {{1, 0}, {0, -3}};
    printf("%d %d\n", is_in_array_2d(2, 2, array10), is_in_array_2d(-3, 2, array10));
     // 0 1
    int array3[2][2] = {{1,0}, {0,-3}};
    printf("%d\n", largest_line(2, array3));
    // 0
    int array4[2][2] = {{1,0}, {0,-3}};
    printf("%d\n", largest_col(2, array));
    // 0
    int array6[2][2] = {{1, 0}, {-3, 0}};


    printf("%d\n", count_zeroes_2d(2, array6));
}
