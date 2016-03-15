#include <stdio.h>

int main(int argc, char const *argv[]) {
  int array[1000];
  int i,j;
  for(i=0;i<1000;i++){
    array[i]=1;
  }
  array[0]=0;
  array[1]=0;

  j=2;
  while(j<100){

    for(i=j+1;i<1000;i++){
      if(i%j==0){
        array[i]=0;
      }
    }
    j++;
  }
  j=0;
  for(i=0;i<1000;i++){
    // printf("**%d\n",i);
    if(array[i]==1){
      printf("%4d",i);
      j++;
      if(j%10==0){
        printf("\n");
      }
    }
  }
  printf("\n");
  return 0;
}
