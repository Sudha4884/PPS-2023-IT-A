// checking prime number or not
#include<stdio.h>
int main()
{
	int cnt=0,num,i;
	printf("Enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if((num%i)==0)
		cnt++;
	}
	if(cnt==2)
	printf("Prime");
else
	printf("Not prime");
}
