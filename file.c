#include<stdio.h>
#include<stdio.h>
void main()
{
FILE *fp;
char ch,c;
fp = fopen("my first file.txt","w");
if(fp = NULL)
{
puts("\n problem is creating the file");
exit(-1);
}
else 
{
puts("file created");
ch = getchar();
putc(ch,fp);
fclose(fp);
puts("\n the character got from the file is:");
putchar(c);
}
}


