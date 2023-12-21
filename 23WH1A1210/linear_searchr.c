#include <stdio.h>
int linearsearch(int[], int, int);
void readArray(int[], int);
void printArray(int[], int);
void main(){
    int A[10], n, k1;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("Enter the array: ");
    readArray(A, n);
    printArray(A, n);
    
    printf("Enter element to search: ");
   scanf("%d", &k1);
   int res = linearsearch(A, n, k1);
    printf("%d", res);
}
int linearsearch(int b[], int num, int k){
if (num == 0){
    return -1;
    }
else { 
    if(k == b[num-1]){
        return num-1;
}
    else{
        return linearsearch(b, num-1, k);
    }
}
}

void readArray(int X[], int x){
int i;
for (i=0; i<x; i++){
scanf("%d", &X[i]);
}

}

void printArray(int Y[], int y){
int i;
for (i=0; i<y; i++){
printf("  %d  ", Y[i]);
}
}
