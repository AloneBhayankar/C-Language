// 9. Create a three–dimensional array and print the address of its elements in increasing order.

#include <stdio.h>

int main()
{
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%u ", &arr[i][j][k]);
            }
        }
    }

    return 0;
}

// Output:
// 6422196 6422200 6422204 6422208 6422212 6422216 6422220 6422224 6422228 6422232 6422236 6422240 6422244 6422248 6422252 6422256 6422260 6422264 6422268 6422272 6422276 6422280 6422284 6422288