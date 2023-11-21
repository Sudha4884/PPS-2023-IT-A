#include <stdio.h>

int main() {
  //printf() displays the string inside quotation
  int a,b,c;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b&&a>c)
    printf("%d is max number",a);
    else if (b>a&&b>c)
    printf("%d is max number",b);
    else 
    printf("%d is max number",c);
   if (a<b&&a<c)
    printf("\n %d is min number",a);
    else if (b<a&&b<c)
    printf("\n %d is min number",b);
    else
    printf("\n %d is min number",c);
  return 0;
}
