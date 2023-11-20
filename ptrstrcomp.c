#include<stdio.h>
#include<string.h>

void main(){

struct comp {
int real, img;
};

struct comp *cptr, c1;
cptr= &c1;

printf("Enter values: ");
scanf("\n %d %d", cptr->real, cptr->img);

printf("\n %d+%di", cptr->real, cptr->img);

}
