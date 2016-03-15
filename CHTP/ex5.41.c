#include <stdio.h>
#include <math.h>

double distance(double x1,double y1,double x2,double y2);

void main(void){
  double x1,y1,x2,y2,num;
  scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
  num=distance(x1,y1,x2,y2);
  printf("%lf",num);
}

double distance(double x1,double y1,double x2,double y2){
  double s;
  s=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  s=fabs(s);
  return s;
}
