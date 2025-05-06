// 4. Write a program using recursion to calculate nth element of Fibonacci series.

#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);

int fibonacci(int);

int fibonacci(int n){
    if(n == 1 || n==2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
 
int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
    return 0;
}

// Output:
// Enter a number: 
// 7
// The value of fibonacci series at 7 is 8