// 8. Write a program to count the occurrence of a given character in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'r';
    int count = 0;
    char str[] = "Harry";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }

    printf("Occurrence of %c is %d", c, count);

    return 0;
}

// Output: Occurrence of r is 2