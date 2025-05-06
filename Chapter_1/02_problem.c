// 2. Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height.


#include <stdio.h>

int main(){
    int r = 6;
    int height = 10;
    printf("The area of circle with radius %d is %f\n", r, 3.14*r*r);
    printf("The volume of cylinder with radius %d and height %d is %f", r, height,  3.14*r*r*height);
    return 0;
}

// output:
// The area of circle with radius 6 is 113.040000
// The volume of cylinder with radius 6 and height 10 is 1130.400000