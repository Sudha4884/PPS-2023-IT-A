#include<stdio.h>
int naturalsum(int);
void main(){
int n, res;
printf("Enter number: ");
scanf("%d", &n);
res =  naturalsum(n);
printf("%d", res);
}

int naturalsum(int n){
if(n == 0)
    return 1;
else
    return n+ naturalsum(n-1);
}
