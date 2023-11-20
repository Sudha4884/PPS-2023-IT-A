#include<stdio.h>
#include<math.h>
int main() 
{
	float p,r,t,CI;
	printf("Enter Principle, rate and time\n");
	scanf("%f%f%f",&p,&r,&t);

/*Formula for calculating 
Compound Interest
*/

	CI = p*pow((1+r/100,t)-1);   
	printf("Compound interest is : %f\n", CI);
  return 0;
}

