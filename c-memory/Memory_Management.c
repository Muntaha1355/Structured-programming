#include <stdio.h>

int main()
{
    // Memory allocation for different data types
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;


    // Finding memory size using sizeof()

    printf("Memory size of int: %zu bytes\n", sizeof(myInt));

    printf("Memory size of float: %zu bytes\n", sizeof(myFloat));

    printf("Memory size of double: %zu bytes\n", sizeof(myDouble));

    printf("Memory size of char: %zu byte\n", sizeof(myChar));


    // Checking memory size directly by data type

    printf("\nUsing Data Types:\n");

    printf("int uses %zu bytes\n", sizeof(int));

    printf("float uses %zu bytes\n", sizeof(float));

    printf("double uses %zu bytes\n", sizeof(double));

    printf("char uses %zu byte\n", sizeof(char));


    return 0;
}


/*
Output:

Memory size of int: 4 bytes
Memory size of float: 4 bytes
Memory size of double: 8 bytes
Memory size of char: 1 byte

Using Data Types:
int uses 4 bytes
float uses 4 bytes
double uses 8 bytes
char uses 1 byte

*/