#include <stdio.h>

int even(int n);

void main(void){
  int n;
  scanf("%d",&n);
  printf("%d",even(n));
}

int even(int n){
  int ret;
  if(0==n%2){
    ret=1;
  }else ret=0;
  return ret;
}
