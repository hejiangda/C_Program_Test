#include <stdio.h>

union floatPoint{
  float f;
  double d;
  long double x;

};
union floatPoint value;

void print(void);
int main(int argc, char const *argv[]) {
  printf("float:\n");
  scanf("%f",&value.f);
  print();
  printf("double:\n");
  scanf("%lf",&value.d);
  print();
  printf("long double:\n");
  scanf("%Lf",&value.x );
  print();
  return 0;
}
void print(void){
  printf("float%-15f\n",value.f);
  printf("double%-15lf\n",value.d);
  printf("long double%-15Lf\n",value.x);
}
