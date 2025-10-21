#include<stdio.h>
int main()
{
	int marks;
	scanf("%d",marks);
	//A-> 90 to 100;
	//B-> 80 to 90;
	//C-> 70 to 80;
	//D-> 60 to 70;
	if(marks<=100 && marks>90)
	{
		printf("A");
	}
	else if (marks<=90 && marks>80)
	{
		printf("B");	
	}
	else if (marks<=80 && marks>70){
		printf("C");
	}
	else if (marks<=70 && marks>60){
		printf("D");
	}
}
