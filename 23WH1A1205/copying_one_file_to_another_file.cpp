#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];
    char ch;

    // Get the source filename from the user
    printf("Enter the source filename: ");
    scanf("%s", sourceFilename);

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");

    // Check if the source file exists and can be opened
    if (sourceFile == NULL) {
        printf("Unable to open the source file. Make sure the file exists and is accessible.\n");
        return 1; // Exit the program with an error code
    }

    // Get the destination filename from the user
    printf("Enter the destination filename: ");
    scanf("%s", destinationFilename);

    // Open the destination file in write mode
    destinationFile = fopen(destinationFilename, "w");

    // Check if the destination file can be created/opened for writing
    if (destinationFile == NULL) {
        printf("Unable to open the destination file for writing.\n");
        fclose(sourceFile); // Close the source file
        return 1; // Exit the program with an error code
    }

    // Copy the contents of the source file to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile); // Write character to destination file
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copy successful!\n");

    return 0;
}

