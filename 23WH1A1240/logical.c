#include<stdio.h>
void main()
{
int a,b;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
printf("%d",a&&b);
printf("\n%d",a||b);
printf("\n%d\n%d",!(a),!(b));
printf("\n%d",a^b);
printf("%d\n",(~b));
}

