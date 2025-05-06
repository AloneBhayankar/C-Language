// 3. Write a program to read a text file character by character and write its content twice in separate file.

#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("file_03.txt", "r");
    ptr2 = fopen("file_04.txt", "a");
    while (1)
    {
       
        ch = fgetc(ptr); 
        // when all the content of a file has been read break
        if (ch == EOF)
        {
            break;
        }
        else{
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }
        return 0;
}

// Output:
// file_03.txt -> Hello World!
// file_04.txt -> HHeelllloo  WWoorrlldd!!