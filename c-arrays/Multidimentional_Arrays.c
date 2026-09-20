#include <stdio.h>

int main()
{
    // Example 1:
    // Two-Dimensional Array (2D Array)

    int matrix[2][3] = {
        {1, 4, 2},
        {3, 6, 8}
    };

    printf("Element at row 0 column 2: %d\n", matrix[0][2]);

    // Output:
    // Element at row 0 column 2: 2



    // Example 2:
    // Change an element in 2D Array

    matrix[0][0] = 9;

    printf("Changed first element: %d\n", matrix[0][0]);

    // Output:
    // Changed first element: 9



    // Example 3:
    // Loop Through a 2D Array

    int i, j;

    printf("Matrix elements:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    // Output:
    // Matrix elements:
    // 9 4 2
    // 3 6 8



    // Example 4:
    // Three-Dimensional Array (3D Array)

    int example[2][4][3];

    printf("3D Array created successfully\n");

    // Output:
    // 3D Array created successfully



    return 0;
}