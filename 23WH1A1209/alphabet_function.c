#include<stdio.h>
void alphabet(char);
void main(){
char x;
printf("enter a character");
scanf("\n%c",&x);
alphabet(x);
}
void alphabet(char y)
{
char x;
int i;
if (y >=65 && y <=90)
{
for (i=65;i <= 90; i++)
printf("%1c",i);

}
else if (y >=97 && y <= 122)
{
for (i=97; i<=122; i++)
printf("%1c",i);

}
}
