#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,x,a,b;
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++){
		for(j=1;j<=3;j++){
			x=pow(i,j);
			printf("%d ",x);
		}
		printf("\n");
	}
}
