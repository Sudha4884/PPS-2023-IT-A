#include <stdio.h>
void main()
{
    int grade;
    printf("Enter grade: ");
    scanf("%d",&grade);
    if(grade>=70)
        printf("Distinction");
    else if(grade>=60)
        printf("First Class");
    else if(grade>=40)
        printf("Second Class");
    else
        printf("Failed");
}
