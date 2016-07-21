#include <stdio.h>
#include <stdlib.h>

struct node {
  char data;
  struct node *nextPtr;
};

typedef struct node NODE;

int main(){
  NODE c1;
  NODE *nPtr=NULL;
  NODE *newPtr=NULL;

  c1.data='0';
  c1.nextPtr=NULL;

  nPtr=&c1;
  system("stty raw");
  char x=getchar();
  while(x!='0'){
    nPtr->data=x;
    newPtr=malloc(sizeof(NODE));
    nPtr->nextPtr=newPtr;
    nPtr=newPtr;
    newPtr->data='0';
    newPtr->nextPtr=NULL;
    x=getchar();
  }
  system("stty cooked");
  printf("\n" );
  nPtr=&c1;
  while(nPtr!=NULL){
    printf("%c",nPtr->data);
    nPtr=nPtr->nextPtr;
  }

}
// newPtr=malloc(sizeof(ListNode));
