#include <stdio.h>

int main() {
    int myNumbers[] = {10, 25, 50, 75, 100};
    printf("%lu\n", sizeof(myNumbers)); // Prints 20

    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("%d\n", length);  // Prints 5

    for (int i = 0; i < length; i++) {
        printf("%d\n", myNumbers[i]);
    }

    return 0;
} 