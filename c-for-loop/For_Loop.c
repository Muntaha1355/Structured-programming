#include <stdio.h>

int main()
{
    // 1. Basic For Loop Example - Print Numbers 0 to 4

    int i;

    printf("Basic For Loop:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }


    // 2. Print Even Numbers (0 to 10)

    printf("\nEven Numbers:\n");

    for (i = 0; i <= 10; i = i + 2)
    {
        printf("%d\n", i);
    }


    // 3. Sum of Numbers (1 to 5)

    int sum = 0;

    for (i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }

    printf("\nSum of Numbers:\n");
    printf("Sum is %d\n", sum);


    // 4. Countdown Example (5 to 1)

    printf("\nCountdown:\n");

    for (i = 5; i > 0; i--)
    {
        printf("%d\n", i);
    }


    return 0;
}