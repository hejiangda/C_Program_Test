#include <stdio.h>

//fig5.14.c

long factorial(long number);

void main(void){
  int i;
  for(i=0;i<=10;i++){
    printf("%2d! = %ld\n",i,factorial(i));
  }
}

long factorial(long number){
  long i;
  if(number<=1){
    return 1;
  }else{
    i=number*factorial(number-1);
    printf("\t\t**%ld**\n",i);
    return i;
  }
}
