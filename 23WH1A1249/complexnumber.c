#include<stdio.h>
struct complexnum
{
int real;
int imag;
};
void main()
{ 
int i;
struct complexnum com[4];
for(i=0;i<4;i++)
   {
    printf("\n enter real,imag");
    scanf("%d	%d",&com[i].real,&com[i].imag);
   }
for(i=0;i<4;i++)
   {
    printf("\n %d+%di",com[i].real,com[i].imag);
    }
}
