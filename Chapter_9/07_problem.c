// 7. Write problem 5’s structure using ‘typedef’ keywords.

#include <stdio.h>

typedef struct c{
    int real;
    int imaginary;
} Complex;

int main(){
    Complex c = {1, 2};
    printf("The value of Complex number is %d + %di ", c.real, c.imaginary);
    return 0;
}

// Output: The value of Complex number is 1 + 2i
