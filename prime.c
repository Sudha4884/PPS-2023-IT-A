#include<stdio.h>
void main(){

int i, n, cnt;
printf("Enter the number: ");
scanf("%d", &n);

cnt=0;
for(i=1; i<=n; i++){ 

   if ((n%i) == 0){
    cnt++;}
  }
  if (cnt==2){
  printf("Prime");
  }
  else 
  printf("Not prime");

}
