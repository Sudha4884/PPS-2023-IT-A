#include <stdio.h>
void main()
{
    int n,num,sum=0,rem;
    printf("num = ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }
    printf("%d",sum);
}
