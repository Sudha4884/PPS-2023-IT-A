#include<stdio.h>
void main(){
int i;
char ch;
float f;
double d;
long int li;
long double ld;
short int si;

printf("Enter character:");
scanf("%c", &ch);

printf("Enter integer value:");
scanf("%d", &i);

printf("Enter float value:");
scanf("%f", &f);

printf("Enter double value:");
scanf("%lf", &d);

printf("Enter long int value");
scanf("%li", &li);

printf("Enter long double value:");
scanf("%Lf", &ld);

printf("Enter short int value:");
scanf("%hd", &si);

printf("The character is: %c", ch);

printf("\n The integer is: %d", i);

printf("\n The float value is: %f", f);

printf("\n The double value is: %lf", d);

printf("\n The long int value is: %li", li);

printf("\n The long double value is: %Lf", ld);

printf("\n The shoert int value is: %hd", si);

}
