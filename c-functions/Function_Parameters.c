#include <stdio.h>


// 1. Parameters and Arguments

void nameFunction(char name[])
{
    printf("Hello %s\n", name);
}


// 2. Multiple Parameters

void personInfo(char name[], int age)
{
    printf("Hello %s. You are %d years old.\n", name, age);
}


// 3. Calculate Sum Using Parameters

void calculateSum(int x, int y)
{
    int sum = x + y;

    printf("The sum of %d + %d is: %d\n", x, y, sum);
}


// 4. Pass Arrays as Function Parameters

void printArray(int numbers[5])
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }
}


// 5. Return Values

int addFive(int x)
{
    return 5 + x;
}


// 6. Return Value With Two Parameters

int sumTwoNumbers(int x, int y)
{
    return x + y;
}


// 7. Store Multiple Return Values

int calculate(int x, int y)
{
    return x + y;
}


// 8. Real Life Example - Fahrenheit to Celsius

float toCelsius(float fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}



int main()
{

    // Parameters and Arguments

    nameFunction("Liam");
    nameFunction("Jenny");
    nameFunction("Anja");


    // Multiple Parameters

    personInfo("Liam", 3);
    personInfo("Jenny", 14);
    personInfo("Anja", 30);



    // Calculate Sum

    calculateSum(5, 3);
    calculateSum(8, 2);
    calculateSum(15, 15);



    // Pass Arrays as Function Parameters

    int myNumbers[5] = {10, 20, 30, 40, 50};

    printArray(myNumbers);



    // Return Values

    printf("Result is: %d\n", addFive(3));



    // Return with Two Parameters

    printf("Sum Result is: %d\n", sumTwoNumbers(5, 3));



    // Store Results

    int result1 = calculate(5, 3);
    int result2 = calculate(8, 2);
    int result3 = calculate(15, 15);


    printf("Result1: %d\n", result1);
    printf("Result2: %d\n", result2);
    printf("Result3: %d\n", result3);



    // Real Life Example

    float fahrenheit = 98.8;

    float celsius = toCelsius(fahrenheit);

    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Celsius: %.2f\n", celsius);



    return 0;
}



/*

Output:

Hello Liam
Hello Jenny
Hello Anja

Hello Liam. You are 3 years old.
Hello Jenny. You are 14 years old.
Hello Anja. You are 30 years old.

The sum of 5 + 3 is: 8
The sum of 8 + 2 is: 10
The sum of 15 + 15 is: 30

10
20
30
40
50

Result is: 8

Sum Result is: 8

Result1: 8
Result2: 10
Result3: 30

Fahrenheit: 98.80
Celsius: 37.11

*/