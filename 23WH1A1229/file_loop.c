#include<stdio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
char ch,c;
fp = fopen("Myfile.txt","w");
if(fp == NULL)
{
puts("\n Problem in creating the file");
exit(-1);
}
else
{
puts("\n file created");
while((ch = getchar())!= EOF)
{
putc(ch,fp);
}
fclose(fp);
fp = fopen("Myfile.txt","r");
puts("\n The Text got from the file is");
while((ch = getc(fp))!=EOF)
putchar(ch);
}
}
