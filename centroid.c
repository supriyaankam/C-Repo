#include<stdio.h>
int main()
{
	float x1,x2,x3,y1,y2,y3,x,y;
	printf("enter the values of x1,x2,x3,y1,y2,y3");
	scanf("%f%f%f%f%f%f",&x1,&x2,&x,&y1,&y2,&y3);
	x=(x1+x2+x3)/3;
	y=(y1+y2+y3)/3;
	printf("(x,y)=(%f,%f)",x,y);
}
