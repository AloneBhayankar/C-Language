// 7. Write a program using function to print the following pattern (first n lines)
// *
// * * *
// * * * * *

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        // This loop runs from 0 to 2
        // if i = 0 ---> print 1 star 
        // if i = 1 ---> print 3 stars 
        // if i = 2 ---> print 5 stars 
        // no_of_stars = (2*i+1)      
        for(int j=0; j<2*i+1;j++){   // This for loop prints (2*i+1) stars 
            printf("*");
        }       
        printf("\n");  // This printf prints a new line
    }
    return 0;
}

// Output:
// Enter a number: 
// 3
// *
// ***
// *****