#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Bitwise Operators: \n");
	printf("Bitwise AND(&)\n%d&%d = %d\n",a,b,a&b);
	printf("Bitwise OR(|)\n%d|%d = %d\n",a,b,a|b);
	printf("Bitwise XOR(^)\n%d^%d = %d\n",a,b,a^b);
	printf("LEFT Shift(<<)\n%d<<%d = %d\n",a,b,a<<b);
	printf("Right Shift(>>)\n%d>>%d = %d\n",a,b,a>>b);
}
