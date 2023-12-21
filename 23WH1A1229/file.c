#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
char ch,c;
fp= fopen("My Firstfile.txt","w");
if(fp == NULL)
{
puts("\n Problem in creating the file");
exit(-1);
}
else
{
puts("\n file created");
ch = getchar();
putc(ch,fp);
fclose(fp);
fp = fopen("My Firstfile.txt","r");
c = fgetc(fp);
puts("\n The charater got from the file is");
putchar(c);
}
}
 
