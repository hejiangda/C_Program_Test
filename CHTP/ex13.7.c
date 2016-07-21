#include <stdio.h>
#define MINIMUM3(x,y,z) z<((x)<(y)?x:y)?z:(x)<(y)?x:y

int main(int argc, char const *argv[])
{
  int x=10,y=15,z=20;
  int min;
  min=MINIMUM3(x,y,z);
  printf("%d\n",min );
  return 0;
}
