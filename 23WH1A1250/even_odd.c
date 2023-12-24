#include <stdio.h>
// check whether number is even or odd
int main() {
    int num;
    printf("enter num:");
    scanf("%d",&num);
    if(num%2 == 0) {
        printf("number is even!");
    }
    else {
        printf("number is negative!");
    }
}
