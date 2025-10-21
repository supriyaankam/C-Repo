#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2;
	printf("enter the values of x1,y1,x2,y2");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	r=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("%f is r",r);
	return 0;
	
}
