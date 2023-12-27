#include<stdio.h>
void greeting(int n)
{
 for( int i = 1; i <= n; i++)
	 {
    printf("Good Morning"\n);
	 }
    return;
 }
 int main()
 {
 	int n;
 	printf("Enter a Number");
 	scanf("%d",&n);
 	 greeting(n);
 	 return 0;
 }
