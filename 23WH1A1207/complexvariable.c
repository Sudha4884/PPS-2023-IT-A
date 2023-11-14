#include<stdio.h>
struct complex
{
int a,b;
};
void main()
{
struct complex c1;
puts("\n Enter real and imaginary parts");
scanf("%d %d",&c1.a,&c1.b);
printf("%d+%di",c1.a,c1.b);
}
