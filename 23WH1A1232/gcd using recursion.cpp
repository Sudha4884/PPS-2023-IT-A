#include<stdio.h>
int gcd(int a,int b) {
	if(b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}
    int main() 
    {
 	int a,b;
 	printf("enter two numbers:");
 	scanf("%d%d",&a,&b);
	printf("the gcd of %d and %d is %d/n",a,b,gcd(a,b));
 	return 0;
 }
	

