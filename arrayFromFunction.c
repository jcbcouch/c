#include <stdio.h>
#include <stdlib.h>


void set_array(int value, int *array) {
    for (int i = 0; i < 5; i++) {
        array[i] = value;
    }
}

int *set_array2(int value) {
    int *array = malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        array[i] = value;
    }
    return array;
}

int main() {

    int array[] = {1,2,3,4,5};
    set_array(4, array);
    for(int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    int *result = set_array2(3);
    for(int i = 0; i < 5; i++) {
        printf("result[%d] = %d\n", i, result[i]);
    }
    free(result);

   

    return 0;
} 