//to count lines , words , icyharacters in a given text
#include<stdio.h>
#include<string.h>
int main()
{
 int i,word,line,character,text;
 printf("enter you text : ");
 scanf("%d",text);
 int len = strlen(text);
 if('\t' || ' ')
 	word += word;
	printf("numkber of words is %d",word);
 else if('\n')
	line += line; 
	printf("number opf lines is %d",line);
 else
	printf("no.of characters is%d",len);
 return 0;
}
