#include <stdio.h>
int main ()
{
    int a,i,count;
    printf("give ur number : ");
    scanf("%d",&a);

    for (i=1;i<=a;i++)
    {
        if (a%i==0)
        {
            count++;
        }
        
    }
    
     if (count==2)
        {
            printf("the number is prime ");
        }
        else 
        {
            printf("it is not a prime ");
        }
}