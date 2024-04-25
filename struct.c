#include <stdio.h>
#include <string.h>


struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};


int main() {
    // Structures (also called structs) are a way to group several related variables into one place.
    // Each variable in the structure is known as a member of the structure.
    // Unlike an array, a structure can contain many different data types (int, float, char, etc.).

    struct myStructure s1;
    struct myStructure s2;
    s1.myNum = 13;
    s1.myLetter = 'B';
    strcpy(s1.myString, "Some text");
    s2.myNum = 20;
    s2.myLetter = 'C';
    strcpy(s2.myString, "Some text again");
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My string: %s\n", s1.myString);

    //You can also assign values to members of a structure variable at declaration time, in a single line.
    struct myStructure s3 = {13, 'B', "Some text 3"};
    printf("s3.myNum: %d, s3.myLetter: %c, s3.myString: %s\n", s3.myNum, s3.myLetter, s3.myString);

    //copy values to new struct
    struct myStructure s4;
    s4 = s3;
    printf("%d %c %s\n", s4.myNum, s4.myLetter, s4.myString);

    //modify values
    s4.myLetter = 'D';
    strcpy(s4.myString, "Something else");
    printf("s3.myNum: %d, s3.myLetter: %c, s3.myString: %s\n", s3.myNum, s3.myLetter, s3.myString);
    printf("s4.myNum: %d, s4.myLetter: %c, s4.myString: %s\n", s4.myNum, s4.myLetter, s4.myString);



    return 0;
} 