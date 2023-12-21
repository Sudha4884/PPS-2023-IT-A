#include<stdio.h>
int binarysearch(int[],int,int,int);
void main()
{
int a[100],n,k,res;
printf("\nenter the number of elements: ");
scanf("%d",&n);
printf("\nenter elements: ");
for(int i=0;i<n;i++)
{
 scanf("%d",& a[i]);
}
printf("\nenter the number to be searched: ");
scanf("%d",&k);

res = binarysearch(a,0,n-1,k);

if(res!= -1)
 printf("\nelement is found at index %d",res);

else
 printf("\nelement not found");
}
int binarysearch(int a[],int low,int high,int ele)
{
int mid;
if(low<=high)
 {
   mid = (low+high)/2;
   if(ele==a[mid])
     return mid;
   else if(ele<a[mid])
     return binarysearch(a,low,mid-1,ele);
   else
     return binarysearch(a,mid+1,high,ele);
 }
else 
  return -1;
}
