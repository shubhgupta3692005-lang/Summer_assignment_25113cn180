#include <stdio.h>
int main() 
{
    int balance, choice, amount;
    printf("Enter the initial balance: ");
    scanf("%d",&balance);
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);
    if (choice == 1) 
        printf("Current Balance: $%d\n", balance);
    else if (choice == 2) 
    {
        printf("Enter deposit amount: ");
        scanf("%d", &amount);
        balance = balance + amount;
        printf("Updated Balance: $%d\n", balance);
    } 
    else if (choice == 3) 
    {
        printf("Enter withdrawal amount: ");
        scanf("%d", &amount);
        if (amount <= balance) 
        {
            balance = balance - amount;
            printf("Updated Balance: $%d\n", balance);
        } 
        else 
            printf("Insufficient funds!\n");
    } 
    else 
        printf("Invalid choice!\n");
    return 0;
}