#include <stdio.h>
void main()
{
    int grade;
    printf("Enter grade: ");
    scanf("%d",&grade);
    if(grade>=70)
        printf("first class");
    else if(grade>=60)
        printf("second");
    else if(grade>=40)
        printf("third Class");
    else
        printf("Failed");
}
