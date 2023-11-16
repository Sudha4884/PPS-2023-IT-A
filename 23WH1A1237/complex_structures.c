struct complex{
int real;
int imag;
};
void main()
{
struct complex c1;
printf("Enter real and imaginary part of 1st number");
scanf("%d%d",&c1.real,&c1.imag);
printf("%d+i%d",c1.real,c1.imag);
}
 
