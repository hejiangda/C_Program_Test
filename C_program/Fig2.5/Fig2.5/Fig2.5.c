/*Fig.2.5: fig02_05.c*/
#include <stdio.h>

int main(void)
{
	int integer1;
	int integer2;
	int sum;

	printf("Enter first integer\n");
	scanf_s("%d", &integer1);

	
	printf("Enter first integer\n");
	scanf_s("%d", &integer2);
	
	sum = integer1 + integer2;
	
	printf("Sum is %d\n", sum);
	
	return 0;
}