#include <stdio.h>

int gcd(int x,int y);

void main(void){
  int x,y;
  scanf("%d %d",&x,&y);
  printf("%d\n",gcd(x,y));
}

int gcd(int x,int y){
  if(0==y){
    return x;
  }else{
    return gcd(y,x%y);
  }
}
