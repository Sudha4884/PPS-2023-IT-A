#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
	if (argc!=3)
	{
		printf("usage:%s<file_name><character>\n",argv[0]);
		return EXIT_FAILURE;
	}
	FILE*file=fopen(argv[1],"r");
	if(file==NULL)
	{
		printf("ERROR:could not open the file'%s'\n",argv[1]);
		return EXIT_FAILURE;
	}
	char character =argv[2][0];
	int count=0;
	char ch;
	while((ch=fgetc(file))!=EOF)
	{
		if(ch==character)
		{
			count++;
		}
	}
	fclose(file);
	printf("the character '%c'appears %d times in the files'%s'\n",character,count,argv[1]);
	
	return EXIT_SUCCESS;
}
