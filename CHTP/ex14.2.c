#include <stdio.h>
#include <stdarg.h>
int product(int i,...);
int main(int argc, char const *argv[])
{
  int pro;
  pro=product(5,1,2,3,4,5);
  printf("%d\n",pro );
  return 0;
}
int product(int i,...)
{
  int pro=1;
  int j;
  va_list ap;
  va_start(ap,i);
  for(j=1;j<=i;j++)
  {
    pro*=va_arg(ap,int);
  }
  va_end(ap);
  return pro;
}
