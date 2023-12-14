#include<stdio.h>
int printarray(int a[], int n);
int linearsearch(int a[],int n);
int readarray(int a[], int n);
void main()
{
int a[10],n,res1,res2,res;
int i;
printf("\n");
res1=readarray(a,n);
res2= printarray(a,n);
res = linearsearch(a,n);
if (res==-1)
{
printf("\n search is successfull");
}
else
{
printf("\n search is not successfull");
}
}
int readarray(int a[], int n)
{
int i;
printf("\n enter size of array ");
scanf("%d", &n);
printf("\n %d", n);
for (i=0; i<=n; i++)
{
scanf("%d", &a[i]);
}
return n;
}
int printarray(int a[], int n)
{
int i;
scanf("%d", &n);
for ( i=0; i<n; i++)
{
printf("\n %d", a[i]);
}
return n;
int linearsearch(int a[], int n)
{
int k,i;
printf("\n enter value of k: ");
scanf("%d", &k);
for(i=0; i<n; i++)
{
if (a[i]==k)
return i;
}
return -1;
}
}
