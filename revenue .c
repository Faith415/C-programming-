/* 
faith 
reg no.ct101/g/26530/25
programme .revenuc
*/


#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0, average;
    int i;

    printf("Enter the revenue for each day of the week:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d revenue: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n\n", average);

    return 0;
}