#include <stdio.h>

int main() {
    // Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
    // To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].
    // To insert values to it, use a comma-separated list, inside curly braces: 

    int myNumbers[] = {25, 50, 75, 100};

    // To access an array element, refer to its index number.
    // Array indexes start with 0: [0] is the first element. [1] is the second element, etc.
    // This statement accesses the value of the first element [0] in myNumbers:
    printf("%d\n", myNumbers[0]);

    // To change the value of a specific element, refer to the index number:
    myNumbers[0] = 33;
    printf("%d\n", myNumbers[0]);


    // You can loop through the array elements with the for loop.
    // The following example outputs all elements in the myNumbers array:
    for (int i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }

    // Another common way to create arrays, is to specify the size of the array, and add elements later:
    int myNumbers2[4];

    // Add elements
    myNumbers2[0] = 25;
    myNumbers2[1] = 50;
    myNumbers2[2] = 75;
    myNumbers2[3] = 100;

    return 0;
} 