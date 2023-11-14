#include<stdio.h>
struct complex
{
  int real;
  int imag;
};
 int main()
{
  int i;
  struct complex com[10];
printf("%d", com[10]);
  for(i=0; i<10; i++)
{
printf("\n%d + %di", com[i].real, com[i].imag);
} 

return 0;
}
