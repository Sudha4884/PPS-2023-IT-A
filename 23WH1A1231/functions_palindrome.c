#include<stdio.h>
int palindrome(int);
void main() 
{
int n,ans;
printf("enter n");
scanf("%d", &n);
ans = palindrome(n);
if(ans == 1) 
{printf("palindrome");
}
else{
printf("not palindrome");
}

}


int palindrome(int n)
{
int reversed=0;
int original = n;
while (n!=0)
{

reversed = (reversed*10)+ n%10;
n = n/10;
}
if(original == reversed) 
{return 1;
}else
{return 0;
}
}

