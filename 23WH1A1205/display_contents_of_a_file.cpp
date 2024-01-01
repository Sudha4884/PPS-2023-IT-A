#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file exists and can be opened
    if (file == NULL) {
        printf("Unable to open the file. Make sure the file exists and is accessible.\n");
        return 1; // Exit the program with an error code
    }

    // Read and display contents of the file
    printf("\nContents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // Display character to standard output
    }

    // Close the file
    fclose(file);

    return 0;
}

