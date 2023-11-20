#include <stdio.h>
#include<conio.h>
#include<string.h>
   int romanToDecimal(char romanNumeral[]) {
    int decimalNum = 0;
    int i;
    for (i = 0; i < strlen(romanNumeral); i++) {
        switch (romanNumeral[i]) {
            case 'I':
                decimalNum += 1;
                break;
            case 'V':
                decimalNum += 5;
                break;
            case 'X':
                decimalNum += 10;
                break;
            case 'L':
                decimalNum += 50;
                break;
            default:
                printf("Invalid Roman numeral character: %c\n", romanNumeral[i]);
                return -1;
        }
        if (i > 0) {
            if ((romanNumeral[i] == 'V' || romanNumeral[i] == 'X') && romanNumeral[i - 1] == 'I') {
                decimalNum -= 2;
            } else if ((romanNumeral[i] == 'L' || romanNumeral[i] == 'C') && romanNumeral[i - 1] == 'X') {
                decimalNum -= 20;
            }
        }
    }
    return decimalNum;
}
void main() {
    char romanNumeral[10];
    int decimalNum;
    printf("Enter a Roman numeral (I to L): ");
    scanf("%s", romanNumeral);
    decimalNum = romanToDecimal(romanNumeral);
    if (decimalNum != -1) {
        printf("The decimal equivalent of %s is: %d\n", romanNumeral, decimalNum);
    }
}
