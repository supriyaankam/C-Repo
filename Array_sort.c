#include<Stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=1;j<n;j++){
			if(A[j-1]>A[j]){
				int temp=A[j-1];
				A[j-1]=A[j];
				A[j]=temp;
		}
	}
}
	for(i=0;i<n;i++){
		printf("%d",A[j]);
	}
}
