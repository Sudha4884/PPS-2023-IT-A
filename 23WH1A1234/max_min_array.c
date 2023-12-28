#include <stdio.h>
void main()
{
    int a[100],i,n,min,max,sum=0;
    float avg=0;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
      scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=0; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];
		   if(max<a[i])
		    max=a[i];
        sum = sum + a[i];
    }
     avg = sum / n;
     printf("Minimum of array is : %d",min);
     printf("\nMaximum of array is : %d",max);
     printf("\nAverage of array values is %f", avg);
}
