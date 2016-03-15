#include <stdio.h>
#include <math.h>

int main(void){
  double x,y;
  printf("%s\n","X: Y:" );
  scanf("%lf %lf",&x,&y);

  printf("%lf\n",sqrt(x) );
  printf("%lf\n",exp(x) );
  printf("%lf\n",log(x) );
  printf("%lf\n",log10(x) );
  printf("%lf\n",fabs(x) );
  printf("%lf\n",ceil(x) );
  printf("%lf\n",floor(x) );
  printf("%lf\n",pow(x,y) );
  printf("%lf\n",fmod(x,y) );
  printf("%lf\n",sin(x) );
  printf("%lf\n",cos(x) );
  printf("%lf\n",tan(x) );
}
