// 5. Write a program with a structure representing a complex number.

#include <stdio.h>

struct Complex {
    int real;
    int imaginary;
};

int main() {
    struct Complex c = {1, 2};
    printf("Complex number: %d + %di\n", c.real, c.imaginary);
    return 0;
}


// Output: The value of Complex number is 1 + 2i