#include <stdio.h>
int main() 
{
    int choice;
    float balance, amount;
    printf("Enter the initial balance: ");
    scanf("%d",&balance);
    printf("--- Welcome to the Simple ATM Simulation ---\n");
    while (1) 
    {
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Please select an option (1-4): ");
        scanf("%d", &choice);
        if (choice == 1)
            printf("\nYour current balance is: $%.2f\n", balance);
        else if (choice == 2) 
        {
            printf("\nEnter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) 
            {
                balance += amount;
                printf("Successfully deposited $%.2f. New balance: $%.2f\n", amount, balance);
            } 
            else
                printf("Invalid amount!\n");
        } 
        else if (choice == 3) 
        {
            printf("\nEnter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance) 
                printf("Insufficient funds! Your balance is only $%.2f\n", balance);
            else if (amount <= 0) 
                printf("Invalid amount!\n");
            else 
            {
                balance -= amount;
                printf("Successfully withdrew $%.2f. Remaining balance: $%.2f\n", amount, balance);
            }
        } 
        else if (choice == 4) 
        {
            printf("\nThank you for using our ATM. Goodbye!\n");
            break;
        } 
        else 
            printf("\nInvalid choice! Please select 1-4.\n");
    }
    return 0;
}