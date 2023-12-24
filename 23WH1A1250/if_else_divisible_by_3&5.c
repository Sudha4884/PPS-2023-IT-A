#include <stdio.h>
// check whether number is divisible by 3 or 5 or both
int main() {
    int num;
    printf("enter num:");
    scanf("%d",&num); 
    if (num>0) {
        if(num%3 == 0 && num%5 == 0) {
            printf("number is divisible by both 3 and 5!");
        }
        else if(num%3 == 0) {
            printf("number is divisible by only 3!");
        }
        else if(num%5 == 0) {
            printf("number is divisible by only 5!");
        }
    }
    else {
        printf("given number is invalid!");
    }
