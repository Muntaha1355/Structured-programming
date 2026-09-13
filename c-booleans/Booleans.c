#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Create Boolean variables

    bool isProgrammingFun = true;
    bool isFishTasty = false;


    // Print Boolean values

    printf("%d\n", isProgrammingFun);  // Output: 1 (true), because isProgrammingFun stores true value

    printf("%d\n", isFishTasty);  // Output: 0 (false), because isFishTasty stores false value



    // Comparing values

    printf("%d\n", 10 > 9);  // Output: 1 (true), because 10 is greater than 9



    // Equal comparison

    printf("%d\n", 10 == 10);  // Output: 1 (true), because 10 is equal to 10

    printf("%d\n", 10 == 15);  // Output: 0 (false), because 10 is not equal to 15

    printf("%d\n", 5 == 55);  // Output: 0 (false), because 5 is not equal to 55



    // Comparing Boolean variables

    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;

    printf("%d\n", isHamburgerTasty == isPizzaTasty);  // Output: 1 (true), because both Boolean values are equal



    // Storing comparison result

    int x = 10;
    int y = 9;

    bool isGreater = x > y;

    printf("%d\n", isGreater);  // Output: 1 (true), because x is greater than y


    return 0;
}