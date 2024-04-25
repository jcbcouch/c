#include <stdio.h>

int main() {

    
    // Names can contain letters, digits and underscores
    // Names must begin with a letter or an underscore (_)
    // Names are case-sensitive (myVar and myvar are different variables)
    // Names cannot contain whitespaces or special characters like !, #, %, etc.
    // Reserved words (such as int) cannot be used as names

    // int 	2 or 4 bytes 	Stores whole numbers, without decimals 	1
    // float 	4 bytes 	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits 	
    // double 	8 bytes 	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits 	
    // char 	1 byte 	    Stores a single character/letter/number, or ASCII values

    // %d or %i 	int 	
    // %f or %F 	float 	
    // %lf 	        double 	
    // %c 	        char 	
    // %s 	        strings

    int myNum = 15; 

    // Declare a variable
    int myNum2;
    // Assign a value to the variable
    myNum2 = 14; 
    printf("%d\n", myNum2);

    float myFloatNum = 5.99;
    char myLetter = 'D';
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter); 

    printf("My favorite number is: %d\n", myNum2);
    printf("My number is %d and my letter is %c\n", myNum, myLetter); 

    // if you are familiar with ASCII, you can use ASCII values to display certain 
    // characters. Note that these values are not surrounded by quotes (''), as they are numbers:
    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c); 

    return 0;
} 