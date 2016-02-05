#include <stdio.h>
#define STRANGER 10000000
#define RICH     1

int day,stranger,rich;

int main(){
  int square(int,int);
  for(day=1;day<=30;day++){
    rich+=STRANGER;
    stranger+=RICH*square(2,day-1);
  }
  printf("to Stranger: %d.%d yuan\n",stranger/100,stranger%100);
  printf("to Richman: %d.00 yuan\n",rich/100);
}

int square(int num,int power){
  int n=1;
  int product=1;
  for (;n<=power;n++){
    product=product*num;
  }
  return product;
}
