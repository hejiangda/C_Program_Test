#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int i,j,h=0,k=0,n=0,x=0,num[20]={0},temp[20];
  srand(time(NULL));
  for(i=0;i<20;i++){
    temp[i]=rand()%20+1;
  }
  for(i=0;i<20;i++){
    x=temp[i];
    for(j=i;j<20;j++){
      if(x==temp[j]){
        k++;
      }
    }
    if(k==1){
      num[h]=temp[i];
      h++;
    }
    k=0;
  }
  for(i=0;i<20;i++){
    printf("%d\t",temp[i]);
    if(!((i+1)%5)){
      printf("\n");
    }
  }
  printf("\n");
  for(i=0;i<20;i++){
    if(0==num[i]){
      break;
    }
    printf("%d\t",num[i]);
    if(!((i+1)%5)){
      printf("\n");
    }
  }
  printf("\n");
  return 0;
}
