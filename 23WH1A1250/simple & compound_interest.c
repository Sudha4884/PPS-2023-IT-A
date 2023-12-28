#include <stdio.h>
// simple interest
int main() {
    float p,t,r,SI,amount,CI;
    p=2.0;
    t=7.0;
    r=5.0;
    // printf("enter p,t,r values: ");
    // scanf("%d%d%d",&p,&t,&r);
    SI = p*t*r/100;
    amount = p * pow((1 + r/100),t);
    CI = amount - p;
    printf("simple interest is = %f \n",SI);
    printf("compound interest is = %f \n",CI);
}
