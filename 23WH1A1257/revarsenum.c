#include<stdio.h>
void main(){
	int i,r,reversenum,num;
	printf("\n enter any number");
	scanf("%d",&num);
	reversenum=0;
	while(num>0){
		r=num%10;
		reversenum=reversenum*10+r;
		num=num/10;
	}
	printf("\n reversednum=%d",reversenum);
}

	
