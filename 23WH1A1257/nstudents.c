#include<stdio.h>
struct student{
	char name[20];
	int rollno;
	float cgpa;
};
void main(){
	struct student s[30];
	int i,n;
	printf("\n enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("\n enter name,rollno,cgpa");
	scanf("%s%d%f",s[i].name,&s[i].rollno,&s[i].cgpa);
	}
	for(i=0;i<n;i++){
	printf("\n%s\t%d\t%f\n",s[i].name,s[i].rollno,s[i].cgpa);
	}
}
	
	
