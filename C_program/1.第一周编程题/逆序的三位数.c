/*�������λ��*/

#include <stdio.h>

int main(void)
{
	int a,b1,b2,b3,b;
	
	printf("������һ������λ����\n");
	scanf("%d",&a);
	
	b1=a/100;
	b2=a/10%10;
	b3=a%10;
	
	b=b3*100+b2*10+b1*1;
	
	printf("�������λ���ĵ����ǣ�%d",b);
	
	return 0; 
}
