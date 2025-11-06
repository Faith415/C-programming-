#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void writeInputFile();
void processFile();
void displayFiles();

int main() {
    writeInputFile();   // Step 1: Get 10 integers from user and store in "input.txt"
    processFile();      // Step 2: Read, calculate sum and average, write to "output.txt"
    displayFiles();     // Step 3: Display contents of both files

    return 0;
}

// ------------------------------------------------------
// Function to get 10 integers from user and write to file
// ------------------------------------------------------
void writeInputFile() {
    FILE *fptr;
    int numbers[10];

    fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        printf("Error opening input.txt for writing!\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(fptr, "%d ", numbers[i]);  // write to file
    }

    fclose(fptr);
    printf("\nData successfully written to input.txt\n\n");
}

// ------------------------------------------------------
// Function to read integers, compute sum and average,
// and write results to output.txt
// ------------------------------------------------------
void processFile() {
    FILE *fptrIn, *fptrOut;
    int number, count = 0, sum = 0;
    float average;

    fptrIn = fopen("input.txt", "r");
    if (fptrIn == NULL) {
        printf("Error opening input.txt for reading!\n");
        exit(1);
    }

    // Read integers and compute sum
    while (fscanf(fptrIn, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(fptrIn);

    if (count == 0) {
        printf("No data found in input.txt\n");
        exit(1);
    }

    average = (float) sum / count;

    fptrOut = fopen("output.txt", "w");
    if (fptrOut == NULL) {
        printf("Error opening output.txt for writing!\n");
        exit(1);
    }

    fprintf(fptrOut, "Sum = %d\n", sum);
    fprintf(fptrOut, "Average = %.2f\n", average);

    fclose(fptrOut);
    printf("Results written to output.txt successfully.\n\n");
}

// ------------------------------------------------------
// Function to display contents of both files
// ------------------------------------------------------
void displayFiles() {
    FILE *fptr;
    char ch;

    printf("----- Contents of input.txt -----\n");
    fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        printf("Error opening input.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }
    fclose(fptr);

    printf("\n\n----- Contents of output.txt -----\n");
    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error opening output.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }
    fclose(fptr);

    printf("\n---------------------------------\n");
}