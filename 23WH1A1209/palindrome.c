#include <stdio.h>

int main() {
    int n,r,a,s=0;
    printf("enter a number:");
    scanf("%d",&n);
    a=n;
        while(n>0)
        {
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    if(n==a)
    {
        printf("The number isnt palindrome ",s);
    }
    else
    {
        printf("The number is palindrome");
    }

    return 0;
}
