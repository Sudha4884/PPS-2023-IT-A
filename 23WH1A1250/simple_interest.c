#include <stdio.h>
// simple interest
int main() {
    int p,t,r,SI;
    printf("enter p,t,r values: ");
    scanf("%d%d%d",&p,&t,&r);
    SI = p*t*r/100;
    printf("simple interest is = %d \n",SI);
}
