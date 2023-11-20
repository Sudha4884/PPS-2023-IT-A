#include<stdio.h>
void main() 
{
  int n,i,r;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Enter number of rows: ");
  scanf("%d", &r);
  for (int i = 1; i <= r; i++) 
  {
    printf("%d * %d = %d \n", n, i, n * i);
  }

}
