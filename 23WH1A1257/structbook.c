#include<stdio.h>
struct book{
	char name[40];
	int pages;
	float price;
};
void main(){
	struct book s[50];
	int i,n;
	printf("\n enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("\n enter name,pages,price");
	scanf("%s%d%f",s[i].name,&s[i].pages,&s[i].price);
}
	for(i=0;i<n;i++){
	printf("\n%s\t%d\t%f\n",s[i].name,s[i].pages,s[i].price);
}
}

	
	

