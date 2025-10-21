#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,tot;
	float avg;
	printf("Enter the values oof five subjects: ");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	tot=sub1+sub2+sub3+sub4+sub5;
	avg=tot/5.0;
	printf("%d",tot);
	printf("%.1f",avg);
}
