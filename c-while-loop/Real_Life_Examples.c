// While Loop Examples

#include <stdio.h>

int main()
{

    // Example 1: Countdown Program

    int countdown = 3;

    while (countdown > 0)
    {
        printf("%d\n", countdown);
        countdown--;
    }

    printf("Happy New Year!!\n");


    // Output:
    // 3
    // 2
    // 1
    // Happy New Year!!



    // Example 2: Print Even Numbers Between 0 and 10

    int i = 0;

    while (i <= 10)
    {
        printf("%d\n", i);
        i += 2;
    }


    // Output:
    // 0
    // 2
    // 4
    // 6
    // 8
    // 10



    // Example 3: Reverse a Number

    int numbers = 12345;
    int revNumbers = 0;

    while (numbers)
    {
        revNumbers = revNumbers * 10 + numbers % 10;
        numbers = numbers / 10;
    }

    printf("Reverse Number: %d\n", revNumbers);


    // Output:
    // Reverse Number: 54321



    // Example 4: While Loop with If Else (Game Example)

    int dice = 1;

    while (dice <= 6)
    {
        if (dice < 6)
        {
            printf("No Yahtzy\n");
        }
        else
        {
            printf("Yahtzy!\n");
        }

        dice = dice + 1;
    }


    // Output:
    // No Yahtzy
    // No Yahtzy
    // No Yahtzy
    // No Yahtzy
    // No Yahtzy
    // Yahtzy!


    return 0;
}