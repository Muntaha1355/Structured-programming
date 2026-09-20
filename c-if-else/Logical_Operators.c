#include <stdio.h>
#include <stdbool.h>

int main()
{

    // AND (&&) Example
    int a = 200;
    int b = 33;
    int c = 500;

    if (a > b && c > a)
    {
        printf("Both conditions are true\n");
    }



    // OR (||) Example
    if (a > b || a > c)
    {
        printf("At least one condition is true\n");
    }



    // NOT (!) Example
    a = 33;
    b = 200;

    if (!(a > b))
    {
        printf("a is NOT greater than b\n");
    }


    
    // Real-Life Example: Access Control System
    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3; // 1 = highest security level

    if (isLoggedIn && (isAdmin || securityLevel <= 2))
    {
        printf("Access granted\n");
    }
    else
    {
        printf("Access denied\n");
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