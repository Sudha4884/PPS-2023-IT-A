#include <stdio.h>

int main() {
    // Declare variables
    int employeeID, totalHours;
    double hourlyRate, salary;

    // Read input from the user
    printf("Enter employee's ID: ");
    scanf("%d", &employeeID);

    printf("Enter total worked hours in a month: ");
    scanf("%d", &totalHours);

    printf("Enter amount received per hour: ");
    scanf("%lf", &hourlyRate);

    // Calculate salary
    salary = totalHours * hourlyRate;

    // Print employee's ID and salary with two decimal places
    printf("Employee ID: %d\n", employeeID);
    printf("Salary: $%.2f\n", salary);

    return 0;
}

