#include<stdio.h>
int main()
{
	int m,n,i,j,sum[10][10];
	printf("enter the no.of rows and coloumns of matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of first matrix \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sum[i][j]);
		}
	}
	printf("enter the elements of second matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sum[i][j]);
		}
	}
	printf("sum of two matrice:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("\n%d",sum[i][j]);
		}
	printf("\n");
}
return  0;
}
