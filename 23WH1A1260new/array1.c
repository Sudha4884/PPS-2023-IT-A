#include<stdio.h>
int main(){
int i,n;
int arr[5]={0};
scanf("%d",&n);
printf("enter some elements");
for(i=0;i<=n;i++)
scanf("%d",&arr[i]);
for(i=0;i<=n;i++)
printf("%d\n",arr[i]);
return 0;
}


