// 4. Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Array element %d: %d\n", i + 1, ptr[i]);
    }

    n = 10;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

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
// Enter number 1: 10   Array element 1: 10
// Enter number 2: 20   Array element 2: 20
// Enter number 3: 30   Array element 3: 30
// Enter number 4: 40   Array element 4: 40
// Enter number 5: 50   Array element 5: 50
// ------------------   Array element 6: 60
// BEFORE REALLOC 5     Array element 7: 70
// AFTER REALLOC 10     Array element 8: 80
//                      Array element 9: 90
//                      Array element 10: 100



