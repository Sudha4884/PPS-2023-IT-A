#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch,c;
	fp = fopen("my first file.txt","w");
	if(fp==NULL)
	{
		puts("\n problm in creating the file");
		exist(-1);
	}
	else
    {
    	puts("\n file created");
    	while((ch=getchar())!= eof)
    	{
    		putc(ch,fp);
		}
		fclose(fp);
		fp = fopen("my first file.txt","r");
		puts("\n the text got from the file is");
		while((ch=getc(fp))!=eof)
		putchar(ch)
	}
}
