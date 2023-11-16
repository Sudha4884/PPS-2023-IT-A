#include<stdio.h>
struct complex
{
int real,img;
};
void main()
{
int n,i;
struct complex com[n];
for(i=0;i<n;i++)
{
printf("\n enter vaue of n");
scanf("%d",&n);
}
for(i=0;i<n;i++)
{
printf("\n enter values of real,complex);
scanf("%d%d",&com[i].real,&com[i].img);
}
for(i=0;i<n;i++);
{
printf("\n %d+%di",com[i].real,com[i].img);

}
