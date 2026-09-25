#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int *newPtr;

    // Allocate memory for one integer
    ptr = (int *)malloc(sizeof(*ptr));

    // Check allocation error
    if (ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return 1;
    }


    // Store value in allocated memory
    *ptr = 20;


    // Access memory and print value
    printf("Integer value: %d\n", *ptr);



    // Reallocate memory for more integers
    newPtr = (int *)realloc(ptr, 3 * sizeof(*ptr));


    // Check realloc error
    if (newPtr == NULL)
    {
        printf("Unable to reallocate memory\n");

        // Free old memory before exit
        free(ptr);
        ptr = NULL;

        return 1;
    }


    // Update pointer after successful realloc
    ptr = newPtr;


    // Store more values
    ptr[1] = 30;
    ptr[2] = 40;


    // Read values
    printf("Values after realloc: %d %d %d\n",
           ptr[0], ptr[1], ptr[2]);



    // Free allocated memory
    free(ptr);


    // Set pointer to NULL
    ptr = NULL;


    printf("Memory successfully released\n");


    return 0;
}