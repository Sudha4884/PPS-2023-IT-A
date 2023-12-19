#include<stdio.h>
int main()
{
int binary search( a!,low,high,k);
int mid;
if(low<=high)
mid=(low+high)/2;
if(k==a(mid)){
return mid;
else if(k<a[mid]){
return binary search(a,lowmid-1,k);
else 
retrun binary search(a,mid-1,high,k);
}

