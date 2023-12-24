 // sum of two numbers using functions

#include<stdio.h>
void sum(); // function declaration section
void main( )
 {
 sum();       // function calling
 }
void sum(int a,int b)
 {
 int sum=0;
 printf("enter two numbers");   // defination section
 scanf("%d%d",&a,&b);
 sum=a+b;
 printf("sum = %d\n",sum);
 }

