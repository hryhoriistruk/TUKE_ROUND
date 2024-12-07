#include <stdio.h>
#include <ctype.h>

int max_2d(const int size, int array[][size]){
    if(array == NULL){
        return -1;
    }
    int max = array[0][0];
    for (int i = 0; i < 4; i++)
    {/*  */
        for (int j = 0; j < 4; j++)
        {
            if(max < array[i][j]){
                max = array[i][j];
            }
        }
    }
    return max;
}


int vowels_count_2d(const int rows, const int cols, char string[][cols]){
    if(string == NULL){
        return -1;
    }
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(string[i][j] == 'a' || string[i][j] == 'A' || string[i][j] == 'i' || string[i][j] == 'I' || string[i][j] == 'o' || string[i][j] == 'O' || string[i][j] == 'e' || string[i][j] == 'E' || string[i][j] == 'u' || string[i][j] == 'U'){
                count++;
            }
        }
    }
    return count;
}

int is_in_array_2d(const int num, const int size, int array[][size]){
    if(array == NULL){
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(num == array[i][j]){
                return 1;
            }
        }
    }
    return 0;
}

int largest_line(const int size, int array[][size]){
    if(array == NULL){
        return -1;
    }

    int k = 0;
    int return_index;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            count = count + array[i][j];
        }
        if(i == 0){
            k = count;
            return_index = 0;
        }
        else{
            if(k < count){
                k = count;
                return_index = i;
            }
        }

    }
    return return_index;
}

void swap_case_2d(const int size, char array[][size]){
    if(array == NULL){
        return;
    }
    int temp = 10;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(isalpha){
                if(isupper(array[i][j])){
                    array[i][j] = tolower(array[i][j]);
                }
                else{
                    array[i][j] = toupper(array[i][j]);
                }
            }
        }
    }
}

int largest_col_2d(int size, int array[][size]){
    if(array == NULL){
        return -1;
    }
    int biggest = 0;
    int biggest_col_index = 0;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = 0; j < size; j++)
        {
            sum = sum + array[j][i];
        }
        if(biggest < sum){
            biggest = sum;
            biggest_col_index = i;
        }
    }
    return biggest_col_index;
}


int main(){
    int array[4][4] =   {
            {1, 2, 30, 4},
            {2, 5, 3, 4},
            {3, 20, 3, 40},
            {4, -1, -3, 44}
    };
    char vowels[6][6] = {
            "AAAAAA",
            "aaddaa",
            "aadda-",
            "UeddiO",
            "aaddio",
            "aaddio",
    };
    printf("max value in 2d array: %d\n", max_2d(4, array));
    printf("vowels count: %d\n", vowels_count(6, 6, vowels));
    printf("is_is_array_2d: %d\n", is_in_array_2d(10, 4, array));
    printf("largest line: %d", largest_line(4, array));
    int size = 6;
    swap_case_2d(size, vowels);
    printf("Swap case 2d:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%c", vowels[i][j]);
        }
        printf("\n");
    }
    printf("Largest col 2d: %d\n", largest_col_2d(4, array));
}

