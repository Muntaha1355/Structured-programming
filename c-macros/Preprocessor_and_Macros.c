#include <stdio.h>


// User defined header file example
// #include "myfile.h"



// Create Macro with value

#define PI 3.14


// Create Macro with parameter

#define SQUARE(x) ((x) * (x))


// Conditional Compilation

#define DEBUG


int main()
{
    // Using PI macro
    printf("Value of PI: %.2f\n", PI);


    // Using SQUARE macro
    printf("Square of 4: %d\n", SQUARE(4));


    // Using #ifdef
    #ifdef DEBUG
        printf("Debug mode is ON\n");
    #endif


    return 0;
}


/*
Output:

Value of PI: 3.14
Square of 4: 16
Debug mode is ON

*/