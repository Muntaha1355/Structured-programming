#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *file;

    // Using Return Values
    file = fopen("nothing.txt", "r");

    if (file == NULL)
    {
        printf("Using return value:\n");
        printf("Error opening file.\n\n");


        // Get More Details using perror()
        printf("Using perror():\n");
        perror("File Error");

        printf("\n");


        // Using errno and strerror()
        printf("Using errno and strerror():\n");
        printf("Error Code: %d\n", errno);
        printf("Error Message: %s\n", strerror(errno));

        printf("\n");


        // Custom message for specific error
        printf("Custom Error Checking:\n");

        if (errno == ENOENT)
        {
            printf("The file was not found.\n");
        }
        else if (errno == EACCES)
        {
            printf("Permission denied.\n");
        }
        else
        {
            printf("Unknown file error occurred.\n");
        }


        printf("\n");


        // Using exit() to stop program
        printf("Stopping program using exit().\n");

        exit(EXIT_FAILURE);
    }


    fclose(file);


    // EXIT_SUCCESS example
    printf("File opened successfully.\n");

    return EXIT_SUCCESS;
}


/*
Output:

Using return value:
Error opening file.

Using perror():
File Error: No such file or directory

Using errno and strerror():
Error Code: 2
Error Message: No such file or directory

Custom Error Checking:
The file was not found.

Stopping program using exit().

*/