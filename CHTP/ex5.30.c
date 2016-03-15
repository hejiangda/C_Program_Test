#include <stdio.h>

int qualityPoints(int points);

void main(void){
  int points;
  scanf("%d",&points);
  printf("%d\n",qualityPoints(points));
}

int qualityPoints(int points){
  if(points<60){
    return 0;
  }else if(points<70){
    return 1;
  }else if(points<80){
    return 2;
  }else if(points<90){
    return 3;
  }else if(points<101){
    return 4;
  }
}
