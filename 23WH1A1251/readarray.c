#include<stdio.h>
void readArray(int x[],int no)
{
	int i;
	printf("Enter %d number of elements: ",no);
	for(i=0;i<no;i++)
	{
		scanf("%d",&x[i]);
	}
}
void printArray(int x[],int no)
{
	int i;
	for(i=0;i<no;i++)
	{
		printf("%d  ",x[i]);
	}
}
void sumArray(int x[],int no)
{
	int i,sum=0;
	for(i=0;i<no;i++)
	{
		sum = sum+x[i];
	}
	printf("\nSum is %d",sum);
}
void searchArray(int x[],int no)
{
	int i,k,count=0;
	printf("\nEnter k: ");
	scanf("%d",&k);
	for(i=0;i<no;i++)
	{
		if (k == x[i])
		{
			count++;
		}
	}
	if (count>0)
	{
		printf("%d is present",k);
	}
	else 
	{
		printf("%d is not present",k);
	}
}
void maxArray(int x[],int no)
{
	int i;
	int max=x[0];
	for(i=0;i<no;i++)
	{
		if (max<x[i])
		{
			max = x[i];
		}
	}
        printf("\n%d is the maximum",max);
}
void minArray(int x[], int no)
{
        int i;
        int min=x[0];
        for(i=0;i<no;i++)
        {
                if (x[i]<min)
                {
                        min = x[i];
                }
        }
        printf("\n%d is the minimum",min);
}
void main()
{
	int A[10],n;
	printf("Enter n: ");
	scanf("%d",&n);
	readArray(A,n);
	printArray(A,n);
	sumArray(A,n);
	searchArray(A,n);
	maxArray(A,n);
	minArray(A,n);
	duplicateArray(A,n);
}



