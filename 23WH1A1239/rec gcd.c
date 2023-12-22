#include <stdio.h>
int gcd(int,int);
void main()
{
    int a,b,res;
    printf("Enter a,b: \n");
    scanf("%d%d", &a,&b);
    res = gcd(a,b);
    printf("%d\n",res);
}
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
        return gcd(b,a%b);
}

