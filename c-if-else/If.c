#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Simple if statement example
    if (20 > 18) {
        printf("20 is greater than 18\n");
    }

    // Using variables in an if statement
    int x = 20;
    int y = 18;

    if (x > y) {
        printf("x is greater than y\n");
    }

    // Using a boolean variable
    bool isGreater = x > y;

    if (isGreater) {
        printf("x is greater than y\n");
    }

    return 0;
}