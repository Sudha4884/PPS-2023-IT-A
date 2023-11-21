#include <stdio.h>
void main()
{
    float marks;
    printf("enter your marks in percentage");
    scanf("%f",&marks);
    if (marks<40)
    printf(" failed");
    else if (40<marks&&marks<60)
    printf(" second class" );
    else if (marks>60 && marks<70)
    printf(" first class");
    else 
    printf(" distinction" );
    
    
    
}
