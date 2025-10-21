#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r,ci;
	scanf("%d%d%d",&p,&t,&r);
	ci=p*pow((1+(r/100)),t)-p;
	printf("%d",ci);
}
