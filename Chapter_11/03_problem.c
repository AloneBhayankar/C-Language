// 3. Solve problem 1 using calloc().

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)calloc(n,  sizeof(int));

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
// Enter number 1: 1 
// Enter number 2: 2
// Enter number 3: 3
// Enter number 4: 4
// Enter number 5: 5
// Enter number 6: 6
// Array element 1: 1
// Array element 2: 2
// Array element 3: 3
// Array element 4: 4
// Array element 5: 5
// Array element 6: 6