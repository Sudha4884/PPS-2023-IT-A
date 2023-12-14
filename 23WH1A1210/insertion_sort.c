#include<stdio.h>
void read_array(int [], int);
void print_array(int [], int);
void sort(int [], int);
void main(){
int x[10], num;

printf("Enter no. of elements:");
scanf("%d", &num);

read_array(x,num);      
print_array(x, num);
sort(x, num);
print_array(x, num);
}

void read_array(int A[], int n){
    int i;
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
}

void print_array(int B[], int b){
    int i;
printf("\n The elements are \n");
    for(i=0; i<b; i++){
        printf("%d ", B[i]);
    }
} 

void sort(int y[], int range){

int i, j, ele;

for(i=0; i<range; i++){
    ele = y[i];
    j = i-1;
    while((j>=0) && (y[j]>ele))
    {
        y[j+1] = y[j];
        j--;
    }
      y[j+1] = ele;
    }
}           
