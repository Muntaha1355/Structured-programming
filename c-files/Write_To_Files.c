#include <stdio.h>


int main()
{

    FILE *fptr;


    // Open file in write mode

    fptr = fopen("filename.txt", "w");


    // Write content to file

    fprintf(fptr, "Hello World!");


    // Close the file

    fclose(fptr);



    // Open file in append mode

    fptr = fopen("filename.txt", "a");


    // Add new content at the end of file

    fprintf(fptr, "\nHi everybody!");


    // Close the file

    fclose(fptr);


    return 0;
}



/*
Output:

filename.txt

Hello World!
Hi everybody!

*/