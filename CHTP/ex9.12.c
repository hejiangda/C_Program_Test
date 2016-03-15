#include <stdio.h>

void main(void){
  char c1[30];
  int n;

  scanf("%s%n",c1,&n);
  printf("%*s",2*n,c1);

}
