#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1, *ptr2, size;

    // Allocate memory for four integers
    size = 4 * sizeof(*ptr1);
    ptr1 = (int *)malloc(size);

    if (ptr1 == NULL)
    {
        printf("Initial memory allocation failed\n");
        return 1;
    }

    printf("%d bytes allocated at address %p\n", size, (void *)ptr1);

    // Reallocate memory to hold six integers
    size = 6 * sizeof(*ptr1);
    ptr2 = (int *)realloc(ptr1, size);

    // Check whether realloc was successful or not
    if (ptr2 == NULL)
    {
        printf("Failed. Unable to resize memory\n");
        free(ptr1);
        return 1;
    }
    else
    {
        printf("%d bytes reallocated at address %p\n", size, (void *)ptr2);
        ptr1 = ptr2;   // Update ptr1 to point to the newly allocated memory
    }

    // Free allocated memory
    free(ptr1);
    ptr1 = NULL;

    return 0;
}

/*
Output:

16 bytes allocated at address 0x....
24 bytes reallocated at address 0x....

*/