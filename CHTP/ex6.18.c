#include <stdio.h>
#ifndef SIZE
#define SIZE 10
#endif

void someFunction(const int b[],int startIndex,int size);

int main(int argc, char const *argv[]) {
  int a[SIZE]={8,3,1,2,6,0,9,7,4,5};
  printf("Answer is:\n");
  someFunction(a,0,SIZE);
  printf("\n" );
  return 0;
}

void someFunction(const int b[],int startIndex,int size){
  if(startIndex<size){
    someFunction(b,startIndex+1,size);
    printf("%d ",b[startIndex]);
  }
}
