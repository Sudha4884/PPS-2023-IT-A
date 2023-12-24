#include <stdio.h>
int main() {
    char ch;
    printf("enter character:");
    scanf("%c",&ch); 
    if(isalpha(ch)) {
        printf("given charcter is alphabet!");
    }
    else if(isdigit(ch)) {
        printf("given character is number!");
    }
    else {
        printf("it may be symbol!");
    }
}
