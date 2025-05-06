// 8. Create a structure representing a bank account of a customer. What fields did you use and why?
#include <stdio.h>

struct BankAccount {
    int accountNumber;
    char name[50];
    char accountType[20];
    float balance;
};

int main() {
    struct BankAccount customer = {123456, "John Doe", "Savings", 10000.50};
    
    printf("Account Details:\n");
    printf("Account Number: %d\n", customer.accountNumber);
    printf("Name: %s\n", customer.name);
    printf("Account Type: %s\n", customer.accountType);
    printf("Balance: %.2f\n", customer.balance);
    
    return 0;
}

// Output:
// Account Details:
// Account Number: 123456
// Name: John Doe
// Account Type: Savings
// Balance: 10000.50