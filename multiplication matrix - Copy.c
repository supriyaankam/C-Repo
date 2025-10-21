#include<stdio.h>
int main()
{
	int n,m,i,j,k;
	scanf("%d%d",&m,&n);
	int A[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	int n1,m1;
	scanf("%d%d",&n1,&m1);
	int B[n1][m1];
	for(i=0;i<n1;i++){
		for(j=0;j<m1;j++){
			scanf("%d",&B[i][j]);
		}
	}
	int C[n][m1];
	for(i=0;i<n;i++){
		for(j=0;j<m1;j++){
			int sum=0;
			for(k=0;k<n;k++){
				sum+=A[i][k]*B[k][j];
			}
			C[i][j]=sum;
		}
		printf("%d",C[i][j]);
	}
	printf("\n");
}
