// 8. Repeat problem 7 for a custom input given by the user.

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    int arr[3][10];
    int mul[] = {n1, n2, n3};
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
// Enter three numbers: 2 4 6
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

// The multiplication table of 4
// 4 X 1 = 4
// 4 X 2 = 8
// 4 X 3 = 12
// 4 X 4 = 16
// 4 X 5 = 20
// 4 X 6 = 24
// 4 X 7 = 28
// 4 X 8 = 32
// 4 X 9 = 36
// 4 X 10 = 40

// The multiplication table of 6
// 6 X 1 = 6
// 6 X 2 = 12
// 6 X 3 = 18
// 6 X 4 = 24
// 6 X 5 = 30
// 6 X 6 = 36
// 6 X 7 = 42
// 6 X 8 = 48
// 6 X 9 = 54
// 6 X 10 = 60