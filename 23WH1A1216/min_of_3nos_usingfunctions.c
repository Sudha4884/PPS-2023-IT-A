#include<stdio.h>
int findmin(int , int ,int );
void main()
{ int n1,n2,n3,res;
 scanf("%d%d%d",&n1,&n2,&n3);
 res = findmin(n1,n2,n3);
 printf("\n %d is minimum",res);
 }

 int findmin(int a , int b, int c)
 { if(a<b)
     {if(a<c)
     return a;

    else
    return c;
  }
else

 {
if(b<c)
     return b;

else
       return c;

}
}
