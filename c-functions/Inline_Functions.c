#include <stdio.h>


// Inline Function Example

inline int add(int a, int b)
{
    return a + b;
}



int main()
{

    // Calling Inline Function

    printf("Sum: %d\n", add(5, 3));


    return 0;
}



/*
Output:

Sum: 8

*/