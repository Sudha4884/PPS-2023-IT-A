#include<stdio.h>
int main(){
int i,j,n;
int s1[5][4]={0};
scanf("%d%d",&n);
printf("enter elements");
for(i=0;i<=n;i++)
for(j=0;j<=n;j++)
scanf("%d",&s1[i]);
scanf("%d",&s1[j]);
for(i=0;i<=n;i++)
for(j=0;j<=n;j++)
printf("%d",s1[i][j]);
return 0;
}


