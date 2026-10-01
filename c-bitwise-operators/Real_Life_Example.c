#include <stdio.h>


// Create permission flags using macros

#define READ 1      // 0001
#define WRITE 2     // 0010
#define EXEC 4      // 0100


int main()
{
    // Give user READ and WRITE permissions
    int permissions = READ | WRITE;


    // Check READ permission
    if (permissions & READ)
    {
        printf("Read allowed\n");
    }


    // Check WRITE permission
    if (permissions & WRITE)
    {
        printf("Write allowed\n");
    }


    // Check EXEC permission
    if (permissions & EXEC)
    {
        printf("Execute allowed\n");
    }


    return 0;
}


/*
Output:

Read allowed
Write allowed

*/