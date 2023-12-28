#include <stdio.h>
// Type casting
int main() {
    int  i=95;
    float x= 5.00;
    char ch = '*';
    i = x;
    printf("i value is %d \n",i);
    x = ch;
    printf("x value is %f \n",x);
    ch = i;
    printf("ch value is %d \n",ch);
}
