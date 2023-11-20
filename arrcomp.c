#include<stdio.h>
#include<string.h>
void main(){
struct comp{
int real, img;
};
 struct comp comp1[5];
int i; 
for (i=0; i<2; i++){
printf("Enter real and imaginary values: ");
scanf("%d %d", &comp1[i].real, &comp1[i].img);
}

for (i=0; i<2; i++){

printf("\n%d+%di", comp1[i].real, comp1[i].img);

}
}
