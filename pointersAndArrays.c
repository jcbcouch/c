#include <stdio.h>

int main() {
    int myNumbers[4] = {25, 50, 75, 100};

    // let's print the memory address of each array element
    // Note that the last number of each of the elements' memory address is different, with an addition of 4.
    // It is because the size of an int type is typically 4 bytes
    for (int i = 0; i < 4; i++) {
        printf("%p\n", &myNumbers[i]);
    }
    // the compiler reserves 4 bytes of memory for each array element, which means that the entire array takes up 
    // 16 bytes (4 * 4) of memory storage:
    printf("%lu\n", sizeof(myNumbers[0]));
    printf("%lu\n", sizeof(myNumbers));

    // The memory address of the first element is the same as the name of the array:
    // Get the memory address of the myNumbers array
    printf("%p\n", myNumbers);
    // Get the memory address of the first array element
    printf("%p\n", &myNumbers[0]);

    // Get the value of the first element in myNumbers
    printf("%d\n", *myNumbers);

    // To access the rest of the elements in myNumbers, you can increment the pointer/array (+1, +2, etc):
    // Get the value of the second element in myNumbers
    printf("%d\n", *(myNumbers + 1));
    // Get the value of the third element in myNumbers
    printf("%d\n", *(myNumbers + 2));


    int *ptr = myNumbers;
    for (int i = 0; i < 4; i++) {
        printf("%d\n", *(ptr + i));
    }


    // Change the value of the first element to 13
    *myNumbers = 13;
    // Change the value of the second element to 17
    *(myNumbers +1) = 17;
    // Get the value of the first element
    printf("%d\n", *myNumbers);
    // Get the value of the second element
    printf("%d\n", *(myNumbers + 1));


    return 0;
} 