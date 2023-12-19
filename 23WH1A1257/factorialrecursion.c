#include<stdio.h>
int factorial(int);
void main(){
	int n,res;
	printf("enter n value");
	scanf("%d",&n);
	res=factorial(n);
	printf("%d is the factorial",res);
}
int factorial(int n){
	if(n==0)
		return 1;
	else
		return n* factorial(n-1);
}
