// 6. Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from the user.

#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} Complex;

void display(Complex c)
{
    printf("The value of Complex number is %d + %di \n", c.real, c.imaginary);
}
int main()
{
    Complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part \n");
        scanf("%d", &carr[i].real);
        printf("Enter imaginary part \n");
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);
    }

    return 0;
}

// Output:
// Enter real part 2
// Enter imaginary part 5
// The value of Complex number is 2 + 5i 

// Enter real part 3
// Enter imaginary part 9
// The value of Complex number is 3 + 9i 

// Enter real par 7
// Enter imaginary part 4
// The value of Complex number is 7 + 4i 

// Enter real par 1
// Enter imaginary part 8
// The value of Complex number is 1 + 8i 

// Enter real par 5
// Enter imaginary part 7
// The value of Complex number is 5 + 7i 