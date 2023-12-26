#include <stdio.h>
int main() {
    int num,i,sum;
    printf("enter value of num:");
    scanf("%d",&num);
    i = 1;
    while(i <= num) {
        sum = sum + i;
        i++;
    }
    printf("sum = %d",sum);
}
