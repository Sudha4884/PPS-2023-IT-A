#include <stdio.h>

int main() {
    // Write C code here
    int n;int count = 0;
    printf("enter the value : ");
    scanf("%d",&n);
    printf("the prime numbers between 1 and %d are",n);
    for(int i=2;i<=n;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            count = count+1;
        }
    
        if (count<=2)
        printf("%3d",i);
    }

    return 0;
}
