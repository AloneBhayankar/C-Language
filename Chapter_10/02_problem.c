// 2. Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted.

#include <stdio.h>

int main(){
    FILE *fptr; 
    int num;
    printf("Enter a number for multiplication table: ");
    scanf("%d", &num);
    fptr = fopen("file_02.txt", "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d", num*(i+1));
        fprintf(fptr, "%c", '\n');
    }
    
    return 0;
}

// Output: Enter a number for multiplication table: 5
// in file_02.txt
// 5
// 10
// 15
// 20
// 25
// 30
// 35
// 40
// 45
// 50
