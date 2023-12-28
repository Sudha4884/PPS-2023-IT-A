#include <stdio.h>
// maxium and minium of two numbers
int main() {
    int a,b,c;
    printf("enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a > b && a > c) {
        printf("a = %d is maximum number! \n",a);
    }
    else if(b > a && b > c) {
        printf("b = %d is maximum number! \n",b);
    }
    else {
        printf("c = %d is maxmium number! \n",c);
    }
    
    
    
    if(a < b && a < c) {
        printf("a = %d is minimum number! \n",a);
    }
    else if(b < a && b < c) {
        printf("b = %d is minimum number! \n",b);
    }
    else {
        printf("c = %d is minimum number! \n",c);
    }
}
