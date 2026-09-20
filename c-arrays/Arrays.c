#include <stdio.h>

int main()
{
    // Array Declaration and Initialization
    int myNumbers[] = {25, 50, 75, 100};

    printf("%d\n", myNumbers[0]);

    // Output:
    // 25


    // Change an Array Element
    myNumbers[0] = 33;

    printf("%d\n", myNumbers[0]);

    // Output:
    // 33


    // Set Array Size
    int numbers[4];

    numbers[0] = 25;
    numbers[1] = 50;
    numbers[2] = 75;
    numbers[3] = 100;

    printf("%d\n", numbers[3]);

    // Output:
    // 100


    // Avoid Mixing Data Types
    // Array elements should have the same data type
    int values[] = {25, 50, 75, 100};

    printf("%d\n", values[2]);

    // Output:
    // 75


    return 0;
}