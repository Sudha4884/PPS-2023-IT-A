#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE*source_file=fopen("source.txt","r");
	FILE*target_file=fopen("target.txt","w");
	if(source_file==NULL||target_file==NULL)
	{
		printf("Error:one or more of the files does not exist:\n");
		return 1;
	}
	char ch;
	while((ch = fgetc(source_file))!=EOF)
	{
		ch=toupper(ch);
		fputc(ch,target_file);
	}
	fclose(source_file);
	fclose(target_file);
	
	printf("file copied successfully.\n");
	return 0;
}
