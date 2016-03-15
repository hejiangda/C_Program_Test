#include <stdio.h>
float min(float a,float b,float c);
void main(void){
  printf("%f\n",min(5.1,5.2,6.3));
}

float min(float a,float b,float c){
  float min;
  min=a<=b?a:b;
  min=min<=c?min:c;
  return min;
}
