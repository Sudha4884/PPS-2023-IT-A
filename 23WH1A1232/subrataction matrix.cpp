#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("enter the first matrix elements:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix elements:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		scanf("%d",&b[i][j]);
	}
	}
	printf("the sub of two matrices is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]-b[i][j];
			printf("\n%d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
