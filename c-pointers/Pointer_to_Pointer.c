#include <stdio.h>

int main() {

    // Pointer to Pointer Example

    int myNum = 10;        // Normal variable

    int *ptr = &myNum;     // Pointer stores address of myNum

    int **pptr = &ptr;     // Pointer to pointer stores address of ptr



    // Access values

    printf("myNum = %d\n", myNum);

    printf("*ptr = %d\n", *ptr);

    printf("**pptr = %d\n", **pptr);



    // Changing value through pointer to pointer

    **pptr = 20;

    printf("After change:\n");

    printf("myNum = %d\n", myNum);



    // Display addresses

    printf("\nAddress of myNum: %p\n", (void*)&myNum);

    printf("Value stored in ptr: %p\n", (void*)ptr);

    printf("Address of ptr: %p\n", (void*)&ptr);

    printf("Value stored in pptr: %p\n", (void*)pptr);



    return 0;
}


/*

Output:

myNum = 10
*ptr = 10
**pptr = 10

After change:
myNum = 20

Address of myNum: 0x....
Value stored in ptr: 0x....
Address of ptr: 0x....
Value stored in pptr: 0x....

*/