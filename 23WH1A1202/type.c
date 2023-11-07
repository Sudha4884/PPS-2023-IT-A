#include<stdio.h>
void main()
{
char a;
signed char b;
unsigned char c;
short int d;
int e;
long int f;
signed int g;
unsigned int h;
float i;
double j;

printf("\n sizeof char is = %d", sizeof(char));
printf("\n sizeof signed char is = %d", sizeof(signed char));
printf("\n sizeof unsigned char is = %d", sizeof(unsigned char));
printf("\n sizeof short int is = %d", sizeof(short int));
printf("\n sizeof int is = %d", sizeof(int));
printf("\n sizeof long int is = %d", sizeof(long int));
printf("\n sizeof signed int is = %d",sizeof(signed int));
printf("\n sizeof unsigned int is = %d", sizeof(unsigned int));
printf("\n sizeof float is = %d", sizeof(float));
printf("\n sizeof double is = %d", sizeof(double));


printf("\n sizeof a = %d", sizeof(a));
printf("\n sizeof b is = %d", sizeof(b));
printf("\n sizeof c is = %d", sizeof(c));
printf("\n sizeof d = %d", sizeof(d));
printf("\n sizeof e = %d", sizeof(e));
printf("\n sizeof f = %d", sizeof(f));
printf("\n sizeof g is = %d",sizeof(g));
printf("\n sizeof h is = %d", sizeof(h));
printf("\n sizeof i is = %d", sizeof(i));
printf("\n sizeof j is = %d", sizeof(j));



printf("\n sizeof char constant is = %d",sizeof('a'));
printf("\n sizeof int constant is = %d", sizeof(12));
printf("\n sizeof long int constant is = %d", sizeof(12l));
printf("\n sizeof string constant is = %d", sizeof("EEE"));
printf("\n sizeof float constant is = %d", sizeof(2.4f));
printf("\n sizeof double constant is = %d", sizeof(2.4));



printf("\n exp = %d", sizeof(12 + 12l));
printf("\n %d", sizeof("Meenakshi"));
}
