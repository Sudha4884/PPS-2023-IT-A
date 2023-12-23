// length of string using built in function

#include<stdio.h>
#include<string.h>
void main()
{ int count=0;
char name[30];
printf("enter name");
gets(name);
count=strlen(name);
printf("string length is %d",count);
}
