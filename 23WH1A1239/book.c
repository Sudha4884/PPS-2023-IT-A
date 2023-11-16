#include<stdio.h>
struct book
{
 char name[20];
 int pages;
 char author[10];
 int price;
};
void main() 
{
 int i,n;
 struct book b[10];
 printf("\n Enter n: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 { 
  printf("\n Enter Name, Author,Price, Pages  of book: ");
  scanf("%s%s%d%d",b[i].name,&b[i].author,&b[i].price,&b[i].pages);
  printf("\n %s %d %s %d ",b[i].name,b[i].pages,b[i].author,b[i].price);
 }
}

