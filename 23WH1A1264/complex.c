#include<stdio.h>
#include<string.h>
 struct complex
{
int real,image;
};
void main()
{
struct complex com[10];
int i;
for(i=0;i<10;i++)
{
printf("\n enter the real,image");
scanf("%d%d",&com[i].real,&com[i].image);
printf("\n%d+\n(%d)i",com[i].real,com[i].image);
}


}
