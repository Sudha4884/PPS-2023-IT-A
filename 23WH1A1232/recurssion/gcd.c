#include<stdio.h>
int gcd(int a, int b);
void main() {
int a,b;
printf("enter the values:");
scanf("%d %d",&a,&b);
printf("gcd of %d and %d id %d",a,b,gcd(a,b));
}
int gcd(int a,int b) {
if (b!=0)
return gcd(b,a%b);
else
return a;
}
                         

