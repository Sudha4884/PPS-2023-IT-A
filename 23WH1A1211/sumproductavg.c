#include<stdio.h>
// find sum product and average 
 void main(){
 
int a,b,c,sum,product,avg;

printf("Enter a=");
scanf("%d", &a);

printf("Enter b=");
scanf("%d", &b);

printf("Enter c=");
scanf("%d", &c);

sum= a+b+c;

 product= a*b*c;

 avg= (a+b+c)/3;

printf("\nSum= %d", sum);

printf("\nProduct=%d", product);

printf("\nAverage= %d", avg);

}
