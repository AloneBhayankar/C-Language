// 5. Write a program to determine whether a character entered by the user is
// lowercase or not.

// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

#include <stdio.h>

int main(){
    char ch;
    printf("The character is %c", ch);
    scanf("%c", &ch);
    printf("The value of character is %d\n", ch);
    // 97, 122
    if(ch >= 97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
         printf("This character not lowecase \n");
    }
    return 0;
}

// Output: 

// The character is B
// The value of character is 66
// This character not lowecase

// The character is a
// The value of character is 97
// This character is lowercase