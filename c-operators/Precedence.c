#include <stdio.h>

int main()
{
    // Operator Precedence
    // Multiplication (*) happens before addition (+)

    int result1 = 2 + 3 * 4;  // 3 * 4 = 12, then 2 + 12 = 14

    int result2 = (2 + 3) * 4;  // (2 + 3) = 5, then 5 * 4 = 20


    printf("Result 1: %d\n", result1);  // Output: Result 1: 14

    printf("Result 2: %d\n", result2);  // Output: Result 2: 20



    // Another Example
    // Addition and subtraction work from left to right

    int result3 = 10 - 2 + 5;  // (10 - 2) + 5 = 13

    int result4 = 10 - (2 + 5);  // 10 - 7 = 3


    printf("Result 3: %d\n", result3);  // Output: Result 3: 13

    printf("Result 4: %d\n", result4);  // Output: Result 4: 3


    return 0;
}