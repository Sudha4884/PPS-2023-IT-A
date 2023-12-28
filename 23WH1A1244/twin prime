#include<stdio.h>
int twinPrimes(int num)
{
	int count=0,i;
	for (i = 1; i<= num; i++)
	{
		if(num % i == 0)
		{
			count++;
		}
	}
	if(count==2)
		{
			printf("Prime");
		}
}
int main()
{
	int n,lb,ub;
	printf("Enter lower bond and upper bond: ");
	scanf("%d %d",&lb,&ub);
	for (n=lb;n<=ub;++n);
	{
		if (twinPrimes(n) && twinPrimes(n+2))
		{
			printf("\n%d %d are twin primes",n,n+2);
		}
		else
		{
			printf("\n%d %d are not twin primes",n,n+2);
		}
	}
}
