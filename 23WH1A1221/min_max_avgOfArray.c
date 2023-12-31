#include <stdio.h>
void main()
{
    int a[70],i,p,min,max,sum = 0;
    float avg=0;
    printf("Enter the size of the array : ");
    scanf("%d",&p);
    printf("Enter the elements in array : ");
    for(i=0; i<p; i++)
    {
      scanf("%d",&a[i]);
    }
    min = max = a[0];
    for(i=0; i<p; i++)
    {
         if(min>a[i])
		  min=a[i];
		   if(max<a[i])
		    max=a[i];
        sum = sum + a[i];
    }
     avg = sum / p;
     printf("Minimum of array is : %d",min);
     printf("\n   Maximum of array is : %d",max);
     printf("\n     Average of array values is %f", avg);
}
