#include <stdio.h>

int main(){
	int a,b,nos,nj;
	nos=nj=0;
	printf("���������֣�\n");
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
	printf("�����������ż�������ǣ�%d %d",nj,nos);
	return 0;
}
