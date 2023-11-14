#include<stdio.h>

//different data types sizes
void main()
{
char ch;
signed char sch;
unsigned char uch;
int in;
signed int sin;
unsigned int uin;
signed long int slin;
unsigned long int ulin;
short int shin;
signed short int sshin;
unsigned short int ushin;
float f;
double d;
long double ld;

printf("%lu",sizeof(ch));
printf("\n %lu", sizeof(sch));
printf("\n %lu", sizeof(uch));
printf("\n %lu", sizeof(in));
printf("\n %lu", sizeof(sin));
printf("\n %lu", sizeof(uin));
printf("\n %lu", sizeof(slin));
printf("\n %lu", sizeof(ulin));
printf("\n %lu", sizeof(shin));
printf("\n %lu",sizeof(sshin));
printf("\n %lu", sizeof(ushin));
printf("\n %lu", sizeof(f));
printf("\n %lu", sizeof(d));
printf("\n %lu", sizeof(ld));
}
