#include <stdio.h>

int main()
{
    // Maximum possible score
    int maxScore = 500;

    // User's actual score
    int userScore = 423;


    // Calculate percentage
    // Convert score to float for accurate result
    float percentage = (float) userScore / maxScore * 100.0;


    // Print percentage
    printf("User's percentage is %.2f%%\n", percentage);
    // Output: User's percentage is 84.60%


    return 0;
}