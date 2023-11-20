#include <stdio.h>
void main(){
    int num,r,sum=0,temp;
    printf("Input  a number: \n");
    num = 153;
    for(temp=num;num!=0;num=num/10){
r=num % 10;
sum=sum+(r*r*r);
    }
    if(sum==temp)
printf("%d is an Armstrong number.\n",temp);
    else
printf("%d is not an Armstrong number.\n",temp);
}