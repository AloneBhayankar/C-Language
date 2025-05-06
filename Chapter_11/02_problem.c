// 2. Use the array in problem 1 to store 6 integers entered by the user.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Array element %d: %d\n", i + 1, ptr[i]);
    }

    return 0;
}

// Output:
// Enter number 1: 10
// Enter number 2: 20
// Enter number 3: 30
// Enter number 4: 40
// Enter number 5: 50
// Enter number 6: 60
// Array element 1: 10
// Array element 2: 20
// Array element 3: 30
// Array element 4: 40
// Array element 5: 50
// Array element 6: 60