#include <stdio.h>
#include <math.h>
void main()
{
    int a[100],i,n,sum=0,sum1=0;
    float avg=0,std,var;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    avg = sum / n;
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((a[i] - avg), 2);
    }
    var = sum1 / (float)n;
    std = sqrt(var);
    printf("Average of array values = %.2f\n", avg);
    printf("variance of all elements = %.2f\n", var);
    printf("Standard deviation = %.2f\n", std);
}

