#include <stdio.h>

int main() {
    int choice;
    float balance = 500.00;  // Initial balance
    float deposit, withdraw;

    do {
        // Display menu
        printf("\n KDA BANK\n");
        printf("[1] Balance Inquiry\n");
        printf("[2] Deposit\n");
        printf("[3] Withdraw\n");
        printf("[4] Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour current balance is: P%.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to deposit: P");
                scanf("%f", &deposit);
                if (deposit <= 0) {
                    printf("Invalid deposit amount!\n");
                } else {
                    balance += deposit;
                    printf("Successfully deposited P%.2f\n", deposit);
                    printf("New balance: P%.2f\n", balance);
                }
                break;

            case 3:
                printf("\nEnter amount to withdraw: P");
                scanf("%f", &withdraw);

                if (withdraw <= 0) {
                    printf("Invalid withdrawal amount!\n");
                } else if (withdraw > balance - 100) {
                    printf("Withdrawal denied! You must maintain at least P100.00 in your account.\n");
                } else {
                    balance -= withdraw;
                    printf("You successfully withdrawn P%.2f\n", withdraw);
                    printf("Remaining balance: P%.2f\n", balance);
                }
                break;

            case 4:
                printf("\nThank you for using the KDA BANK. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice! Please select a valid option (1-4).\n");
        }

    } while (choice != 4);

    return 0;
}