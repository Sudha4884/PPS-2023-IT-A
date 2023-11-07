#include<stdio.h>
void main(){


int n, r, sum;

printf("Enter the number: ");
scanf("%d", &n);

int n1=n;
while(n>0)
{ 
 r=n%10;
 sum= sum+(r*r*r);
 n= n/10;
}

if (sum== n1)
 {
 printf("Given number is armstrong");
 }

else 
    printf("Given number is not armstrong");
 } 
