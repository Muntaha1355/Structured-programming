#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Static Memory
    int studentsStatic[20];
    printf("Static memory for 20 students: %zu bytes\n", sizeof(studentsStatic));

    // Dynamic Memory
    int *ptr1, *ptr2;

    ptr1 = malloc(sizeof(*ptr1));
    ptr2 = calloc(1, sizeof(*ptr2));

    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("Memory allocation failed\n");
        free(ptr1);
        free(ptr2);
        return 1;
    }

    printf("Memory allocated with malloc for one int: %zu bytes\n", sizeof(*ptr1));
    printf("Memory allocated with calloc for one int: %zu bytes\n", sizeof(*ptr2));

    // Students example using dynamic memory
    int *studentsDynamic;
    int numStudents = 12;

    studentsDynamic = calloc(numStudents, sizeof(*studentsDynamic));

    if (studentsDynamic == NULL)
    {
        printf("Memory allocation failed for studentsDynamic\n");
        free(ptr1);
        free(ptr2);
        return 1;
    }

    printf("Dynamic memory for %d students: %zu bytes\n", numStudents, numStudents * sizeof(*studentsDynamic));

    free(ptr1);
    free(ptr2);
    free(studentsDynamic);

    return 0;
}

/*
Output:
Static memory for 20 students: 80 bytes
Memory allocated with malloc for one int: 4 bytes
Memory allocated with calloc for one int: 4 bytes
Dynamic memory for 12 students: 48 bytes
*/