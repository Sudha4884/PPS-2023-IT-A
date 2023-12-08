#include<stdio.h>
void read_array(int[],int);
void print_array(int [],int);
void main(){
	int n,a[10];
	printf("\n enter n value");
	scanf("%d",&n);
	read_array(a,n);
	print_array(a,n);
}
void read_array(int m[10],int no){
	int i;
	printf("\n enter %d elements",no);
	for(i=0;i<no;i++)
		scanf("%d",&m[i]);
	print_array(m,no);
}

void print_array(int x[10],int noe){
	int i;
	for(i=0;i<noe;i++)
		printf("%d\t",x[i]);
}


