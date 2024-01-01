#include <stdio.h>
int main() {
    float p,t,r,SI,amount,CI;
    printf("enter p,t,r values: ");
    scanf("%f%f%f",&p,&t,&r);
    SI = p*t*r/100;
    amount = p * pow((1 + r/100),t);
    CI = amount - p;
    printf("simple interest is = %f \n",SI);
    printf("compound interest is = %f \n",CI);
}
