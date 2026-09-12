#include <stdio.h>

int main()
{
    // Get memory size of different data types
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;


    // Print memory size in bytes
    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myFloat));
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(myChar));


    return 0;
}