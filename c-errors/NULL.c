#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Example 1: fopen() returns NULL
    FILE *fptr = fopen("nothing.txt", "r");

    if (fptr == NULL)
    {
        printf("Could not open file.\n");
    }
    else
    {
        printf("File opened successfully.\n");
        fclose(fptr);
    }

    // Example 2: malloc() returns NULL
    int *numbers = (int*) malloc(1000000000000 * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
    }
    else
    {
        printf("Memory allocation successful!\n");
        free(numbers);
        numbers = NULL;
    }

    return 0;
}

// Output:
// Could not open file.
// Memory allocation failed.