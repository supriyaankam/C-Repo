#include<stdio.h>
#include<math.h>
float main()
{
	float x1,x2,y1,y2,r;
	printf("enter the values of x1,x2,y1,y2");
	scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	r=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("%f is r",r);
}

