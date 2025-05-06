// 3. Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.

#include <stdio.h>

int main() {
    int income;
    float tax = 0; 
    
    printf("Enter income: \n");
    scanf("%d", &income);
    
    if (income <= 250000) {
        tax = 0;  // No tax if income is less than or equal to 250000
    } 
    else if (income > 250000 && income <= 500000) {
        tax = 0.05 * (income - 250000);  // 5% tax for income between 250000 and 500000
    } 
    else if (income > 500000 && income <= 1000000) {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);  // 5% for first 250000, 20% for the next
    } 
    else {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);  // 5%, 20%, and 30% for income above 1000000
    }
    
    printf("The total tax you need to pay is %.3f\n", tax);
    return 0;
}

// Output:

// Enter income: 
// 350000
// The total tax you need to pay is 5000.000

// Enter income: 
// 600000
// The total tax you need to pay is 32500.000

// Enter income: 
// 1200000
// The total tax you need to pay is 172500.000