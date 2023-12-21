#include<stdio.h>
#include<stdlib.h>
void main() {
FILE *fp,*fq,*fr;
char ch,c;
fp = fopen("source1.txt", "w");
fq = fopen("source2.txt", "w");
fr = fopen("target.txt", "w");
if (fp == NULL || fq == NULL || fr == NULL)
{
puts("file not created");
exit(-1);
}
else {
puts("file created");
}
printf("enter data in source1: ");
while (( ch = getchar()) != EOF)
{
putc( ch, fp);
}
printf("enter data in source2: ");
while (( ch = getchar()) != EOF)
{
putc( ch, fq);
}
fclose(fp);
fclose(fq);
fp = fopen("source1.txt", "r");
fq = fopen("source2.txt", "r");
puts("The TEXT got from the file 1 and file 2 is sent to target file");
while(( ch = getc(fp)) != EOF)
{
putc( ch,fr);
}
while((ch = getc(fq)) != EOF)
{
putc( ch, fr);
}
fclose(fp);
fclose(fq);
fclose(fr);
fr = fopen("target.txt", "r");
while ((ch=getc(fr))!= EOF)
{
putchar(c);
fclose(fr);
}
}

