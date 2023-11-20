#include<stdio.h>
#include<string.h>
void main(){
struct student{
char name[20];
int r_no;
float cgpa;
char branch[20];
};

struct student *sptr,s1;
sptr=&s1;
printf("Enter req values: ");
scanf("\n %s %d %f %s", &sptr->name, &sptr->r_no, &sptr->cgpa, &sptr->branch);

printf("\n %s \n%d \n%.1f \n%s", sptr->name, sptr->r_no, sptr->cgpa, sptr->branch);
}
