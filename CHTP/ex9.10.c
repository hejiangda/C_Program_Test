#include <stdio.h>

void main(void){
  printf("%.1d\n",12345);
  printf("%.2d\n",12345);
  printf("%.3d\n",12345);
  printf("%.4d\n",12345);
  printf("%.5d\n",12345);
  printf("%*.*f\n",1,1,1.2345);
  printf("%*.*f\n",1,2,1.2345);
  printf("%*.*f\n",1,3,1.2345);
  printf("%*.*f\n",1,4,1.2345);
  printf("%*.*f\n",1,5,1.2345);
}
