#include<stdio.h>
int gcd(int, int);
void main(){
int x, y;
printf("Enter 2 numbers: ");
scanf("%d %d", &x, &y);
int res = gcd(x, y);
printf("%d", res);
}

int gcd(int a, int b){
if (b == 0)
    return a;
else
   return gcd(b, a%b);

}
