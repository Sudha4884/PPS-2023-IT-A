#include<stdio.h>
#include<stdlib.h>
void main() {
FILE *fp;
char ch , c;
fp = fopen("myfirstfile.txt", "w");
if (fp == NULL) {
puts("\n file not created");
exit(-1);
}
else {
puts("\n file created");
}
ch = getchar();
putc(ch,fp);
fclose(fp);
fp = fopen("myfirstfile.txt", "r");
c = getc(fp);
putc(c, fp);
}
