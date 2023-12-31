#include <stdio.h>
#include <math.h>
void main()
{
    int a[60],i,n,sum=0,sum1=0;
    float mean=0,sd,var;
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
    mean = sum / n;
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((a[i] - mean), 2);
    }
    var = sum1 / (float)n;
    sd = sqrt(var);
    printf("mean of array elements = %f\n", mean);
    printf("variance of elements = %f\n", var);
    printf("Standard deviation of elements = %f\n", sd);
}
