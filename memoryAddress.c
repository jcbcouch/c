#include <stdio.h>

int main() {
    // When a variable is created in C, a memory address is assigned to the variable.
    // The memory address is the location of where the variable is stored on the computer.
    // When we assign a value to the variable, it is stored in this memory address.
    // To access it, use the reference operator (&), and the result represents where the variable is stored:

    int myAge = 43;
    printf("%p", &myAge);

    // Note: The memory address is in hexadecimal form (0x..). You should also note that &myAge is often called a "pointer". 
    // A pointer basically stores the memory address of a variable as its value. To print pointer values, we use the %p format 
    // specifier. You will learn much more about pointers in the next chapter.

    return 0;
} 