#include <stdio.h>
#include <string.h>
#include <stdlib.h>


const char* myName() {
  return "jacob";
}

const char* myName2() {
  char *name = "jacob";
  return name;
}

void myName3(char *s)
{
  strcpy(s, "jacob");
}

char *myName4()
{
  char *string = malloc(6);
  strcpy(string, "jacob");
  return string;
}


int main() {
    const char* name = myName();
    printf("%s\n", name);

    printf("%s\n", myName2());

    char myString[256];
    myName3(myString);
    printf("%s\n", myString);

    char *dynamic = myName4();
    printf("%s\n", dynamic);
    free(dynamic);

    return 0;
} 