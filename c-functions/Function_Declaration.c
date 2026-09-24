#include <stdio.h>


// 1. Function Declaration

void myFunction();


// 2. Function Declaration with Parameters

int addNumbers(int x, int y);


// 3. Function Declaration for Function Calling Other Function

void secondFunction();
void firstFunction();



int main()
{

    // Calling normal function

    myFunction();


    // Calling function with parameters

    int result = addNumbers(5, 3);

    printf("Result is: %d\n", result);



    // Calling one function which calls another function

    firstFunction();



    return 0;
}



// Function Definition

void myFunction()
{
    printf("I just got executed!\n");
}



// Function Definition with Parameters

int addNumbers(int x, int y)
{
    return x + y;
}



// Function Calling Another Function

void firstFunction()
{
    printf("Some text in firstFunction\n");

    secondFunction();
}



void secondFunction()
{
    printf("Some text in secondFunction\n");
}


/*
Output:

I just got executed!
Result is: 8
Some text in firstFunction
Some text in secondFunction

*/