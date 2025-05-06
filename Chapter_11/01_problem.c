// 1. Write a program to dynamically create an array of size 6 capable of storing 6 integers.

#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int n = 6;
    int* ptr;
    ptr = (int*) malloc(n*sizeof(int));
    ptr[0] = 45;
    ptr[1] = 4;
    ptr[2] = 36;
    ptr[3] = 84;
    ptr[4] = 14;
    ptr[5] = 96;
    printf("Array first element is %d \n", ptr[0]);
    printf("Array second element is %d \n", ptr[1]);
    printf("Array third element is %d \n", ptr[2]);
    printf("Array fourth element is %d \n", ptr[3]);
    printf("Array fifth element is %d \n", ptr[4]);
    printf("Array sixth element is %d \n", ptr[5]); 
    return 0;
}

// Output:
// Array first element is 45 
// Array second element is 4 
// Array third element is 36 
// Array fourth element is 84 
// Array fifth element is 14 
// Array sixth element is 96 