#include <stdio.h>
void main()
{
    int A[10];
    int even[5] = {0,2,4,6,8};
    int odd[5] = {1,3,5,7,9};
    int i,index,elen,olen;
    elen = olen;
    index = 0;
    for(i=0;i<elen;i++)
    {
        A[index]=even[i];
        index++;
    }
    for(i=0;i<olen;i++)
    {
        A[index]=odd[i];
        index++;
    }
    printf("\n Even: ");
    for(i=0;i<elen;i++)
        printf("%d",even[i]);
    printf("\n Odd: ");
    for(i=0;i<olen;i++)
        printf("%d",odd[i]);
    printf("\n Concatenate: ");
    for(i=0;i<10;i++)
        printf("%d",A[i]);
}
