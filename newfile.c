#include<stdio.h> 

void main(){
int a= 3661;

int hr= a/3600;
 int min= (60*a)-hr;
int sec= a-min;



printf(" THE TIME IS = %dhr : %dmin : %dsec", hr, min, sec);

}  
