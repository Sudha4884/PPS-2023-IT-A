#include<stdio.h>
void alphabet(char);
void main() {
char a;
printf("enter character");
scanf("%c",&a);
alphabet(a);
}
void alphabet(char a)
{
if(a >=65 && a<=90) {
for(int i = 65; i<=90; i++) {
printf("%2c", i);
}
}
if(a>=97 && a<=122) {
for(int i = 97; i <= 122; i++){
printf("%2c", i);
}
}
}
