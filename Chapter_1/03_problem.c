// 3. Write a program to convert Celsius (Centigrade degrees temperature to
//     Fahrenheit).

#include <stdio.h>

int main(){
    float c = 37.0, f;

    f = ((9.0/5.0)*c) + 32;
    printf("The value in Fahrenheit is %f", f);

    return 0;
}

// Output: The value in Fahrenheit is 98.599998