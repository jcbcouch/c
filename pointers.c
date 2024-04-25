#include <stdio.h>

int main() {

    // A pointer is a variable that stores the memory address of another variable as its value.
    // A pointer variable points to a data type (like int) of the same type, and is created with the * operator.
    // The address of the variable you are working with is assigned to the pointer:


    int myAge = 43;     // An int variable
    int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

    // Output the value of myAge (43)
    printf("%d\n", myAge);

    // Output the memory address of myAge
    printf("%p\n", &myAge);

    // Output the memory address of myAge with the pointer
    printf("%p\n", ptr);

    // You can also get the value of the variable the pointer points to, by using the * operator (the dereference operator):

    // Dereference: Output the value of myAge with the pointer (43)
    printf("%d\n", *ptr);



    // Good To Know: There are two ways to declare pointer variables in C:
    int* myNum2;
    int *myNum3;

    return 0;
} 