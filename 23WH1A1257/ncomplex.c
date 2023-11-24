#include<stdio.h>
struct complex{
	int real,img;
};
void main(){
	struct complex c[30];
	int i;
	for(i=0;i<5;i++){
	printf("\n enter real,imaginary values");
	scanf("%d%d",&c[i].real,&c[i].img);
	}
	for(i=0;i<5;i++){
	printf("\n %d+%di \n",c[i].real,c[i].img);
	}
}
	
	
