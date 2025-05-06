// 7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.

#include <stdio.h>

int main()
{
    int arr[3][10];
    int mul[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("The multiplication table of %d\n", mul[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d X %d = %d\n", mul[i], j + 1, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Output:
// The multiplication table of 2
// 2 X 1 = 2
// 2 X 2 = 4
// 2 X 3 = 6
// 2 X 4 = 8
// 2 X 5 = 10
// 2 X 6 = 12
// 2 X 7 = 14
// 2 X 8 = 16
// 2 X 9 = 18
// 2 X 10 = 20

// The multiplication table of 7
// 7 X 1 = 7
// 7 X 2 = 14
// 7 X 3 = 21
// 7 X 4 = 28
// 7 X 5 = 35
// 7 X 6 = 42
// 7 X 7 = 49
// 7 X 8 = 56
// 7 X 9 = 63
// 7 X 10 = 70

// The multiplication table of 9
// 9 X 1 = 9
// 9 X 2 = 18
// 9 X 3 = 27
// 9 X 4 = 36
// 9 X 5 = 45
// 9 X 6 = 54
// 9 X 7 = 63
// 9 X 8 = 72
// 9 X 9 = 81
// 9 X 10 = 90