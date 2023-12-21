#include<stdio.h>
int fibo(int);
void main(){
int num;
printf("Enter a number to print fibo series: ");
scanf("%d", &num);
for(int i=0; i<num; i++){
    printf("\n");
    printf("%d", fibo(i));
    }
}
int fibo(int n){
if (n == 0){
    return 0;
    }
else if (n == 1){
    return 1;
    }
else 
    return(fibo(n-1) + fibo(n-2));

}
