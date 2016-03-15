#include <stdio.h>

void main(void){
  unsigned long i;

  for(i=1;i<=300000000;i++){
    if(0==i%100000000){
      printf("%ld",i);
    }
  }
}
