#include<stdio.h>
void sum_array(int[],int);
void main(){
	int i,a[10],n;
	printf("\n enter n value");
	scanf("%d",&n);
	printf("\n enter %d elements",n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	sum_array(a,n);
}
void sum_array(int x[10],int noe){
	int i,sum=0;
	for(i=0;i<noe;i++)
		sum=sum+x[i];
	printf("\n sum of array elements is %d",sum);
}
	
	

