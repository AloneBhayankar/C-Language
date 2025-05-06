// 1. Write a program using function to find average of three numbers.

#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}

int main(){
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");    
    scanf("%d", &c);
    printf("The average of a, b and c is %f", average(a, b, c));
    return 0;
}

// Output:
// Enter first number: 
// 8
// Enter second number: 
// 10
// Enter third number: 
// 3
// The average of a, b and c is 7.000000