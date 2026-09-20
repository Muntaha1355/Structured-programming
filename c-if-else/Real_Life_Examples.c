#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Example 1: Door Access Code
    int doorCode = 1337;

    if (doorCode == 1337)
    {
        printf("Correct code.\nThe door is now open.\n");
    }
    else
    {
        printf("Wrong code.\nThe door remains closed.\n");
    }



    // Example 2: Check Positive or Negative Number
    int myNum = 10;

    if (myNum > 0)
    {
        printf("The value is a positive number.\n");
    }
    else if (myNum < 0)
    {
        printf("The value is a negative number.\n");
    }
    else
    {
        printf("The value is 0.\n");
    }



    // Example 3: Voting Age Check
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge)
    {
        printf("Old enough to vote!\n");
    }
    else
    {
        printf("Not old enough to vote.\n");
    }



    // Example 4: Nested If - Age and Citizenship Check
    int age = 20;
    bool isCitizen = true;

    if (age >= 18)
    {
        printf("Old enough to vote.\n");

        if (isCitizen)
        {
            printf("And you are a citizen, so you can vote!\n");
        }
        else
        {
            printf("But you must be a citizen to vote.\n");
        }
    }
    else
    {
        printf("Not old enough to vote.\n");
    }



    // Example 5: Even or Odd Number
    int number = 5;

    if (number % 2 == 0)
    {
        printf("%d is even.\n", number);
    }
    else
    {
        printf("%d is odd.\n", number);
    }



    // Example 6: Temperature Check
    int temperature = 30;

    if (temperature < 0)
    {
        printf("It's freezing.\n");
    }
    else if (temperature < 20)
    {
        printf("It's cool.\n");
    }
    else
    {
        printf("It's warm.\n");
    }


    
    // Example 7: System Access Control
    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3; // 1 = highest

    if (isLoggedIn && (isAdmin || securityLevel <= 2))
    {
        printf("Access granted.\n");
    }
    else
    {
        printf("Access denied.\n");
    }

    /*
    Test Cases:
    securityLevel 1 = Access granted
    securityLevel 2 = Access granted
    securityLevel 3 = Access denied
    securityLevel 4 = Access denied

    If isAdmin = true, access is granted.
    */

    return 0;
}