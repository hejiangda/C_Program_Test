/*Calculate the product of three integers */
#include <stdio.h>

int main(void)
{
	int x,y,z,result;/* declare variables*/

	printf("Enter three integers: "); /*prompt*/
	scanf_s("%d%d%d",&x,&y,&z);
	result=x*y*z;
	printf("The product is %d\n", result);
	return 0;
}
