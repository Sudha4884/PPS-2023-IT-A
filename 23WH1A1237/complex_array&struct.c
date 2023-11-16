struct complex
{int real;
int imag;
};
void main()
{
int i,n;
struct complex c[10];
printf("Give number of complex numbers you want to print");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the real and imaginary part of the number");
scanf("%d%d",&c[i].real,&c[i].imag);
}
for(i=0;i<n;i++)
{
printf("\n number is %d+i%d",c[i].real,c[i].imag);
}
} 
