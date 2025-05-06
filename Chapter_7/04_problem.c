// 4. Repeat problem 3 for a general input provided by the user using scanf.

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d X %d = %d \n", n, i+1, arr[i]);
    }
    
    return 0;
}

// Output:
// Enter a number: 2
// The value of 2 X 1 = 2 
// The value of 2 X 2 = 4
// The value of 2 X 3 = 6
// The value of 2 X 4 = 8
// The value of 2 X 5 = 10
// The value of 2 X 6 = 12
// The value of 2 X 7 = 14
// The value of 2 X 8 = 16
// The value of 2 X 9 = 18
// The value of 2 X 10 = 20