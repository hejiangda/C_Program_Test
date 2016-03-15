#include <stdio.h>

int main(int argc, char const *argv[]) {
  int array[20];
  int n,put=0,i,j=0;
  printf("%s\n","Please input 20 integers." );
  for(n=0;n<20;n++){
    scanf("%d",&array[n]);
  }
  for(n=0;n<20;n++){
    for(i=0;i<n;i++){
      if(array[n]!=array[i]){
        j++;
      }
    }
    if(j==i){
      printf("%d\n",array[n] );
    }
    j=0;
  }
  return 0;
}
