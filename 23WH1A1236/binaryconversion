#include<stdio.h>
void readarray(int [],int);
void printarray(int [],int);
void sum_array(int [],int);
int search(int [],int);
void main()
{
   int B[10],i,n;
   printf("enter number of elements");
   scanf("%d",&n);

   readarray(B,n);
   printarray(B,n);
   sum_array(B,n);


   int a = search(B,n);
  
  if(a==1)
   printf("element is present");
   else
   printf("element is not present");
}
void readarray(int A[],int noe)
{
  printf("enter %d elements ",noe);
  for (int i =0;i<noe;i++)
  scanf("%d",&A[i]);
}
void printarray(int x[],int nm)
{
    int i;
    for(i=0;i<nm;i++)
    printf("%d  ",x[i]);
}
void sum_array(int C[],int num)
{
   int sum = 0;
   for (int i=0;i<num;i++)
    {
         sum = sum+C[i];

    }
  printf("%d \n",sum);
}
int search(int D[],int ni)
{
   int s;
   printf("enter number to be searched");
   scanf("%d",&s);

   for(int i=0;i<ni;i++)
     {
        if(D[i]==s)
      {
        return 1;
             
}
    
      

}
return 0;
}
