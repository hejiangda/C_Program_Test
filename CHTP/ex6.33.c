#include <stdio.h>
#define DEBUG 0

int binarySearch(int array[],int head,int tail,int key);

int main(int argc, char const *argv[]) {
  int array1[100];
  int i,x;
  for(i=0;i<100;i++){
    array1[i]=i*2;
    if(DEBUG){
      printf("%d ",array1[i]);
    }
  }
  scanf("%d",&x);
  printf("%d\n",binarySearch(array1,0,100,x) );
  return 0;
}

int binarySearch(int array[],int head,int tail,int key){
  int mid,status=1;
  mid=(head+tail)/2;
  if(array[mid]>key){
    tail=mid-1;
  }else if(array[mid]<key){
    head=mid+1;
  }else if(array[mid]==key){
    return mid;
  }
  if(head==tail){
    if(array[head]==key){
      return head;
    }else return -1;
  }
  if(DEBUG){
    printf("**%d %d\n",head,tail);
  }
  status=binarySearch(array,head,tail,key);
  if(status==-1){
    return -1;
  }
}
