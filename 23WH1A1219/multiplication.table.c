#include<stdio.h>

int main() 
{
    int i,n,rows;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter rows:");
    scanf("%d", &rows);
    for(i = 1;i<=rows; i++) 
	{
        printf("%d * %d = %d\n", n,i,n*i);
    }
  return 0;
}
/*Enter n:5
Enter rows:3
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15

------------------*/
