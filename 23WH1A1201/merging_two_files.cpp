#include <stdio.h>

int main() {
    FILE *file1, *file2, *mergedFile;
    char file1Name[100], file2Name[100], mergedFileName[100];
    char ch;

    // Get the first filename from the user
    printf("Enter the first filename: ");
    scanf("%s", file1Name);

    // Open the first file in read mode
    file1 = fopen(file1Name, "r");

    // Check if the first file exists and can be opened
    if (file1 == NULL) {
        printf("Unable to open the first file. Make sure the file exists and is accessible.\n");
        return 1; // Exit the program with an error code
    }

    // Get the second filename from the user
    printf("Enter the second filename: ");
    scanf("%s", file2Name);

    // Open the second file in read mode
    file2 = fopen(file2Name, "r");

    // Check if the second file exists and can be opened
    if (file2 == NULL) {
        printf("Unable to open the second file. Make sure the file exists and is accessible.\n");
        fclose(file1); // Close the first file
        return 1; // Exit the program with an error code
    }

    // Get the merged filename from the user
    printf("Enter the merged filename: ");
    scanf("%s", mergedFileName);

    // Open the merged file in write mode
    mergedFile = fopen(mergedFileName, "w");

    // Check if the merged file can be created/opened for writing
    if (mergedFile == NULL) {
        printf("Unable to open the merged file for writing.\n");
        fclose(file1); // Close the first file
        fclose(file2); // Close the second file
        return 1; // Exit the program with an error code
    }

    // Copy the contents of the first file to the merged file
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergedFile); // Write character to merged file
    }

    // Copy the contents of the second file to the merged file
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergedFile); // Write character to merged file
    }

    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    printf("Files merged successfully!\n");

    return 0;
}

