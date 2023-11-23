#include<stdio.h>
void main() 
{ int n,i;
  printf("enter n value");
  scanf("%d",&n);
 char alphabet[n];
 char *ptr;
 ptr=alphabet;
for(i=0;i<n;i++)
 {// printf("enter n characters\n");
 scanf("%c",&ptr[i]);
 }
for(i=0;i<n;i++)
{  
  printf("character= %c\n",ptr[i]);
//  printf("adress=%d",ptr[i]);
}
}

