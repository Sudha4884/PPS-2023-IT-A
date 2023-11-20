#include <stdio.h>
void main() {
    int a,b,c,d;
    printf("Give values of a,b,c,d : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    //Arithmetic operators
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%d\n",a/b);
    printf("%d\n",a%b);
    //Relational Operators
    printf("%d\n",c>d);
    printf("%d\n",c<d);
    printf("%d\n",c>=d);
    printf("%d\n",c<=d);
    printf("%d\n",c==d);
    printf("%d\n",c!=d);
    //Logical Operators
    printf("%d",a&&c);
    printf("%d",a||c);
    //Assignment Operators
    b-=5;
    a+=10;
    c=c*3;
    d=d/2;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    //Increment and Decrement
    c++;
    --d;
    printf("%d\n",c);
    printf("%d\n",d);
    //Conditional Operators
    (a>b)?printf("a>b"):printf("a<b");
    }
