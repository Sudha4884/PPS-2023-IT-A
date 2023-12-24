#include <stdio.h>
int main() {
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age >= 18) {
        printf("person is elegible for vote!");
    }
    else {
        printf("not eligible to vote!");
    }
}
