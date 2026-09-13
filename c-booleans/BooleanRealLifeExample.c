#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Check if a person is old enough to vote

    int myAge = 25;
    int votingAge = 18;


    printf("%d\n", myAge >= votingAge);  // Output: 1 (true), meaning 25 years old are allowed to vote



    // Using if-else statement to check voting eligibility

    if (myAge >= votingAge)
    {
        printf("Old enough to vote!");
    }
    else
    {
        printf("Not old enough to vote.");
    }


    return 0;
}