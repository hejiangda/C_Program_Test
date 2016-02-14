#include <stdio.h>
int mi();
void print_2(int val2);
int main()
{
	
	int a,c,n,p,h;
	/*a为输入数，c为a的最后一位除2的余数，
	n为当前的位数 ,p为n除2的余数，h为最终得数*/ 
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


