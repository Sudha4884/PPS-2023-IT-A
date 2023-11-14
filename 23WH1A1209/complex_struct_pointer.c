#include<stdio.h>
#include<string.h>
void main(){
struct comp{
int real,img;
};
{struct comp *sptr, c;
sptr=&c;
printf("Enter the real and imaginary numbers: ");
scanf("\n%d %d",&sptr->real,&sptr->img);
printf("The complex numbers are:\n%d+ %di");
}
}
