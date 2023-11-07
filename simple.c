#include<stdio.h>

// simple interest

void main(){
int p,t,r;

int si;

printf("Enter P value:");
scanf ("%d", &p);

printf("Enter T value:");
scanf("%d", &t);

printf("Enter R value:");
scanf("%d", &r);

si= p*t*r;
printf("The simple interest is: %d", si);
}
