#include <stdio.h>
void main()
{
    int i=300;
    while ((i%3==0)&&(i<=500))
    {
        printf("%d\n",i);
        i=i+3;
    }
}
