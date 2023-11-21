# include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the coefficients a,b,c from ax^2+bx+c");
    scanf("%d %d %d",&a,&b,&c);
    float r1,r2;
    int d=b*b-4*a*c;
    if(d==0)
    {
        printf("the roots are real");
        r1=r2=-b/2*a;
        printf("the roots are %.2f %.2f",r1,r2);
        
    }

    else if(d>0)
    {
        printf("the roots are real and distinct");
       r1=(-b+sqrt(d))/(2*a); 
       r2=(-b-sqrt(d))/(2*a);
       printf("the roots are %.2f %.2f",r1,r2);
    }
    else
    {
        printf("the roots are imaginary");
         float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(fabs(d)) / (2 * a);
        printf("R 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("R2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
    
    
}
