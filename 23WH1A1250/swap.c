#include <stdio.h>
// swap of two numbers using temporary variable
int main() {
    int a,b,temp;
    printf("enter a,b:");
    scanf("%d%d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("a is %d \n",a);
    printf("b is %d \n",b);
}
