#include <stdio.h>
void main()
{
    int n,num,rem,rev;
    printf("Enter a number = ");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
       rem = n%10;
       rev = rev*10+rem;
       n = n/10;
    }
    if (num==rev)
        printf("Palindrome%d",n);
    else
        printf("Not Palindrome");
}
