#include <stdio.h>
// Power and square root of a number
int main() {
    int x,power,root;
    printf("enter value of x:");
    scanf("%d",&x);
    root = sqrt(x);
    power = pow(x,2);
    printf("root value = %d \n",root);
    printf("power is = %d \n",power);
}
