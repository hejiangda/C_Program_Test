#include <stdio.h>
#define PRINTARRAY(array,num) for(i=0;i<num;i++) printf("%d\t",array[i] )
int main(int argc, char const *argv[])
{
  int i;
  int array[5]={1,2,3,4,5};
  PRINTARRAY(array,5);
  putchar('\n');
  return 0;
}
