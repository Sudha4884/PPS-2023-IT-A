#include<stdio.h>
struct complex
{
int real;
int imag;
};
void main() {
struct complex c1[10];
int i;
for(i=0;i<5;i++) {
printf("Enter real,imag values");
scanf("%d%d", &c1[i].real, &c1[i].imag);
}
for(i=0;i<5;i++) {
printf("%d + %di\n", c1[i].real, c1[i].imag);
}
}
