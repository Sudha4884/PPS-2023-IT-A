// structure

#include<stdio.h>

struct complex{
int real, img;
};

struct complex accept()
{
	struct complex c;
	printf("\n enter real part");
	scanf("%d",&c.real);
	printf("\n Enter  imaginary part:");
	scanf("%d",&c.img);
	return c;
}

void display(struct complex z)
{
	printf("\n %d + %di",z.real,z.img);
}

struct complex operations(struct complex x, struct complex y)
{
	struct complex z;
	char operations;
	printf("enter you arthematic operator choice:");
	scanf(" %c",&operations);
	switch(operations)
	{
	case '+':
		z.real=x.real+y.real;
		z.img=x.img+y.img;
		break;
 	case '-':
		z.real=x.real-y.real;
                z.img=x.img-y.img;
                break;
	case '*':
		z.real = x.real*y.real - x.img*y.img;
		z.img = x.real*y.img + x.img*y.real;
		break;
	}
	return z;
}

void main()
{
	struct complex c1,c2,res;
	c1=accept();
	c2=accept();
	display(c1);
	display(c2);
	res=operations(c1,c2);
	display(res);
}
