#include <string.h>
#include <stdio.h>
struct complex
{ int a;
  int b;
  
};
void main()
{
struct complex com[10];
for(int i=0;i<10;i++)
{
scanf("%d %d", &com[i].a , &com[i].b);
}
for (int i=0;i<10;i++)
{
if(com[i].b>0)
{
printf("\n %d  +  i%d", com[i].a , com[i].b);
}
else if(com[i].b <0)

{printf("\n%d %di",com[i].a,com[i].b);}
else
{ 
printf("\n%d",com[i].a);
}
}
}
                   
                                              
