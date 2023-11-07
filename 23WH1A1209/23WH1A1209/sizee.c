#include<stdio.h>
void main()
{
int integer;
char ch;
float f;
double d;
long double lod;
long int li;


printf("\n Choose a character ");
scanf("%c", &ch);

printf("\n Please enter your number ");
scanf("%d", &integer);

printf("\n The number and character you have given are %d and %c", integer, ch);

printf("\n Give a number again ");
scanf("%f", &f);

printf("\n double: ");
scanf("%lf", &d);

printf("\n long double: ");
scanf("%Lf", &lod);

printf("\n long integer: ");
scanf("%ld", &li);


}
