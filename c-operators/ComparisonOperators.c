#include <stdio.h>

int main()
{
    // Basic comparison operator

    int x = 5;
    int y = 3;

    printf("%d\n", x > y); // Output: 1 (true, because 5 is greater than 3)



    // Equal to operator

    printf("%d\n", x == y);  // Output: 0 (false, because 5 is not equal to 3)



    // Reverse comparison

    printf("%d\n", y > x);  // Output: 0 (false, because 3 is not greater than 5)



    // Real-Life Example 1: Checking voting age

    int age = 18;

    printf("%d\n", age >= 18);  // Output: 1 (true, old enough to vote)

    printf("%d\n", age < 18);  // Output: 0 (false, not old enough to vote)




    // Real-Life Example 2: Checking password length

    int passwordLength = 5;

    printf("%d\n", passwordLength >= 8);  // Output: 0 (false, password is too short)

    printf("%d\n", passwordLength < 8);  // Output: 1 (true, needs more characters)


    return 0;
}