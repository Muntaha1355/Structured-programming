#include <stdio.h>

int main() {

    // Create variables to store student information
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';


    // Print student variables
    printf("Student ID: %d\n", studentID);
    printf("Student Age: %d\n", studentAge);
    printf("Student Fee: %.2f\n", studentFee);
    printf("Student Grade: %c\n", studentGrade);



    // Create variables for rectangle dimensions
    int length = 4;
    int width = 6;
    int area;


    // Calculate the area of rectangle
    area = length * width;


    // Print the result
    printf("Length: %d\n", length);
    printf("Width: %d\n", width);
    printf("Area of rectangle: %d\n", area);


    return 0;
}