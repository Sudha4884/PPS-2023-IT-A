#include <stdio.h>
// greater among 2 numbers using ternary operater
int main() {
    int a,b;
    printf("enter values of a,b:");
    scanf("%d%d",&a,&b);
    printf(" a = %d\n",a);
    printf("b = %d \n",b);
    (a > b? printf("a is greater number!"):printf("b is greater number!"));
}
