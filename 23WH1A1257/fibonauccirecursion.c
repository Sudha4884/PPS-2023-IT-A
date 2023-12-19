#include<stdio.h>
int fibnaucci(int);
void main(){
	int n,i;
	printf("enter n value");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		printf("%d\t",fibnaucci(i));
}
int fibnaucci(int i){
	if(i==0)
		return 0;
	else if(i==1)
		return 1;
	else
		return fibnaucci(i-1)+fibnaucci(i-2);
}
