/*
faith 
reg no:ct101/g/26530/25
programme : book_nsme.c
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student s;

    file = fopen("results.dat", "rb");  // Open file for reading in binary mode
    if (file == NULL) {
        printf("Error opening results.dat file!\n");
        return 1;
    }

    printf("\nStudent Examination Results\n");
    printf("---------------------------------\n");

    // Read and display each record
    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("Name: %s\n", s.name);
        printf("Total Marks: %.2f\n\n", s.totalMarks);
    }

    fclose(file);  // Close the file
    return 0;
    }