#include <stdio.h>
#include <math.h>

double hypotenuse(double a,double b);

void main(void){
  double a,b;
  scanf("%lf %lf",&a,&b);
  printf("%.2f\n",hypotenuse(a,b));
}

double hypotenuse(double a,double b){
  return sqrt(a*a+b*b);
}
