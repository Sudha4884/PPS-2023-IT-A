#include<stdio.h>
// printing size of different variables

void main(){
    char ch;

    unsigned char uch;

    signed char sch;

    int a;

    unsigned int ui;

    signed int si;

    long int li;
 
    signed long int sli;

    unsigned long int uli;

    short int sI;

    signed short int ssi;

    unsigned short int usi;

    float f;

    double d;

    long double ld;

printf("\n %lu",sizeof( ch));
printf("\n %lu",sizeof (uch));
printf("\n %lu",sizeof (sch));
printf("\n %lu",sizeof( a));
printf("\n %lu",sizeof( ui));
printf("\n %lu", sizeof( si));
printf("\n %lu", sizeof(li));
printf("\n %lu",sizeof( sli));
printf("\n %lu",sizeof (uli));
printf("\n %lu",sizeof(sI));
printf("\n %lu",sizeof (ssi));
printf("\n %lu",sizeof (usi));
printf("\n %lu",sizeof( f));
printf("\n %lu", sizeof(d));
printf("\n %lu", sizeof(ld));

}
