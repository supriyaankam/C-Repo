#include<stdio.h>
int main()
{
	int x=2;
	float y=2.5;
	float ans=Add(&x,&y);
	printf("%d %f\n",x,y);
	printf("%out %p %p\n",&x,&y);
}
