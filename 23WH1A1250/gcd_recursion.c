#include <stdio.h>
int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main() {
    int a,b;
    printf("enter a,b:");
    scanf("%d%d",&a,&b);
    printf("gcd is %d",gcd(a,b));
    return 0;
}
