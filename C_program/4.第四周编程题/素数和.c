#include <stdio.h>
int nn=1,i=1,a=2,mm=0,num=1,k,n,m;
int su[200]={0};
int main()
{
printf("Please input n&m:");
scanf("%d %d",&n,&m);
while(num<201){

if (sua(a)!=1){
	su[num]=sua(a);
	a++;
}else if (sua(a)==1){
	a++;
	num--;
}
	num++;
}
//while (i<201)
//{
//	printf("%d ",su[i]);
//	i++;
//}
while (n<m+1)
{
	k=k+su[n];
	n++;
}
printf("k=%d",k);
return 0;
}

// ÇóËØÊýº¯Êý 
int sua(a){
nn=1;mm=0;
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
