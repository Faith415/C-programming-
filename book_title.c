/*
faith 
reg no:ct101/g/26530/25
programme : book_nsme.c
*/

#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt", "a");  // Open file in append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin);  // Read full line including spaces

    fprintf(file, "%s", title);  // Write title to file
    fclose(file);  // Close file

    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
    }