#include<stdio.h>
void alphabet(char);
void main(){
char x;
printf("enter a char");
scanf("%c",&x);
alphabet(x);
}
void alphabet(char y)
{
int i;
if(y>=65&&y<=90)
{
for(i=65;i<=90;i++)
printf("%c",i);
}
else if(y>=97 && y<=122)
{
for (i=97;i<=122;i++)
printf("%c",i);
}
}
