#include <stdio.h>
int main() {
    int a,b,sum,sub,mult,division,rem;
    printf("enter values of a,b:");
    scanf("%d%d",&a,&b);
    sum = a + b;
    sub = a - b;
    mult = a * b;
    division = a/b;
    rem = a % b;
    printf("sum is = %d \n",sum);
    printf("sub is = %d \n",sub);
    printf("mult is = %d \n",mult);
    printf("division is = %d \n",division);
    printf("rem is = %d \n",rem);
}
