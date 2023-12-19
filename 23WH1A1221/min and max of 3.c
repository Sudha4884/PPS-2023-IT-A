#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter values of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c)) {
        printf("a is greater \n");
    }
    else if((b>a)&&(b>c)) {
        printf("b is greater \n");
    }
    else {
        printf("c is greater \n");
    }
    if((a<b)&&(a<c))
        printf("a is smaller \n");
    else if((b<a)&&(b<c))
        printf("b is smaller \n");
    else
        printf("c is greater \n");
} 
