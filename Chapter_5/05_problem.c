// 5. What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);

#include <stdio.h>

int main(){
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++);
    return 0;
}

// Output: (Depends upon compiler evaluation order)
// 6 6 4 -> order of executing right to left 
// 4 5 5 -> true answer left to right 