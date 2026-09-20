#include <stdio.h>

int main()
{
    // Get Array Size using sizeof()

    int myNumbers[] = {10, 25, 50, 75, 100};

    printf("%zu\n", sizeof(myNumbers));

    // Output:
    // 20
    // (Because int = 4 bytes, 5 elements × 4 = 20 bytes)


    // Get Number of Elements in Array

    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    printf("%d\n", length);

    // Output:
    // 5


    // Array Size with Double Data Type

    double myValues[] = {1.1, 2.2, 3.3};

    int size = sizeof(myValues) / sizeof(myValues[0]);

    printf("%d\n", size);

    // Output:
    // 3


    return 0;
}