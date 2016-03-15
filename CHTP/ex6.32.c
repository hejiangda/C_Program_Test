#include <stdio.h>

int linearSearch(int *array,int key,int size);

int main(int argc, char const *argv[]) {
  int array1[]={1,2,3,4,5,6,7,8,9};

  printf("%d\n",linearSearch(array1,3,9) );
  return 0;
}

int linearSearch(int array[],int key,int size){
  static int i=-1;
  i++;
  if(size==0){
    if(key!=array[0]){
      return -1;
    }else return i;
  }
  if(key==array[0]){
    return i;
  }else {
    linearSearch(array+1,key,size-1);
  }

}
