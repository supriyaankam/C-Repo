#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=n;i>1;i--){
		for(j=0;j<i;j++){
			printf("*");
		}
		for(j=0;j<=n-i-1;j++){
			printf("  ");
		}
		for(j=0;j<i;j++){
			printf("*");
	    }
	    if(i>2){
	    	printf("\n");
		}
	}
	for(i=0 ;i<n;i++){ 
		for(j=0;j<=i;j++){
			if (i==0){
				printf("\n");
			}
			printf("*");
		}
		for(j=0;j<n-i-1;j++){
			printf("  ");
		}
		for(j=0;j<=i;j++){
			printf("*");
	    }
	    printf("\n");
	}
}
