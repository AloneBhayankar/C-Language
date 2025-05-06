// 5. Write your own version of strcpy function from <string.h>

#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void mystrcpy(char target[], char source[])
{
    int len = mystrlen(source);
    for (int i = 0; i < len; i++)
    {
        target[i] = source[i];
    }
    target[len] = '\0';
}

int main()
{
    char source[] = "harry";
    char target[30];
    mystrcpy(target, source);
    printf("Original String: %s\nCopied String: %s\n", source, target);
    return 0;
}

// Output:
// Orignal String: harry
// Copied String: harry