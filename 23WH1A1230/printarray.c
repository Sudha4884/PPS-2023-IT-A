#include<stdio.h>
void printArray(int [],int);
int main()
{
int A[10],i,n;
printf("\nEnter n");
scanf("%d",&n);
printf("Enter %d number",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);
printArray(A,n);
}
void printArray(int x[],int noe)
{
int i,size;
size =sizeof(x)/sizeof(x[0]);
printf("\n%d\n",size);
for(i=0;i<noe;i++)
printf("%d ",x[i]);
}

