#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
int i,n;
fp = fopen("integers.txt","w+");
for(i=1;i<11;i++)
{
puts("\n enter the number");
scanf("%d",&n);
putw(n,fp);
}
fclose(fp);
fp=fopen("integers.txt","r+");
for(i=1;i<11;i++)
{

printf("\n number = %d",getw(fp));

}
fclose(fp);
}
