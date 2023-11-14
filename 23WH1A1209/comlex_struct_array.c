#include<stdio.h>
#include<string.h>
void main(){
struct comp
{int real, img;
};
struct comp c[10];
int i;
printf("Enter the real and imaginary numbers: ");
for (i=0; i<10; i++){
scanf("\n %d %d",&c[i].real, &c[i].img);
}
printf("The complex numbers are: ");
for (i=0; i<10; i++)
{if (c[i].img>0)
{printf("\n%d + %d i",c[i].real,c[i].img);}
if (c[i].img<0)
{printf("\n%d  %d i",c[i].real,c[i].img);}
}
}
