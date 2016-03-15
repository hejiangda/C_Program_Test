#include <stdio.h>

int perfect(long number);

void main(void){
  long number;
  for(number=2;number<=10000000;number++){
    if(1==perfect(number)){
      printf("%ld\n",number);

    }

  }
}

int perfect(long number){
  long n,sum=0;
  int status;
  for(n=1;n<number;n++){
    if(0==number%n){
      sum+=n;
    }
  }
  if(sum==number){
    status=1;
  }else status=0;
  return status;
}

/*
  for(n=1;n<number;n++){
  if 0==number%n
  sum+=n
}

*/
