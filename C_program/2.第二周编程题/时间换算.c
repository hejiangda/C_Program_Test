#include <stdio.h>

int main ()
{
//	define int 
int bjt,utc;

//	input
printf("�����뱱��ʱ�䣬Ϊһ����λ����\n");
scanf("%d",&bjt);
printf("��ղ�������ǣ�%d\n",bjt);

//	calculate	
int a,b,c,d;
a=bjt/1000;
b=bjt/100%10;
c=bjt/10%10;
d=bjt%10;
int min;
min=a*10*60+b*60+c*10+d;
//	��ȥ�˸���ͷ 
utc=min-60*8;
//	�ж�
int e,f,j;
e=utc/60;
f=utc%60;
j=e*100+f;
if(j>0){

}
else {
e=(24+((a*10+b)-8))*100;
f=c*10+d;
j=e+f;
}

printf("����Э��ʱ��Ϊ��%d\n",j);


 }
