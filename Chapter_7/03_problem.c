// 3. Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>

int main(){
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of 5 X %d = %d \n", i+1, arr[i]);
    }
    
    return 0;
}

// Output:
// The value of 5 X 1 = 5 
// The value of 5 X 2 = 10 
// The value of 5 X 3 = 15 
// The value of 5 X 4 = 20 
// The value of 5 X 5 = 25 
// The value of 5 X 6 = 30 
// The value of 5 X 7 = 35 
// The value of 5 X 8 = 40 
// The value of 5 X 9 = 45 
// The value of 5 X 10 = 50 