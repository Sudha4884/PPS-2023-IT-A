#include <stdio.h>
// Area and Perimeter of rectangle
int main() {
    int l,b,area,perimeter;
    printf("enter values of l,b");
    scanf("%d%d",&l,&b);
    area = l * b;
    perimeter = 2*(l+b);
    printf("area of rectangle is = %d",area);
    printf("periemter of rectangle is = %d",perimeter);
}
