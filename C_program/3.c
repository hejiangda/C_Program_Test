#include <stdio.h>




int main(){
int a,t;
scanf("%d",&a);

do{
t=a%10;
a=a/10;	
printf("%d ",t);
} while (a>0);


return 0;
}
