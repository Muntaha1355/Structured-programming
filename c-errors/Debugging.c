#include <stdio.h>

int main()
{
    // 1. Print Debugging

    int x = 10;
    int y = 0;

    printf("Before division\n");

    if(y != 0)
    {
        int z = x / y;
        printf("Result: %d\n", z);
    }
    else
    {
        printf("Error: Division by zero!\n");
    }

    printf("After division\n");



    // 2. Check Variable Values

    int a = 10;
    int b = 5;
    int result = a - b;

    printf("Result: %d\n", result);



    // 3. Safe Array Access

    int numbers[3] = {10, 20, 30};
    int index = 2;

    printf("Index = %d\n", index);

    if(index >= 0 && index < 3)
    {
        printf("Value = %d\n", numbers[index]);
    }
    else
    {
        printf("Error: Index out of bounds!\n");
    }


    return 0;
}


/*
Output:

Before division
Error: Division by zero!
After division
Result: 5
Index = 2
Value = 30

*/