#include <stdio.h>
#include <math.h>
int prime(int number);

void main(void){
  int n,i=0;
  for(n=1;n<=10000;n++){
    if(1==prime(n)){
      ++i;
      printf("%d\t",n);
      if(0==i%10){
        printf("\n");
      }
    }
  }
  printf("\n");
}

int prime(int number){
  int status,n,i=0,m;
  m=(int)floor(sqrt(number)+.5);
  for(n=1;n<=m;n++){
    if(0==number%n){
      i++;
    }
  }
  if (2==i){
    status=1;
  }else status=0;
  return status;
}
