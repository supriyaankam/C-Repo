#include<stdio.h>
int main()
{
	int n,i,temp;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int d;
	for(i=0;i<n;i++){
		for(d=0;d<n-i-1;d++){
			if(A[d]>A[d+1]){
				temp=A[d];
				A[d]=A[d+1];
				A[d+1]=temp;
			}
		}
	}
	printf("Sorted list in ascending order: \n");
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
}
