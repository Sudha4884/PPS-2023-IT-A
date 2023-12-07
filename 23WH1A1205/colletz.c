#include<stdio.h>
int colletzSequence(int);
void main()
{
 int n;
 printf("enter n");
 scanf("%d",&n);
 int colletzSequence(int n)
 {
 while(n>1)
 {
 if(n%2==0)
{
n=n/2;
printf("%d\n",n);
}
else
{
n=(n*3)+1;
printf("%d\n",n);
}
}
}
int n1,count;
printf("enter n1:");
scanf("%d",&n);
printf("colletz sequence is %d\n",n);
count=colletzSequence(n);
}


