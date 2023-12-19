//strcut complex
#include<stdio.h>
struct complex
{
int img,real;
};
 struct complex accept()
{
	struct complex c;
 
	printf("\n enter real part:");
	scanf("%d",&c.real);
	printf("\n enter img part:");
	scanf("%d",&c.img);
	return c;
}
struct complex add(struct complex x, struct complex y)
{
	struct complex z;
	z.real = x.real* y.real-x.img*y.img;
	z.img = x.img*y.real+x.real*y.img;
	return z;
}
	void display(struct complex z)
{
	printf("\n%d + %di",z.real,z.img);
}
void main()
{
	struct complex c1,c2,res;
	c1= accept();
	c2= accept();
	display(c1);
	display(c2);
	res = add(c1,c2);
	display(res);
}



