#include <stdio.h>
#include <math.h>
/*
  <3 2
  >3 +0.5/h
  max=10
*/
float calculateCharges(float hours);

void main(void){
  float customers[3];
  int i;
  float sumCharge=0;
  float sumHours=0;
  printf("%s\n","Please input the hours the customers park their car:" );
  scanf("%f %f %f",&customers[0],&customers[1],&customers[2]);
  printf("Car\tHours\tCharge\n");

  for(i=1;i<=3;i++){
    printf("%d\t",i);
    printf("%.1f\t",customers[i-1]);
    printf("%.2f\n",calculateCharges(customers[i-1]));
    sumHours+=customers[i-1];
    sumCharge+=calculateCharges(customers[i-1]);
  }printf("TOTAL\t%.1f\t%.2f\n",sumHours,sumCharge);
}

float calculateCharges(float hours){
  float ret;

  if(hours<=3){
    ret=2.00;
  }else {
    ret=floor(hours-3)*0.5+2.00;
  }if(ret>10.0){
    ret=10.0;
  }
  return ret;
}
