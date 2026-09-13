#include <stdio.h>

int main()
{
    // Basic assignment operator
    int x = 10;

    printf("Assignment: %d\n", x);  // Output: Assignment: 10



    // Addition assignment operator
    x += 5;

    printf("Addition Assignment: %d\n", x);  // Output: Addition Assignment: 15



    // Subtraction assignment operator
    x -= 3;

    printf("Subtraction Assignment: %d\n", x);  // Output: Subtraction Assignment: 12



    // Multiplication assignment operator
    x *= 3;

    printf("Multiplication Assignment: %d\n", x);  // Output: Multiplication Assignment: 36



    // Division assignment operator
    x /= 3;

    printf("Division Assignment: %d\n", x);  // Output: Division Assignment: 12



    // Modulus assignment operator
    x %= 5;

    printf("Modulus Assignment: %d\n", x);  // Output: Modulus Assignment: 2



    // Real-Life Example: Tracking Savings

    int savings = 100;

    savings += 50;   // Add 50 to savings

    printf("Total savings: %d\n", savings);  // Output: Total savings: 150


    return 0;
}