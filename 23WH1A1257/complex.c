#include<stdio.h>
struct complex{
int real,img;
};
void main (){
	struct complex c;
	printf("\n enter real,img  values");
	scanf("%d%d",&c.real,&c.img);
	printf("\n %d + %di",c.real,c.img);         
}
