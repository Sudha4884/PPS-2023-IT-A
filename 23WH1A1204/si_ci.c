 #include <stdio.h>
#include <math.h>

void main() {
   
    float principal, rate, time;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    
    float simple_interest = (principal * rate * time) / 100;

    float compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    
    printf("\nResults:\n");
    printf("Principal Amount: %.2f\n", principal);
    printf("Rate of Interest: %.2f % \n", rate);
    printf("Time Period: %.2f years\n", time);
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
}
