#include <stdio.h>
void main()
{
    int number;int rows;
    printf("enter a number");
    scanf("%d",&number);
    printf("enter number of rows",&rows);
    scanf("%d",&rows);
    for(int i =1;i<=rows;i++)
    {
        printf("%d * %d = %d \n",number,i,i*number);
    }
}
