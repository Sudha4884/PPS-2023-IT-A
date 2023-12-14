#include<stdio.h>
	void collatze_sequence(int);
	void main(){
	int n;
	printf("\n enter n value");
	scanf("%d",&n);
	collatze_sequence(n);
	}
	void collatze_sequence(int num){
	printf("%d\t",num);
	while(num>=1){
		if(num%2!=0){
			num=3*num+1;
			printf("%d\t",num);
		}
		else{
			num=num/2;
			printf("%d\t",num);
		}
	}
	}
			
