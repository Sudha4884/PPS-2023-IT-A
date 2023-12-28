#include <stdio.h>
#include<math.h>
void main()
{
    int P,T,R,S,A,Amount,CI;
    P = 2000;
    T = 2;
    R = 2;
    A = P*T*R;
    S = A/100;
    printf("The SI is: %d",S);
    //Compound Interest
    Amount = P*((pow((1 + R/100),T)));
    CI = Amount - P;
    printf("\nCompound Interest is : %d",CI);
}
