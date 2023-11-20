#include <stdio.h>
void main()
{
    int num, i;
    int binary[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    printf("Enter a number between 0 and 255: ");
    scanf("%d", &num);
    if (num < 0 || num > 255) {
        printf("Invalid input\n");
    }
    for (i = 7; i >= 0; i--) {
        if (num >= (1 << i)) {
            binary[i] = 1;
            num -= (1 << i);
        }
    }
    printf("Binary equivalent: ");
    for (i = 0; i < 8; i++) {
        printf("%d", binary[i]);
    }
    printf("\n");
}
