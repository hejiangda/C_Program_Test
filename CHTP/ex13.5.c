#include <stdio.h>
#define SUM(x,y) ((x)+(y))
int main(int argc, char const *argv[])
{
  int x,y;
  scanf("%d %d",&x,&y);
  printf("%s%d\n","sum = ",SUM(x,y) );
  return 0;
}
