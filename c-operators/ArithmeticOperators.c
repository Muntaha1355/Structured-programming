#include <stdio.h>

int main()
{
    // Arithmetic Operators Example

    int x = 10;
    int y = 3;

    printf("%d\n", x + y);  // Output: 13 (Addition)
    printf("%d\n", x - y);  // Output: 7 (Subtraction)
    printf("%d\n", x * y);  // Output: 30 (Multiplication)
    printf("%d\n", x / y);  // Output: 3 (Integer division)
    printf("%d\n", x % y);  // Output: 1 (Modulus)


    // Increment and Decrement Operators

    int z = 5;

    ++z;
    printf("%d\n", z);  // Output: 6 (Increment by 1)

    --z;
    printf("%d\n", z);  // Output: 5 (Decrement by 1)



    // Integer Division and Decimal Division

    int a = 10;
    int b = 3;

    printf("%d\n", a / b);  // Output: 3 (Integer division)


    double c = 10.0;
    double d = 3.0;

    printf("%.2f\n", c / d);  // Output: 3.33 (Decimal division)



    // Incrementing and Decrementing Example

    int x = 5;

    ++x;
    printf("%d\n", x);  // Output: 6 (Increment by 1)

    --x;
    printf("%d\n", x);  // Output: 5 (Decrement by 1)


    
    // Real Life Example: Counting People

    int peopleInRoom = 0;

    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;

    printf("%d\n", peopleInRoom);  // Output: 3 (3 people entered)


    peopleInRoom--;

    printf("%d\n", peopleInRoom);  // Output: 2 (1 person left)


    return 0;
}