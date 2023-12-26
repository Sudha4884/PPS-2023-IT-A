#include <stdio.h>
// conversion of centimeters to meters and kilometers
int main() {
    float cm,m,km;
    printf("Enter length in cm: ");
    scanf("%f", &cm);
    
    m = cm / 100.0;
    km = cm / 100000.0;
    printf("%fcm = %f m \n",cm,m);
    printf("%fcm = %f km \n",cm,km);
}
