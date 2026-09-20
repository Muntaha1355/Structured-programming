#include <stdio.h>

int main()
{
    int i;
    int number = 2;


    // 1. Count to 100 by tens

    printf("Count to 100 by tens:\n");

    for (i = 0; i <= 100; i += 10)
    {
        printf("%d\n", i);
    }


    // 2. Print Even Numbers (0 to 10)

    printf("\nEven Numbers:\n");

    for (i = 0; i <= 10; i += 2)
    {
        printf("%d\n", i);
    }


    // 3. Print Odd Numbers (1 to 9)

    printf("\nOdd Numbers:\n");

    for (i = 1; i < 10; i += 2)
    {
        printf("%d\n", i);
    }


    // 4. Powers of 2 up to 512

    printf("\nPowers of 2:\n");

    for (i = 2; i <= 512; i *= 2)
    {
        printf("%d\n", i);
    }


    // 5. Multiplication Table Example

    printf("\nMultiplication Table of %d:\n", number);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }


    return 0;
}


/*
Output:

Count to 100 by tens:
0
10
20
30
40
50
60
70
80
90
100

Even Numbers:
0
2
4
6
8
10

Odd Numbers:
1
3
5
7
9

Powers of 2:
2
4
8
16
32
64
128
256
512

Multiplication Table of 2:
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20

*/