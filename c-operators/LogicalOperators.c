#include <stdio.h>

int main()
{
    // Logical AND operator (&&)
    // Returns 1 if both conditions are true

    int x = 5;
    int y = 3;

    printf("%d\n", x < 10 && x > 3);  // Output: 1 (true, because both conditions are true)



    // Logical OR operator (||)
    // Returns 1 if at least one condition is true

    printf("%d\n", x < 5 || x > 3);  // Output: 1 (true, because one condition is true)



    // Logical NOT operator (!)
    // Reverses the result

    printf("%d\n", !(x < 5 && x > 3));  // Output: 1 (true, because the original result was false)



    
    // Real-Life Example: Login Check

    int isLoggedIn = 1;
    int isAdmin = 0;


    printf("Regular user: %d\n", isLoggedIn && !isAdmin);  // Output: Regular user: 1
    

    printf("Has access: %d\n", isLoggedIn || isAdmin);  // Output: Has access: 1
    

    printf("Not logged in: %d\n", !isLoggedIn);  // Output: Not logged in: 0
    

    return 0;
}