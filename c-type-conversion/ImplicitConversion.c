#include <stdio.h>

int main()
{
    // Automatic conversion: int to float
    float myFloat = 9;

    printf("%f\n", myFloat); // Output: 9.000000


    // Automatic conversion: float to int
    int myInt = 9.99;

    printf("%d\n", myInt); // Output: 9


    // Integer division
    float sum = 5 / 2;

    printf("%f\n", sum); // Output: 2.000000


    return 0;
}