 #include<stdio.h>
void readArray(int [],int);
void PrintArray(int [],int );
void search(int [],int);
void main()
{
int A[15],i,n;
printf("\n enter elements of n");
scanf("%d",&n);
printf("elements of array is %d",n);
 readArray(A,n);
 PrintArray(A,n);
search(A,n);
}
void readArray(int Arr[],int n)
{
   int i;
   for(i=0;i<n;i++)
   scanf("%d",&Arr[i]);
}
void PrintArray(int k[],int no)
{
   int i,sum=0;
   for(i=0;i<no;i++)
sum=sum+k[i];
printf("%d",sum);
}
void printArray(int k[],int no)
{
int i;
for(i=0;i<no;i++)
printf("%d",k[i]);
}
void search(int k[],int no)
{
int i,m,count=0;
printf("\n enter value of m");
scanf("%d",&m);
for(i=0;i<no;i++)
{
if(k[i]==m)
count=+1;
}
if(count>0)
printf("\n number is present");
}



