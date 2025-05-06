// 6. Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    // Take input for four numbers
    printf("Enter four numbers:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Initialize a variable to store the greatest number
    int greatest = num1;

    // Compare num1 with num2, num3, and num4
    if (num2 > greatest) {
        greatest = num2;
    }
    if (num3 > greatest) {
        greatest = num3;
    }
    if (num4 > greatest) {
        greatest = num4;
    }

    printf("The greatest number is: %d\n", greatest);

    return 0;
}

// Output: 
// Enter four numbers:
// 20 12 60 90 
// The greatest number is: 90