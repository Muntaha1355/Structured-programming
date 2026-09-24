#include <stdio.h>

int main() {

    // Create an integer array
    int myNumbers[4] = {25, 50, 75, 100};

    // Loop through array using normal index
    int i;

    for(i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }


    // Access memory address of array elements
    for(i = 0; i < 4; i++) {
        printf("%p\n", &myNumbers[i]);
    }


    // Get size of array
    printf("%zu\n", sizeof(myNumbers));


    // Array name is pointer to first element
    printf("%p\n", myNumbers);
    printf("%p\n", &myNumbers[0]);


    // Access first element using pointer
    printf("%d\n", *myNumbers);


    // Access second and third element using pointer arithmetic
    printf("%d\n", *(myNumbers + 1));
    printf("%d\n", *(myNumbers + 2));


    // Using pointer variable
    int *ptr = myNumbers;

    for(i = 0; i < 4; i++) {
        printf("%d\n", *(ptr + i));
    }


    // Change values using pointer
    *myNumbers = 13;
    *(myNumbers + 1) = 17;


    // Print changed values
    printf("%d\n", *myNumbers);
    printf("%d\n", *(myNumbers + 1));


    return 0;
}


/*

Output:

25
50
75
100

0x7ffe70f9d8f0
0x7ffe70f9d8f4
0x7ffe70f9d8f8
0x7ffe70f9d8fc

16

0x7ffe70f9d8f0
0x7ffe70f9d8f0

25

50
75

25
50
75
100

13
17

*/