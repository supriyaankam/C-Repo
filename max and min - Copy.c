#include<stdio.h>
int main()
{
	int i,max=0,min=0,n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Max =%d\n",max);
	printf("Min = %d\n",min);
}
