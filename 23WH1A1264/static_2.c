#include<stdio.h>

 int r()
 {
  static int num=7;
  
  return num--;	
   }	
  void main(){
  for( r();r();r())
  printf("r=%d",r());
 
 }
