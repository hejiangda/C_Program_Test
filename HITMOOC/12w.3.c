#include <stdio.h>
#include <math.h>

int main(){
  double s[100];
  int n,m;
  for (n=0;n<=99;n++){
    s[n]=sqrt(n);
  }
  for (n=0;n<=9;n++){
    printf("%7d",n );
  }
  for (n=0;n<=99;n++){
    if(m!=n/10){
      m=n/10;
      printf("\n%d",m );
    }
    printf("%7.3f",s[n]);
  }
}
