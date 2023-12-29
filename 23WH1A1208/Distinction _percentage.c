#include <stdio.h>

void main() {
    float percentage;

    
    printf("Enter percentage of marks: ");
    scanf("%f", &percentage);

    
    if (percentage < 40) {
        printf("Class Awarded: Failed\n");
    } 
    else if (percentage >= 40 && percentage < 60) 
    {
        printf("Class Awarded: Second Class\n");
    }
    else if (percentage >= 60 && percentage < 70) 
    {
        printf("Class Awarded: First Class\n");
    }
    else 
    {
        printf("Class Awarded: Distinction\n");
    }

   
}
