#include <stdio.h>

int main() {
    int choice;
    float balance = 0, amount;

    do {
        printf("\nBanking System Menu:\n");
        printf("1. Deposit\n2. Withdraw\n3. Balance Inquiry\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposited %.2f\n", amount);
                break;
            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount > balance)
                    printf("Insufficient balance!\n");
                else {
                    balance -= amount;
                    printf("Withdrawn %.2f\n", amount);
                }
                break;
            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
