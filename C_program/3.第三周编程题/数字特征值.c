#include <stdio.h>
int mi();
void print_2(int val2);
int main()
{
	
	int a,c,n,p,h;
	/*aΪ��������cΪa�����һλ��2��������
	nΪ��ǰ��λ�� ,pΪn��2��������hΪ���յ���*/ 
	printf("Please input a: \n");
	scanf("%d",&a);
//		a=342315;
		h=0;
		n=1;
	do{
		c=(a%10)%2;//b
		a=a/10;
		p=n%2;//p
		if(c==0&&p==0){
			h=h+mi(n) ;
		}else if(c!=0&&p!=0){
			h=h+mi(n);
		}
	n++;
	}while (a>0);
	printf("%d",h);
}

int mi(n)
{
	int i=1;
	while(n>1){
		i=i*2;
		n--;
	}
	return i;
}


