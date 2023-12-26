#include <stdio.h>
int gcd(int x, int y){
    if(y==0)
        return x;
    else
        return gcd(y, x % y);
}
int main() {
    int x,y;
    printf("enter x,y:");
    scanf("%d%d",&x,&y);
    printf("gcd is %d", gcd(x,y));
    return 0;
}
