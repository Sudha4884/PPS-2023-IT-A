
# include<stdio.h># include<stdio.h>
void sumofarray(int[],int);
void main()
{
int A[10],i,n;
printf("\n enter n");
scanf("%d",&n);
printf("\n enter %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);
sumofarray(A,n);
}
void sumofarray(int x[],int no)
{
int i,sum=0;
for(i=0;i<no;i++)
 sum=sum+x[i];
printf("%d\n",sum);
}



~        
void printArray(int[],int);
void main()
{
int A[10],i,n;
printf("\n enter n:");
scanf("%d",&n);

printf("\n enter %d elements ",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);
printArray(A,n);
}
void printArray(int x[],int no)
{
int i;
for(i=0;i<no;i++)
printf("%d\n",x[i]);
}

