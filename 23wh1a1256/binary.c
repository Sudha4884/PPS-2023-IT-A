//binary
#include<stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("abc.txt","r");
	if(fp = = NULL)
{
	printf("can't open a file");
}
else
{
	printf("succesfull")'
}
	fclose(fp);
}


