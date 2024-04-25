#include <stdio.h>

int main() {
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
    //          column0  column1  column2
    // row 0    1        4        2
    // row 1    3        6        8

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\n", matrix[i][j]);
        }
    } 


    printf("%d", matrix[0][2]);  // Outputs 2

    matrix[0][0] = 9;
    printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1 
    

    return 0;
} 