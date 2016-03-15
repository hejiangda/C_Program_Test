#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  srand(time(NULL));
  int array[10];
  int i,j;
  int n;

  for (i=0;i<10;i++){
    array[i]=rand()%1000;
  }
  for (i=0;i<10;i++){
    for(j=0;j<=i;j++){
      printf("%d%n",array[j],&n);
      printf(",  %d  .",n);

    }
    printf("\n");
  }
  return 0;
}
