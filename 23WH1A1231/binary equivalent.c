#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number between 0 and 255: ");
    scanf("%d", &number);
    
    if (number < 0 || number > 255) {
        printf("Number out of range");
    } else {
        int i;
        for (i = 7; i >= 0; i--) {
            int bit = (number >> i) & 1;
            printf("%d", bit);
        }
    }
    
    return 0;
}
