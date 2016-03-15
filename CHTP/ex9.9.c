#include <stdio.h>

int main(void){
  int a;
  int *b=&a;

  printf("%d\n",b);
  printf("%i\n",b);
  printf("%o\n",b);
  printf("%u\n",b);
  printf("%x\n",b);
  printf("%p\n",b);

  return 0;
}
