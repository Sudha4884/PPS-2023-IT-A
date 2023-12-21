#include<stdio.h>
#include<stdlib.h>
void main() {
FILE *fp;
char ch,c;
fp = fopen("myfile.txt", "w");
if (fp == NULL) {
puts("file not created");
exit(-1);
}
else {
puts("file created");
}
while ((ch = getchar())!= EOF)
{
putc(ch, fp);
}
fclose(fp);
fp = fopen("myfile.txt", "r");
puts("\n The text got from the file is  ");
while ((ch=getc(fp))!= EOF)
{
putchar(ch);
}
}

