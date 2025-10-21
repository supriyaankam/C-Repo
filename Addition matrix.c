#include<stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	int A[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}
	int B[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&B[i][j]);
		}
	}
	 int C[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			C[i][j]=A[i][j]+B[i][j];
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
}
