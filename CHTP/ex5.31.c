#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(void);

void main(void){
  int i=0,tails=0,heads=0;
  srand(time(NULL));

  for (i=1;i<=100;i++){
    if(1==flip()){
      heads++;
    }else tails++;
  }
  printf("Heads=%d\tTails=%d\n",heads,tails);

}

int flip(void){
  return rand()%2;
}
