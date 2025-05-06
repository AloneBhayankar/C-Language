// 6. Write a program to encrypt a string by adding 1 to the ascii value of its characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Mera saara paisa takiye ke niche black bag me hai";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }

    printf("Encrypted string is - %s", str);
    return 0;
}

// Output: Encrypted string is - Nfsb!tbbsb!qbjtb!ubljzf!lf!ojdif!cmbdl!cbh!nf!ibj