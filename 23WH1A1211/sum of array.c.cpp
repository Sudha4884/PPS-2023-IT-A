 #include<stdio.h>
 int main()
 {
 	int a[10],i,n,sum=0;
 	printf("enter the numbers into the array");
 	scanf("%d",&n);
 	printf("enter the elements");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 for(i=0;i<n;i++)
	 {
	 sum=sum+a[i];
}
	 printf("the sum of elements are %d",sum);
 }
