#include<stdio.h>
int fibo(int );
void main()
{
int n,i;
printf("Enter a number: ");
scanf("%d", &n);

for (i=0; i<n ; i++)
printf("%d  ", fibo(i));

}

int fibo(int m)
{
if ( m== 0)
   return 0;
else if ( m == 1)
   return 1;
else
return (fibo(m-1)+ fibo(m-2));
}

