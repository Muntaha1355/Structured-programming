#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Common Compile-Time Errors

    // 1) Missing semicolon error fixed
    int x = 5;
    printf("Value of x: %d\n", x);


    // 2) Undeclared variable error fixed
    int myVar = 10;
    printf("myVar value: %d\n", myVar);


    // 3) Mismatched types error fixed
    char text[] = "Hello";
    printf("Text: %s\n", text);



    // Common Runtime Errors


    // 1) Division by zero avoided
    int a = 10;
    int b = 2;

    if(b != 0)
    {
        printf("Division result: %d\n", a / b);
    }
    else
    {
        printf("Cannot divide by zero\n");
    }



    // 2) Array out-of-bounds avoided

    int numbers[3] = {1, 2, 3};

    for(int i = 0; i < 3; i++)
    {
        printf("Array element: %d\n", numbers[i]);
    }



    // 3) Using freed memory avoided

    int *ptr = malloc(sizeof(int));

    *ptr = 10;

    printf("Allocated value: %d\n", *ptr);

    free(ptr);

    ptr = NULL;



    // Good habits:
    // Initialize variables
    // Use meaningful variable names
    // Keep code clean
    // Check loops and conditions
    // Read error messages carefully


    return 0;
}


/*
Output:

Value of x: 5
myVar value: 10
Text: Hello
Division result: 5
Array element: 1
Array element: 2
Array element: 3
Allocated value: 10

*/