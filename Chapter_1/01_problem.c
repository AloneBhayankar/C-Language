// 1. Write a C program to calculate area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user.

#include <stdio.h>

int main() {
    // int length = 5;
    // int breadth = 10;
    int length, breadth;

    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);

    int area = length * breadth;
    printf("Area of rectangle: %d", area);
    return 0;

    printf("The area of this rectangle is %d", length*breadth);
}

// Output: 
// Enter length
// 10
// Enter breadth
// 2
// Area of rectangle: 20
