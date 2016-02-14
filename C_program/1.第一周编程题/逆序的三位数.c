/*逆序的三位数*/

#include <stdio.h>

int main(void)
{
	int a,b1,b2,b3,b;
	
	printf("请输入一个正三位数：\n");
	scanf("%d",&a);
	
	b1=a/100;
	b2=a/10%10;
	b3=a%10;
	
	b=b3*100+b2*10+b1*1;
	
	printf("这个正三位数的倒数是：%d",b);
	
	return 0; 
}
