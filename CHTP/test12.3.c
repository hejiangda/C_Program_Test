#include <stdio.h>

int main(void){

  struct node{
    int data;
    struct node *nextPtr;
  }

  newPtr=malloc(sizeof(struct node));

-
  free(newPtr);



  return 0;
}
