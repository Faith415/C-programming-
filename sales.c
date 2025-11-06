/*
faith 
reg no:ct101/g/26530/25
programme : sales.c
*/



#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    file = fopen("sales.txt", "r");  // Open in read mode
    if (file == NULL) {
        printf("Error opening sales.txt file!\n");
        return 1;
    }

    // Read each transaction and add to total
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);  // Close the file

    printf("Total Sales for the Day: %.2f\n", total);

    return 0;
    }