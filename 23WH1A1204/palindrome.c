#include <stdio.h>
int main()
{
    int a; int rev=0;
    scanf("%d",&a);
    int n=a;
    while(a!=0)
    {
        rev=(rev*10)+(a%10);
        a=a/10;
    }
    printf("%d",rev);
    if(rev==n)
    {
        printf("palindrome");
    }

    
}
