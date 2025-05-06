// 4. Write a function and pass the value by reference.
// In C, passing a value by reference means passing the address of a variable to a function so that the function can modify the original variable's value.

#include <stdio.h>

// Function prototype
void modifyValue(int *num);
// Function definition
void modifyValue(int *num) {
    *num = *num + 5;  // Modify the value at the address
}

int main() {
    int x = 10;
    printf("Before function call: x = %d\n", x); 
    // Pass address of x
    modifyValue(&x);
    printf("After function call: x = %d\n", x);

    return 0;
}

// Output:
// Before function call: x = 10
// After function call: x = 15