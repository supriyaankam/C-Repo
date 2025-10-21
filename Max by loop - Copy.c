#include<stdio.h>
int main()
{
	int n,i,max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		i=n%10;
		if(max<i){
			max=i;
		}
		n=n/10;
    }
	printf("%d",max);
}
