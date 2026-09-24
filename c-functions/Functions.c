#include <stdio.h>


// Create a Function
void myFunction()
{
    printf("I just got executed!\n");
}


// Calculate the Sum of Numbers
void calculateSum()
{
    int x = 5;
    int y = 10;

    int sum = x + y;

    printf("The sum of x + y is: %d\n", sum);
}


int main()
{
    // Predefined Function
    printf("Hello World!\n");


    // Call Function
    myFunction();


    // Function called multiple times
    myFunction();
    myFunction();
    myFunction();


    // Call calculateSum function
    calculateSum();


    return 0;
}


/*

Output:

Hello World!
I just got executed!
I just got executed!
I just got executed!
I just got executed!
The sum of x + y is: 15

*/