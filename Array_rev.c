#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
	scanf("%d",&A[i]);
	}
	int left=0;
	int right=n-1;
	while(left<right){
		int temp=A[right];
		A[right]=A[left];
		A[left]=temp;
		left++;
		right--;
	}
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
}
