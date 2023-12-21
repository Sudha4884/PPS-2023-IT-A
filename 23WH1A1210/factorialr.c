#include<stdio.h>
int factorial(int);
void main(){
printf("Enter a number: ");
int num;
scanf("%d", &num);
int res = factorial(num);
printf("%d", res);
}

int factorial(int n){
if(n==0){
    return 1;
    }
else
    return n*factorial(n-1);

}
