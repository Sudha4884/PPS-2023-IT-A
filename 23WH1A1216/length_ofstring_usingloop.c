// length of string using while loop
#include<stdio.h>
#include<string.h>
void main()
{ int count=0,i=0;
char name[30];
printf("enter name");
gets(name);
while(name[i]!=0)
{ count++;
  i++;
}
printf("string length is %d",count);
}
