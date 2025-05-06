// 5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). 
// Use realloc to make it store 15 number (from 7 x 1 to 7 x 15).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;  
    int *ptr;
    
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        ptr[i] = 7 * (i + 1);
    }

    printf("The Array (7 x 1 to 7 x 10) is:\n");

    for (int i = 0; i < n; i++) {
        printf("7 x %d = %d\n", i + 1, ptr[i]);
    }

    n = 15;
    ptr = (int *)realloc(ptr, n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    for (int i = 10; i < n; i++) {
        ptr[i] = 7 * (i + 1);
    }

    printf("\nThe Updated Array (7 x 1 to 7 x 15) is:\n");

    for (int i = 0; i < n; i++) {
        printf("7 x %d = %d\n", i + 1, ptr[i]);
    }

    free(ptr);

    return 0;
}


// Output:
// he Array (7 x 1 to 7 x 10) is:
// 7 x 1 = 7
// 7 x 2 = 14
// 7 x 3 = 21
// 7 x 4 = 28
// 7 x 5 = 35
// 7 x 6 = 42
// 7 x 7 = 49
// 7 x 8 = 56
// 7 x 9 = 63
// 7 x 10 = 70

// The Updated Array (7 x 1 to 7 x 15) is:
// 7 x 1 = 7
// 7 x 2 = 14
// 7 x 3 = 21
// 7 x 4 = 28
// 7 x 5 = 35
// 7 x 6 = 42
// 7 x 7 = 49
// 7 x 8 = 56
// 7 x 9 = 63
// 7 x 10 = 70
// 7 x 11 = 77
// 7 x 12 = 84
// 7 x 13 = 91
// 7 x 14 = 98
// 7 x 15 = 105