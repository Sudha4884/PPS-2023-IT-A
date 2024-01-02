#include<stdio.h>
int binarySearch(int arr[],int n,int x) {
	int low=0;
	int high=n-1;
	int mid;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==x) {
			return mid;
		} else if (arr[mid]<x) {
			low  = mid+1;
		}else{
			high = mid-1;
		}
		}
		return-1;
	}
	
	int main()
	{
		int arr[] = {1,4,6,8,9,3};
		int n = sizeof(arr)/sizeof(arr[0]);
		int x= 2;
		int result = binarySearch(arr,n,x);
		if(result==-1) {
			printf("element is not found\n");
		}else{
			printf("element found at the index %d\n",result);
		}
		return 0;
	}

