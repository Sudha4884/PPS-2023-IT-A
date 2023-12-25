#include <stdio.h>
// check whether number is positive or negative
int main() {
    int num;
    printf("enter num:");
    scanf("%d",&num);
    if(num > 0) {
        printf("number is positive!");
    }
    else if(num < 0) {
        printf("number is negative!");
    }
    else {
        printf("the number is zero or invalid");
    }
}
