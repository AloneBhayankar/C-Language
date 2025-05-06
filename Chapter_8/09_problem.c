// 9. Write a program to check whether a given character is present in a string or not.

#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'r';
    int contains = 0;
    char str[] = "Harry";
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break; // This break statement will exit the loop once the character is found!
        }
    }
    if (contains)
    {
        printf("Yes it contains- %c\n", c);
    }
    else
    {
        printf("Does not contain- %c\n", c);
    }
    return 0;
}

// Output: Yes it contains- r