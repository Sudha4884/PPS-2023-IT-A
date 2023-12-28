#include <stdio.h>
// factorial 
int main() {
    int n,fact=1,i;
    printf("enter the value if n:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++) {
    fact = fact * i;                // fact *= i;
    }
    printf("factorial of %d = %d",n,fact);
}
