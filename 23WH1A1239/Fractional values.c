#include <stdio.h>
void main() {
    float x,n,a,b,c,d;
    printf("Input the Value of x :");
    scanf("%f", &x);
    n = 1-x/2+(x*x)/4-(x*x*x)/6;
    printf("Value = %f",n);
}
