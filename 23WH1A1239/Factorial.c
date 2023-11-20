#include <stdio.h>
int factorial(int n)
{
	int i, fact = 1;
	for(i = n; i > 1; i--)
		fact = fact * i;
	return fact;
}
void main()
{
	int n;
	printf("Enter a positive number: ");
	scanf("%d", &n);
	printf("%d! = %d", n, factorial(n));
}
