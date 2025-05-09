// 9. Write a structure capable of storing date. Write a function to compare those dates.

#include <stdio.h>

typedef struct Date
{
    int mm;
    int dd;
    int yyyy;
} DT;

int compare(DT d1, DT d2)
{
    // if d1 is in the future, return 1
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }

    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
}

int main()
{
    DT d1 = {12, 4, 2154};
    DT d2 = {12, 8, 2154};int result = compare(d1, d2);
    if (result == 0)
        printf("Dates are equal.\n");
    else if (result == 1)
        printf("First date is later.\n");
    else
        printf("First date is earlier.\n");
    return 0;
}

// Output: First date is earlier.