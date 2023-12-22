#include <stdio.h>
void main()
{
    int i=300;
    while (i<=500)
    {
        i++;
        if(i%3==0)
            printf("\nNumber %d divisible by 3",i);

    }
}
