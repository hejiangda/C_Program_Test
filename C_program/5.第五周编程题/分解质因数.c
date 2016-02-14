#include <stdio.h>


// ÇóËØÊıº¯Êı 
int sua(a){
int nn=1;int mm=0;
	while(nn<=a)
{
	if((a%nn)==0){
		mm++;
	}
	nn++;
}
if(mm==2)return a;
else return 1;
}
//
int a,c;
int main()
{
	int b,m;

	printf("Please input b:\n");
	scanf("%d",&b);
	printf("%d=",b);
	if(b==sua(b)){printf("%d",b);
	}
	else {
		do{
		b=chu(b);
		printf("%dx",a);
	}	while(b!=sua(b)); 
		printf("%d\n",b);
}
	
	
}


int *p=&a;

int chu(b){
		a=2;
		if(b%*p==0){
		c=b/(*p);}
		else{
		do{
			a++;
			}while (b%*p!=0);
			c=b/(*p);
		}
	return c; 
}
