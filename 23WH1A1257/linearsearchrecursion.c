#include<stdio.h>
int linear_search(int[],int,int);
void print_array(int[],int);
void main(){
	int a[10],n,res,i,k;
	printf("\n enter n value");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	print_array(a,n);
	printf("enter k value");
	scanf("%d",&k);
	res= linear_search(a,n,k);
	if(res==-1)
		printf("element is not found");
	else
		printf("element is found at %d",res);
}
void print_array(int a[10],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
int linear_search(int x[10],int n,int k){

	if(n ==0)
		return -1;
	else{
		 if(k == x[n-1])
			return n-1;
		else
			return linear_search(x,n-1,k);
	}
}
	
