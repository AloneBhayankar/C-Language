// 5. Write a program to sum first ten natural numbers using while loop

#include <stdio.h>

int main() {
    int i = 1, sum = 0;
    while (i <= 10) {
        sum += i;
        i++;
    }
    printf("Sum of first 10 natural numbers is %d", sum);
    return 0;
}

// Output: Sum of first 10 natural numbers is 55