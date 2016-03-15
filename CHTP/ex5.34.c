#include <stdio.h>

int power(int base,int exponent);

void main(void){


}

int power(int base,int exponent){
  if(1==exponent){
    return base;
  }else{
    return base*power(base,exponent-1);
  }
}
