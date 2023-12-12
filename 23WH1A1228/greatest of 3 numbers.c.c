#include <stdio.h>
int main()  
{int a,b,c;
printf("\n Enter any three values");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
    if(a>c)
    {
        printf("\n a is bigger");
    }
    else
    {
        printf("\n c is bigger");
    }
}
    else 
{
    if(b>c)
    {
        printf("\n b is bigger");
    }
    else
    {
        printf("\n c is bigger" );
    }
    }

    return 0;
}
