#include <stdio.h>


// Recursive function to count down

void countdown(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        countdown(n - 1);
    }
}



// Recursive function to calculate factorial

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}



int main()
{

    // Recursion Example: Countdown

    countdown(5);



    // Calculate factorial using recursion

    printf("Factorial of 5 is: %d\n", factorial(5));


    return 0;
}



/*
Output:

5
4
3
2
1
Factorial of 5 is: 120

*/