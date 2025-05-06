// 11. Implement 10 using other types of loops.

#include <stdio.h>

int main()
{
    int n;
    int not_prime = 0;

    printf("Enter a number: \n");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        int i = 2;
        // while (i < n)
        // {
        //     if (n % i == 0 && n != 2)
        //     {
        //         not_prime = 1;
        //         break;
        //     }
        //     i++;

        do
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        } while (i < n);
    }
    if (not_prime)
    {
        printf("%d is not prime\n", n);
    }
    else
    {
        printf("%d is prime\n", n);
    }

    return 0;
}

// Output:
// Enter a number:         Enter a number:
// 5                       4
// 5 is prime              4 is not prime
