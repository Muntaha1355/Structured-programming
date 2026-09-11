#include <stdio.h>

int main() {

    // Create variables of different data types
    int myNum = 15;          // Integer number
    float myFloatNum = 5.99; // Floating point number
    char myLetter = 'D';     // Character


    // Print variables using format specifiers
    printf("%d\n", myNum);        // %d is used for integer
    printf("%f\n", myFloatNum);   // %f is used for float
    printf("%c\n", myLetter);     // %c is used for character


    // Combine text and variable
    printf("My favorite number is: %d\n", myNum);


    // Print different types in one printf() function
    printf("My number is %d and my letter is %c", myNum, myLetter);


    return 0;
}