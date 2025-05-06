// 2. Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.

#include <stdio.h>

int main(){
    char str[6]; // Declare a character array (string) with space for 5 characters + null terminator
    // scanf("%s", str);
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]); // Reads a single character from input and stores it in str[i]
        fflush(stdin); // (⚠️ Undefined behavior) Attempt to flush input buffer (stdin)
    }
    str[5] = '\0'; // Null terminates the string to make it a valid C string
    
    printf("%s", str); // Prints the full string
    return 0;
}

// Output:
// H
// E
// L
// L
// O
// HELLO