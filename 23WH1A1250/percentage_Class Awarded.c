#include <stdio.h>
//class awarded for a given percentage of marks
int main() {
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    printf("marks = %d \n",marks);
    float percentage = ((float)marks/100 * 100);
    printf("percentage = %f \n",percentage);
    
    if(percentage > 0) {
        if(percentage < 40) {
            printf("Failed");
        }
        else if(percentage >= 40 && percentage < 60) {
            printf("Second Class");
        } 
        else if(percentage >= 60 && percentage < 70) {
            printf("First Class");
        }
        else if(percentage >= 70 && percentage <= 100) {
            printf("Distinction");
        }
    }
    else {
            printf("Invalid input");
        }
}
