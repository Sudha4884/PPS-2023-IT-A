#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
int i,n;
fp = fopen("Intergers.txt","w+");
for(i=1;i<=10;i++)
{
puts("\nEnter Number");
scanf("%d",&n);
putw(n,fp);
}
fclose(fp);
fp = fopen("Intergers.txt","r+");
for(i=1;i<=10;i++)
{
printf("\n Number = %d",getw(fp));
}
fclose(fp);
}
