#include <stdio.h>
void main()
{
    int lim,n1,n2=3,c,f,s=1;
    printf("Range:");
    scanf("%d",&lim);
    while(lim)
    {
        for(n1=2;n1<=n2;n1++)
        {
            for(c=2;c<=n1;c++)
            {
                f=1;
                if((n1%c==0)&&(n2%c==0))
                {
                    f=0;
                    break;
                }
            }
        if(f)
        {
            printf("%d.(%d,%d) are coprimes \n",s++,n1,n2);
            lim--;
            if(lim==0)
                n1=n2+10;
        }
        }
    }
    n2++;
}
