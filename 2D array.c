#include<stdio.h.>
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
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	
}
