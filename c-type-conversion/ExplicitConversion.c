#include <stdio.h>

int main()
{
    // Manual conversion: int to float
    float sum = (float) 5 / 2;

    printf("%f\n", sum); // Output: 2.500000


    // Conversion using variables
    int num1 = 5;
    int num2 = 2;

    float result = (float) num1 / num2;

    printf("%.1f\n", result); // Output: 2.5


    return 0;
}