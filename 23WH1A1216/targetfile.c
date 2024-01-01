#include<stdio.h>
#include<stdlib.h>
void main()
{

FILE *fs1,*fs2,*ft;
char ch,c;
fs1 = fopen("Source1.txt","w");
fs2 = fopen("Source2.txt","w");
ft = fopen("target.txt","w");
if(fs1 == NULL || fs2 == NULL || ft == NULL)

{
puts("\n Problem in creating the file");
exit(-1);
}
else
{
puts("\n files created");
printf("\n Enter data in Source 1");
while((ch = getchar())!='$')
{
putc(ch,fs1);
}
printf("\n Enter data in Source 2");
while((ch = getchar())!='$')
putc(ch,fs2);
}

fclose(fs1);
fclose(fs2);
fs1 = fopen("Source1.txt","r");
fs2 = fopen("Source2.txt","r");
puts("\n Th TEXT got from the file1 and file2  and sent to the target");
while((ch = getc(fs1))!=EOF)
 putc(ch,ft);
while((ch = getc(fs2))!=EOF)
putc(ch,ft);
fclose(fs1);
fclose(fs2);
fclose(ft);
ft = fopen("target.txt","r");
while((ch = getc(ft))!=EOF)
putchar(ch);
fclose(ft);
}
