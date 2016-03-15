#include <stdio.h>
int GCD(int a,int b);

void main(void){
  printf("%d\n",GCD(6,12));
}

int GCD(int a,int b){
  int i,n,m;
  int max,min;
  max=a>b?a:b;
  min=a<b?a:b;
  for(i=1;i<=min;i++){
    if(0==min%i || 0==max%min){
      n=i;
      if(0==max%n);
      m=n;
    }
  }
  return m;
}
