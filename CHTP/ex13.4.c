#include <stdio.h>
#define NDEBUG
#include <assert.h>
#define PI 3.14159
#define VOLUM(r) ((4.0/3)*PI*(r)*(r)*(r))
int main(int argc, char const *argv[])
{
  float v,r;
  loop:
  printf("%s\n","Please input the radius:" );
  printf("%s\n","1<=r<=10" );
  scanf("%f",&r );
  if(r<1||r>10)
  {
    printf("%s\n","Input error!" );
    goto loop;
  }
  assert(r>=1&&r<=10);
  v=VOLUM(r);
  printf("The volum is %f.\n",v );
  return 0;
}
