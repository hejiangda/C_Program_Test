#include <stdio.h>
#include <stdarg.h>

double average(int i,...);

int main(int argc, char const *argv[])
{
  double w=37.5,x=22.5,y=1.7,z=10.2;
  printf("%s%.1f\n%s%.1f\n%s%.1f\n%s%.1f\n","w=",w,"x=",x,"y=",y,"z=",z );
  printf("%s%.3f\n%s%.3f\n%s%.3f\n",
         "The average of w,x:",average(2,w,x),
         "The average of w,x,y:",average(3,w,x,y),
         "The average of w,x,y,z:",average(4,w,x,y,z));
  return 0;
}

double average(int i,...)
{
  double total=0;
  int j;
  va_list ap;
  va_start(ap,i);
  for(j=1;j<=i;j++)
  {
    total+=va_arg(ap,double);
  }
  va_end(ap);
  return total/i;
}
