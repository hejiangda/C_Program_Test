#include <stdio.h>

void main(void){
  int hua;
  float she;
  for (hua=0;hua<=212;hua++){
    she=5.0/9.0*(hua-32);
    printf("hua=%d\tshe=%.3f\n",hua,she);
  }
}
