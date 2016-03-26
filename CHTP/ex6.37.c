#include <stdio.h>

int recursiveMinmum(int array[],int size);

int main(int argc, char const *argv[]) {
  int array[10]={9,8,7,6,5,4,356,29879,41,50};
  int i;
  int result;
  // for(i=0;i<10;i++){
  //   scanf("%d",array+i);
  // }
  result=recursiveMinmum(array,10);
  printf("%d\n",result );
  return 0;
}

int recursiveMinmum(int array[],int size){
  int temp;
  if (size==1){
    return array[0];
  }else {
    temp=recursiveMinmum(array+1,size-1);
    if(temp>array[0]){
      return array[0];
    }else return temp;
  }
}
