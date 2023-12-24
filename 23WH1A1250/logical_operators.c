#include <stdio.h>
// logical operators
int main() {
    int z;
    z = 65;
    printf("%d \n",(z >= 35) && (z <= 65));
    printf("%d \n",(z >= 20) || (z <= 50));
    printf("%d \n",!(z == 65));
}
