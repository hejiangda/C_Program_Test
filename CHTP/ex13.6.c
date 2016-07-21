#include <stdio.h>
#define MINIMUM2(x,y) (x)<(y)?x:y

int main(int argc, char const *argv[])
{
  int x=10,y=15;
  int min;
  min=MINIMUM2(x,y);
  printf("%d\n",min );
  return 0;
}
