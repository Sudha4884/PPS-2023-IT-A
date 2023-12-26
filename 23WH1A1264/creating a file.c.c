#include <stdio.h>

int main() {
    FILE *filePointer; // File pointer to handle file operations

    // Open file in write mode ("w")
    filePointer = fopen("file.txt", "w");

    // Check if file is opened successfully
    if (filePointer == NULL) {
        printf("Unable to create the file.\n");
        return 1; // Exit the program with an error code
    }
    else
    {
    // Write content to the file
    printf(filePointer, "Hello, this is a sample file created using C programming language.\n");

    // Close the file
    fclose(filePointer);

    printf("File created successfully.\n");

    return 0; // Exit the program with success code
}  
}

