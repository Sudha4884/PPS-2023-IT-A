#include<stdio.h>
int gcd(int,int);
void main(){
	int a,b,res;
	printf("\n enter a,b values");
	scanf("%d%d",&a,&b);
	res=gcd(a,b);
	printf("\n gcd of %d and %d is %d",a,b,res);
}
int gcd(int x,int y){

	if(y==0)
		return x;
	else
		return gcd(y,x%y);
	
}

