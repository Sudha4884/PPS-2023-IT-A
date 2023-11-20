#include <stdio.h>

int main() 
{
    float percentage;
    printf("Enter the percentage of marks: ");
    scanf("%f", &percentage);
    if (percentage < 40.0) {
        printf("Class: Failed\n");
    } else if (percentage >= 40.0 && percentage < 60.0)
    {
        printf("Class: 2nd Class\n");
    } else if (percentage >= 60.0 && percentage < 70.0)
    {
        printf("Class: 1st Class\n");
    } else {
        printf("Class: Distinction\n");
    }

    
}