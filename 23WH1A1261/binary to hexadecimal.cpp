#include <stdio.h>
#include <string.h>

// Function to convert binary to hexadecimal
void binaryToHex(char binaryNumber[]) {
    int len = strlen(binaryNumber);

   
    int remainder = len % 4;
    if (remainder != 0) {
        for (int i = 0; i < 4 - remainder; ++i) {
            memmove(binaryNumber + 1, binaryNumber, len + 1);
            binaryNumber[0] = '0';
            len++;
        }
    }


    for (int i = 0; i < len; i += 4) {
        int decimal = 0;
        for (int j = 0; j < 4; ++j) {
            decimal = decimal * 2 + (binaryNumber[i + j] - '0');
        }

       
        char hexDigit;
        if (decimal < 10) {
            hexDigit = decimal + '0';
        } else {
            hexDigit = decimal - 10 + 'A';
        }

        
        printf("%c", hexDigit);
    }

    printf("\n");
}

int main() {
    char binaryNumber[100];

 
    printf("Enter a binary number: ");
    scanf("%s", binaryNumber);

  
    binaryToHex(binaryNumber);

    return 0;
}

