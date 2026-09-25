#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allocate dynamic memory for 4 integers
    int *ptr;

    ptr = calloc(4, sizeof(*ptr));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }


    // Write data into dynamic memory

    *ptr = 2;        // First element using dereference

    ptr[1] = 4;      // Second element using index

    ptr[2] = 6;      // Third element using index

    ptr[3] = 8;      // Fourth element using index



    // Read data from dynamic memory

    printf("First value using *ptr: %d\n", *ptr);

    printf("Values using index:\n");

    printf("%d %d %d %d\n",
           ptr[0],
           ptr[1],
           ptr[2],
           ptr[3]);



    // Same memory interpreted with different data type

    char *charPtr;

    charPtr = (char *)ptr;


    printf("\nAccessing same memory as bytes:\n");

    printf("%d %c %c %c %c\n",
           ptr[0],
           charPtr[0],
           charPtr[1],
           charPtr[2],
           charPtr[3]);



    free(ptr);

    return 0;
}


/*
Output:

First value using *ptr: 2

Values using index:
2 4 6 8

Accessing same memory as bytes:
2 (memory byte values)

*/