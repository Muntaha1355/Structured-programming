#include <stdio.h>

int main() {

    // Pointer Arithmetic Example

    int myNumbers[4] = {25, 50, 75, 100};

    // Pointer points to first element of array
    int *p = myNumbers;


    // Access elements using pointer arithmetic
    printf("%d\n", *p);        // 25
    printf("%d\n", *(p + 1));  // 50
    printf("%d\n", *(p + 2));  // 75
    printf("%d\n", *(p + 3));  // 100



    // Increment and Decrement pointer

    int numbers[3] = {10, 20, 30};

    int *ptr = numbers;

    printf("%d\n", *ptr);  // 10

    ptr++;
    printf("%d\n", *ptr);  // 20

    ptr--;
    printf("%d\n", *ptr);  // 10

    ptr += 2;
    printf("%d\n", *ptr);  // 30



    // Pointer subtraction (distance)

    int values[5] = {10, 20, 30, 40, 50};

    int *start = &values[1];
    int *end = &values[4];

    printf("%ld\n", end - start);  // 3



    // Pointer type dependency

    int nums[2] = {1, 2};
    char letters[] = "Hi";

    int *intPtr = nums;
    char *charPtr = letters;

    printf("%p\n", (void*)intPtr);
    printf("%p\n", (void*)(intPtr + 1));

    printf("%p\n", (void*)charPtr);
    printf("%p\n", (void*)(charPtr + 1));



    // Looping with pointer

    int arr[4] = {25, 50, 75, 100};

    int *pointer = arr;

    for(int i = 0; i < 4; i++) {

        printf("%d\n", *pointer);

        pointer++;
    }



    return 0;
}


/*

Output:

25
50
75
100

10
20
10
30

3

(address)
(address + 4)

(address)
(address + 1)

25
50
75
100

*/