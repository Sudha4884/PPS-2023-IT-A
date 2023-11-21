#include<stdio.h>
struct complex
{ int real;
  int imag;
};
int main()
{ struct complex c1;
printf("\n enter real and imag");
scanf("%d%d",&c1.real,&c1.imag);
printf("\n%d%d",c1.real,c1.imag);
}
