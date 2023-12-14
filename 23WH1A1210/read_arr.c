#include <stdio.h>
void readArray(int[], int);
void printArray(int[], int);
void sumArray(int[], int);
void main(){ 

int arr[10], i, num;
printf("Enter num: ");
scanf("%d", &num);
readArray(arr[], num);
printArray(arr[], num);
sumArray(arr[], num);
} 

void readArray(int A, int n){

int i;
printf("Enter array elements: ");
for( i=0; i<n; i++)
scanf("%d", &A[i]); 

}

void printArray(int X, int noe){
 
int i;
printf("The array elements are: ");
for (i=0; i<noe; i++)
printf("%d", X[i]); 

}

void sumArray(int R, int r){

int i, sum = 0;

for (i = 0; i< r; i++);
sum = sum+i;
printf("Sum of elements is: %d", sum);

} 
