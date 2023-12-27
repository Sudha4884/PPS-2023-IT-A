#include <stdio.h>
#include <math.h>

int main() {
    const float acceleration = 9.8; 
    const float initialVelocity = 0;
    const float floorHeight = 3.0; 

    int numFloors;

    
    printf("Enter the number of floors in the building: ");
    scanf("%d", &numFloors);

    
    printf("\nTime taken to reach each floor:\n");
    for (int floor = 1; floor <= numFloors; ++floor) {
        // Using the formula s = ut + (1/2)at^2 to find time (t)
        float time = sqrt((2 * floorHeight * floor) / acceleration);
        printf("Floor %d: %.2f seconds\n", floor, time);
    }

    return 0;
}
