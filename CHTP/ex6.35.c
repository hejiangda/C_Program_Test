#include <stdio.h>

void printArray(int array[],int size);

int main(int argc, char const *argv[]) {
  int array[10]={0,1,2,3,4,5,6,7,8,9};
  printArray(array,sizeof(array)/sizeof(array[0]));
  return 0;
}

void printArray(int array[],int size){
  if(size!=0){
    printf("%d",array[0]);
  }else {
    printf("\n" );
    return;
  }
  printArray(array+1,size-1);
}
