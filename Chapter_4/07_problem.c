// 7. Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).

#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += 8 * i;
    }
    printf("Sum of the numbers occurring in the multiplication table of 8 is %d", sum);
    
    return 0;
}

// Output: Sum of the numbers occurring in the multiplication table of 8 is 440