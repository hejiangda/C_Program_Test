#include <stdio.h>
//求因子并相加 
int qiuyinzi(a){
	int b,c ;
	b=1;
	c=0;
	while(b<a){
		while (a%b!=0 ){
			b++;
		} 
		if(b==a){break;
		} 
		c=b+c;
		b++;
	}
	if (a!=c){
		return -1;
	}else
	return a;
}
//

//主函数
int main()
{
	int n,m,k,q,p;
	q=0;
	p=0;
	printf("请输入区间：\n");
	scanf("%d %d",&n,&m);
//n=1,m=100000;
	printf("%d到%d之间的完数为：",n,m);
	while(n<=m){
		k=qiuyinzi(n);
		if(k!=(-1) &&q>0){
		printf(" %d",k);
		p=p+1;
		}else if(k!=(-1))printf("%d",k);
		q++; 
		n++;
	}
	if (p==0){printf("\n");
	}
	
	return 0;
}


// 
