#include <stdio.h>

void square(int side);

void main(void){
  int side;
  scanf("%d",&side);
  square(side);
}

void square(int side){
  int i,j;
  for(i=0;i<side;i++){
    for(j=0;j<side;j++){
      printf("*");
    }
    printf("\n");
  }
}
