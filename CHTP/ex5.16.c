#include <stdio.h>

int integerPower(int base,int exponent);

void main(void){
  int base,exponent;
  scanf("%d %d",&base,&exponent);
  printf("%d",integerPower(base,exponent));
}

int integerPower(int base,int exponent){
  int i,ret=1;
  for(i=1;i<=exponent;i++){
    ret*=base;
  }return ret;
}
