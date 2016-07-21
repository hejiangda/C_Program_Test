#include <stdio.h>
#define ARRAYSUM(array,num)  for(i=0;i<num;i++) sum+=array[i]
int main(int argc, char const *argv[])
{
  int array[5]={1,2,3,4,5};
  int i,sum=0;
  ARRAYSUM(array,5);
  printf("%d\n",sum );
  return 0;
}
