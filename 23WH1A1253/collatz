#include<stdio.h>
int collatz(int num)
{
	int count=0;
	while(num > 1)
	{
		if (num%2==0)
		{
			num=num/2;
			printf("\n%d",num);
			count++;
			
		}
		else 
		{
			num=num*3+1;
			printf("\n%d",num);
			count++;
		}
	}
return count;
}
void main()
{
	int n1,cnt;
	printf("Enter a number: ");
	scanf("%d",&n1);
        printf("Collatz sequence from n1 %d",n1);
	cnt=collatz(n1);
	printf("NUmber of terms in the sequence %d",cnt);
}
