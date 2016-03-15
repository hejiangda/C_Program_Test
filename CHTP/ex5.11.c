#include <stdio.h>
#include <math.h>

float roundToInteger(float number);
float roundToTenths(float number);
float roundToHundreths(float number);
float roundToThousandths(float number);

void main(void){
  float number;
  scanf("%f",&number);
  printf("%.3f\n",roundToInteger(number));
  printf("%.3f\n",roundToTenths(number));
  printf("%.3f\n",roundToHundreths(number));
  printf("%.3f\n",roundToThousandths(number));
}


float roundToInteger(float number){
  return floor(number +.5);
}
float roundToTenths(float number){
  return floor(number*10 +.5)/10;
}
float roundToHundreths(float number){
  return floor(number*100 +.5)/100;
}
float roundToThousandths(float number){
  return floor(number*1000 +.5)/1000;
}
