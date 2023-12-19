//finding 2'complement of binary number
#include<stdio.h>
#include<string.h>
int main()
{
 char a[15];
 int i,index;
 printf("enter the binary number: ");
 scanf("%s",a);	
 int len = strlen(a);
 for(i=len-1;i>=0;i--)
 {
 if(a[i]=='1')
 {
  index=i;
  break;
 }
 }
 for(i=index-1;i>=0;i--)
{
	if(a[i]=='1')
	   a[i]='0';
        else
           a[i]='1';
}
printf("%s",a);
return 0;
}
