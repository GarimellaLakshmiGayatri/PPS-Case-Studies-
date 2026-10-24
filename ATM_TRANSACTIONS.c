/*ATM*/
#include <stdio.h>
void main() 
{
    float balance, amount;
    int choice;
    printf("Enter the current account balance: ");
    scanf("%f", &balance);
    printf("\n--- ATM Transactions ---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Current balance: %.2f\n", balance);
            break;

        case 2:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            
            if (amount <= balance) 
            {
                balance -= amount;
                printf("Transaction successful\n");
                printf("Remaining balance: %.2f\n", balance);
            } 
            else 
            {
                printf("Insufficient balance\n");
            }
            break;

        case 3:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Deposit successful\n");
            printf("Updated balance: %.2f\n", balance);
            break;
            
        default:
            printf("Invalid option\n");
    }       
}
