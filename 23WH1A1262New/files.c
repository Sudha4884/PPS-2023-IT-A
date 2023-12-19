//time pass be like...........................
#include<stdio.h>
int main()
{
 FILE *fp
 fp = fopen("abc.txt","r");
 if (fp == NULL)
printf("can't open the file..");
 else 
printf("successful");
fclose(fp);
