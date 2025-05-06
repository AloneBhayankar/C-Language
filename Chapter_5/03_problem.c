// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2.

#include <stdio.h>


float force(float);

float force(float mass){
    return mass*9.8;
}

int main(){
    int m;
    printf("Enter the mass of the body: ");
    scanf("%d", &m);
    printf("The value of force is %f\n", force(m));
    return 0;
}

// Output:
// Enter the mass of the body: 45
// The value of force is 441.000000