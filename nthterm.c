#include<stdio.h>
int main()
{
	int a,n,d;
	printf("enter the values of a,n,d");
	scanf("%d%d%d",&a,&n,&d);
	float nthterm=a+(n-1)*d;
	printf("%f is nthterm",nthterm);
	return 0;
	
	
	
}
