#include <stdio.h>

int main()
{
    // Basic operator example
    int myNum = 100 + 50;

    printf("%d\n", myNum); // Output: 150


    // Adding values using variables
    int sum1 = 100 + 50;      // Output: 150 (100 + 50)
    int sum2 = sum1 + 250;    // Output: 400 (150 + 250)
    int sum3 = sum2 + sum2;   // Output: 800 (400 + 400)

    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);


    return 0;
}