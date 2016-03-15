#include <stdio.h>

double celsius(double fahrenheit);
double fahrenheit(double celsius);

void main(void){
  int n;
  printf("celsius to fahrenheit\n");

  for(n=0;n<=100;n++){
    printf("%d\t%.2lf\n",n,fahrenheit(n));
  }
  printf("fahrenheit to celsius\n");
  for(n=32;n<=212;n++){
    printf("%d\t%.2lf\n",n,celsius(n));
  }

}

double celsius(double fahrenheit){
  return 5.0/9.0*(fahrenheit-32);
}

double fahrenheit(double celsius){
  return 9.0*celsius/5.0+32;
}
