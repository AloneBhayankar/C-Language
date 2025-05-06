// 4. Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.

#include <stdio.h>

int main(){
    int year; 
    printf("Enter year: \n");
    scanf("%d", &year);

    if((year %4==0 && year%100!=0) || year %400==0){
        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");
    }

    return 0;
}

// Output: 

// Enter year: 
// 2024
// This is a leap year

// Enter year: 
// 2025
// This is not a leap year