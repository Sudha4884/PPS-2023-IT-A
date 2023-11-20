#include <stdio.h>
void main()
{
    int n1=0,n2=1,n3,i,num;
    printf("Enter elements: ");
    scanf("%d",&num);
    printf("%d\n",n1);
    printf("%d\n",n2);
    for(i=1;i<num-1;i++)
    {
        n3 = n1+n2;
        printf("%d\n",n3);
        n1 = n2;
        n2 = n3;
    }
}
