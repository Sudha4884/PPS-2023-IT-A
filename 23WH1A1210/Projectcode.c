#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char *text, int step) {
    int length = strlen(text);
    for (int i = 0; i < length; i++) {
        if (isalpha(text[i])) {
            if (isupper(text[i])) {
                text[i] = (text[i] + step - 'A') % 26 + 'A';
            } else {
                text[i] = (text[i] + step - 'a') % 26 + 'a';
            }
        }
    }
}
 
void decrypt(char *text, int step) {
    encrypt(text, -step);
}

int main() {
    char original_text[100];
    int encryption_step, decryption_step;

    printf("Enter the original text: ");
    fgets(original_text, sizeof(original_text), stdin);
    original_text[strcspn(original_text, "\n")] = '\0';  // Remove newline character

    printf("Enter the encryption step: ");
    scanf("%d", &encryption_step);

    encrypt(original_text, encryption_step);
    printf("\nEncrypted text: %s\n", original_text);

    printf("\nEnter the decryption step: ");
    scanf("%d", &decryption_step);

    decrypt(original_text, decryption_step);
    printf("\nDecrypted text: %s\n", original_text);

    return 0;
}
