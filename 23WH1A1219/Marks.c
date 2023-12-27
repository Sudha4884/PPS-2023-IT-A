#include<stdio.h>
int main() {
    int marks;
    printf("Enter Marks:");
    scanf("%d", &marks);
    if (marks<40)
    printf("Fail");
    else if (marks >=40 && marks<60)
    printf("Second Class");
    else if (marks>=60 && marks < 70)
    printf("First Class");
    else if (marks >= 70)
    printf("Distinction");
    else
    printf("INVALID INPUT");
}




