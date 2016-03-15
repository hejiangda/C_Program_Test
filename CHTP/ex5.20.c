#include <stdio.h>

void square(int side,char fillCharacter);

void main(void){
  int side;
  char fillCharacter;
  scanf("%d %c",&side,&fillCharacter);
  square(side,fillCharacter);
}

void square(int side,char fillCharacter){
  int i,j;
  for(i=0;i<side;i++){
    for(j=0;j<side;j++){
      printf("%c",fillCharacter);
    }
    printf("\n");
  }
}
