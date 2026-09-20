#include <stdio.h>

int main()
{
    int i, j;


    // 1. Nested Loop Example

    printf("Nested Loop Example:\n");

    // Outer Loop
    for (i = 1; i <= 2; i++)
    {
        printf("Outer: %d\n", i);

        // Inner Loop
        for (j = 1; j <= 3; j++)
        {
            printf("Inner: %d\n", j);
        }
    }

    

    // 2. Multiplication Table Example

    printf("\nMultiplication Table:\n");

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d ", i * j);
        }

        printf("\n");
    }


    return 0;
}


/*
Output:

Nested Loop Example:
Outer: 1
Inner: 1
Inner: 2
Inner: 3
Outer: 2
Inner: 1
Inner: 2
Inner: 3

Multiplication Table:
1 2 3
2 4 6
3 6 9

*/