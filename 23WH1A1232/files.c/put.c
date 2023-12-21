#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
int i,n;
fp = fopen("integers.txt","w");
for(i=1;i<=10;i++){
scanf("%d",&n);
putw(n,fp);
}
fclose(fp);
fp = fopen("integers.txt","r+");
for(i = 1;i<=10;i++){
printf("\n Number = %d",getw(fp));
}
fclose(fp);
}
