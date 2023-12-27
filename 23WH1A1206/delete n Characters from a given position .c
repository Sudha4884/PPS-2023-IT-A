#include <stdio.h>
#include <string.h>

void deleteCharacters(char *str, int position, int n) {
    int length = strlen(str);

    if (position < 0 || position >= length) {
        printf("Invalid position.\n");
        return;
    }

    for (int i = position; i < length - n; i++) {
        str[i] = str[i + n];
    }
    str[length - n] = '\0'; 
}

int main() {
    char inputString[100];
    int position, n;

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Enter the position to start deletion: ");
    scanf("%d", &position);

    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);

    deleteCharacters(inputString, position, n);
    printf("String after deletion: %s\n", inputString);

    return 0;
}
