struct complex
{
int real,imag;
};
void main()
{
int n;
printf("enter number of complex numbers");
scanf("%d",&n);
struct complex*cptr1;
struct complex c1,c2;
cptr1 =&c1;
printf("enter the real and imag part");
scanf("%d%d",&cptr1->real,&cptr1->imag);
printf("%d+i%d",cptr1->real,cptr1->imag);
}

