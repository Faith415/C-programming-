/*
name: Faith
reg no: CT101/G/26530/25
programme: withdrawal.c
*/

#include <stdio.h>

int main() {
    int amount;
    int balance = 1000; // start

    printf("Your account balance is %d\n", balance);

    while (balance > 0) { // correct loop condition
        printf("Enter the amount to withdraw: ");
        scanf("%d", &amount);

        if (amount > balance) {
            printf("Insufficient balance!\n");
            break; // stop the loop if withdrawal exceeds balance
        } else {
            balance = balance - amount; // deduct amount
            printf("Withdrawal successful. Remaining balance: %d\n", balance);
        }

        if (balance == 0) {
            printf("Your account balance is now zero.\n");
            break;
        }
    }
return 0;
}
    
