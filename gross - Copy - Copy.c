#include<stdio.h>
int main()
{
	int basic_salary,HRA,DA;
	scanf("%d%d%d",&basic_salary,&HRA,&DA);
	float PF=0.12*basic_salary;
	printf("%.2f 2",PF);
	float grosssalary=basic_salary+HRA+DA+PF;
	printf("%.2f",grosssalary);
}
