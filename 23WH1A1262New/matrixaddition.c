//addition of matrices
#include<stdio.h>
int main()
{
int i,j,r,c;
//int a[r][c],b[r][c];
printf("enter a rows and columns: ");
scanf("%d %d",&r,&c); 
int a[r][c],b[r][c];
printf("enter values of first matrix:");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
	
}

for(i=0;i<r;i++)
{
        for(j=0;j<c;j++)
        {
    
        printf("\t %d",a[i][j]);
        }
	printf("\n");
}

printf("enter values of second matrix:");
 for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
        scanf("%d",&b[i][j]);
        }
	
        }
for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
        printf("%d\t",a[i][j]+b[i][j]);
	}
	printf("\n");
         }
return 0;
}
