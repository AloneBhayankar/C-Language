// 7. Write a program to decrypt the string encrypted using encrypt function in problem 6.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Nfsb!tbbsb!qbjtb!ubljzf!lf!ojdif!cmbdl!cbh!nf!ibj";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }

    printf("Decrypted string is - %s", str);
    return 0;
}

// Output: Decrypted string is - Mera saara paisa takiye ke niche black bag me hai