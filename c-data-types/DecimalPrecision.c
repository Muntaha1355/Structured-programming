#include <stdio.h>

int main()
{
    // Decimal precision using float and double
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    // Default output shows 6 digits after decimal point
    printf("%f\n", myFloatNum);
    printf("%lf\n", myDoubleNum);


    // Setting decimal precision using format specifier
    printf("%.1f\n", myFloatNum);  // Shows 1 digit after decimal point
    printf("%.2f\n", myFloatNum);  // Shows 2 digits after decimal point
    printf("%.4f\n", myFloatNum);  // Shows 4 digits after decimal point


    return 0;
}