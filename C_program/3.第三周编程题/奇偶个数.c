#include <stdio.h>

int main(){
	int a,b,nos,nj;
	nos=nj=0;
	printf("请输入数字：\n");
	while (a!=-1){
		scanf("%d",&a);
		b=a%2;
	if (b==0){
		nos++;
	}
	else if(a>0){
	nj++;
	} 
	}
	printf("输入的奇数，偶数个数是：%d %d",nj,nos);
	return 0;
}
