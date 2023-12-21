#include<stdio.h>

void main()
{
FILE *fp;
char a;
int b;
float c;
fp = fopen("mixed.txt","w");
scanf("%c %d %f",&a,&b,&c);
fprintf(fp,"%c %d %f",a,b,c);
fclose(fp);
fp=fopen("mixed.txt","r");
fscanf(fp,"%c %d %f",&a,&b,&c);
printf("\n %c %d %f",a,b,c);
fclose(fp);
}

