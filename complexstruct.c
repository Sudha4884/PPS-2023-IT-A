#include<stdio.h>
#include<string.h>
struct compl
{
int real, img;
};

void main(){
struct compl compl1;
printf("Enter real and imaginary values: ");
scanf("%d %d", &compl1.real ,&compl1.img);
printf("%d+i%d", compl1.real, compl1.img); 
}
