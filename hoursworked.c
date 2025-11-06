#include <stdio.h>

int main() {
    float hours, rate, grossPay, tax, netPay;
    float overtimeHours, regularHours;

    // Request input from the user
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate overtime and regular hours
    if (hours > 40) {
        overtimeHours = hours - 40;
        regularHours = 40;
    } else {
        overtimeHours = 0;
        regularHours = hours;
    }

    // Compute gross pay (time and a half for overtime)
    grossPay = (regularHours * rate) + (overtimeHours * rate * 1.5);

    // Compute tax
    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Compute net pay
    netPay = grossPay - tax;

    // Display results
    printf("\n--- PAYSLIP ---\n");
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes:     $%.2f\n", tax);
    printf("Net Pay:   $%.2f\n", netPay);

    return 0;
}