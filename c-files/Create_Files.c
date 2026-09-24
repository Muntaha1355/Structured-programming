#include <stdio.h>


int main()
{

    // Create a file pointer

    FILE *fptr;


    // Create a new file using write mode

    fptr = fopen("filename.txt", "w");


    // Close the file

    fclose(fptr);


    return 0;
}



/*
Output:

File created successfully:
filename.txt

*/