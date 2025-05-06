// 2. Write a program to print multiplication table of 10 in reversed order.

#include <stdio.h>

int main() {
    int n = 10;
    for (int i = 10; i; i--) 
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}

// Output: 
// 10 x 10 = 100
// 10 x 9 = 90
// 10 x 8 = 80
// 10 x 7 = 70
// 10 x 6 = 60
// 10 x 5 = 50
// 10 x 4 = 40
// 10 x 3 = 30
// 10 x 2 = 20
// 10 x 1 = 10